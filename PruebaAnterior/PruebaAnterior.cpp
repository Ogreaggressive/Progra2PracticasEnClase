#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdio>

#define tam 20
///////
using namespace std;
enum movimiento { Salir = 0, Oeste, Este, Norte, Sur };

//partes que no aparecen en pantalla
void color(WORD col)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}

void gotoxy(short x, short y)
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void mostrar(int lista[tam])
{
    int pos;
    for (pos = 0; pos < tam; pos++)
    {
        cout << lista[pos] << endl;
    }
}

void numRandomGenerator(int& numx, int& numy)
{
    numx = rand() % (100);
    numy = rand() % (60);
}

void numRandomGenerator2(int& num)
{
    num = rand() % (4);
}

void VirusRandomGenerator(int listax[tam], int listay[tam])
{
    int numx, numy, pos;
    for (pos = 0; pos < tam; pos = pos + 1)
    {
        numx = rand() % 100;
        numy = rand() % 60;
        listax[pos] = numx;
        listay[pos] = numy;
    }
}

void vidaVirus(int listaPuntaje[tam])
{
    for (int pos = 0; pos < tam; pos++)
    {
        listaPuntaje[pos] = 1;
    }
}

//diseno del juego
void disenoPuntaje()
{
    gotoxy(0, 61); cout << "Virus Restantes: ";
}

void disenoMapa()
{
    for (int a = 0; a <= 60; a++)
    {
        for (int b = 0; b <= 110; b++)
        {
            if (a == 0 || a == 60 || b == 0)
            {
                cout << "#";
            }
        }
        cout << endl;
    }
    for (int c = 1; c <= 60; c++)
    {
        gotoxy(110, c); cout << "#";
    }
}

void disenoPersonaje(int x, int y)
{
    color(7);
    gotoxy(x, y - 1); cout << "0";
    gotoxy(x, y); cout << "|";
    gotoxy(x - 1, y); cout << "-";
    gotoxy(x + 1, y); cout << "-";
    gotoxy(x - 1, y + 1); cout << "d";
    gotoxy(x + 1, y + 1); cout << "b";
}

void disenoVirus(int numx, int numy)
{
    gotoxy(numx, numy); cout << "</>";
}

void disenoTodosVirus(int listax[tam], int listay[tam])
{
    for (int a = 0; a < tam; a++)
    {
        disenoVirus(listax[a], listay[a]);
    }
}

void disenoTotal(int x, int y, int listax[tam], int listay[tam])
{
    disenoMapa();
    disenoPuntaje();
    disenoPersonaje(x, y);
    disenoTodosVirus(listax, listay);
}

void borrarPersonaje(int x, int y)
{
    gotoxy(x, y - 1); cout << " ";
    gotoxy(x, y); cout << " ";
    gotoxy(x - 1, y); cout << " ";
    gotoxy(x + 1, y); cout << " ";
    gotoxy(x - 1, y + 1); cout << " ";
    gotoxy(x + 1, y + 1); cout << " ";
}

void BorrarVirus(int& numx, int& numy)
{
    color(0);
    gotoxy(numx, numy); cout << "</>";

}

//movimiento personaje y virus
bool extremosMapa(int x, int y)
{
    bool extremos;
    if (x > 2 && x < 108 && y>2 && y < 58)
    {
        extremos = true;
    }
    else
    {
        extremos = false;
    }
    return extremos;
}

void extremosVirus(int& x, int& y)
{
    if (x == 0)
    {
        x = x + 106;
    }
    if (x == 107)
    {
        x = x - 106;
    }
    if (y == 0)
    {
        y = y + 59;
    }
    if (y == 60)
    {
        y = y - 59;
    }
}

void movimientoTeclado(int& mov)
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            mov = Oeste;
            break;
        case 'd':
            mov = Este;
            break;
        case 'w':
            mov = Norte;
            break;
        case 's':
            mov = Sur;
            break;
        }
    }
}

void cambioPosicionPersonaje(int& x, int& y, int& mov)
{
    bool extremos;
    movimientoTeclado(mov);
    extremos = extremosMapa(x, y);
    if (extremos == true)
    {
        switch (mov)
        {
        case Oeste:
            x--;
            break;
        case Este:
            x++;
            break;
        case Norte:
            y--;
            break;
        case Sur:
            y++;
            break;
        }
    }
    else
    {
        switch (mov)
        {
        case Oeste:
            x = x + 105;
            break;
        case Este:
            x = x - 105;
            break;
        case Norte:
            y = y + 55;
            break;
        case Sur:
            y = y - 55;
            break;
        }


    }
}

void cambioVirus(int& x, int& y, int mov)
{
    switch (mov)
    {
    case 0:
        x = -1;
        break;
    case 1:
        x = 1;
        break;
    case 2:
        y = -1;
        break;
    case 3:
        y = 1;
        break;
    }
}

void cambioPosicionVirus(int& numx, int& numy)
{
    int rand, x = 0, y = 0;
    color(7);
    numRandomGenerator2(rand);
    cambioVirus(x, y, rand);
    numx = numx + x;
    numy = numy + y;
    extremosVirus(numx, numy);
}

void moverPersonaje(int& x, int& y, int mov)
{
    borrarPersonaje(x, y);
    cambioPosicionPersonaje(x, y, mov);
    disenoPersonaje(x, y);
}

void matarVirus(int x, int y, int numx, int numy, int& val)
{
    int a, b;
    a = abs(x - numx);
    b = abs(y - numy);
    if (a <= 2 && b <= 2)
    {
        val = 0;
    }
}

void moverVirus(int& numx, int& numy, int val)
{
    if (val == 1)
    {
        BorrarVirus(numx, numy);
        cambioPosicionVirus(numx, numy);
        disenoVirus(numx, numy);
    }
    if (val == 0)
    {
        BorrarVirus(numx, numy);
    }
}

void moverTodosVirus(int x, int y, int listax[tam], int listay[tam], int listaVida[tam])
{
    int val = 1;
    for (int a = 0; a < tam; a++)
    {
        matarVirus(x, y, listax[a], listay[a], val);
        if (val == 0)
        {
            listaVida[a] = 0;
            val = 1;
        }
        moverVirus(listax[a], listay[a], listaVida[a]);
    }
}

int puntaje(int listaVida[tam])
{
    int a = 0;
    color(7);
    for (int cont = 0; cont < tam; cont++)
    {
        a = a + listaVida[cont];
    }
    if (a < 10)
    {
        gotoxy(18, 61); cout << " ";
    }
    gotoxy(17, 61); cout << a;
    return a;
}

int Detective()
{
    int intentos = 0;
    char cad[30];
    char letra;
    int pos = 0;
    do
    {
        cout << " Ingrese la clave secreta : ";
        do {
            letra = _getch();
            if (letra != 13)
            {
                cad[pos] = letra;
            }
            else
            {
                cad[pos] = '\0';
            }
            cout << "*";
            pos = pos + 1;
        } while (letra != 13);//enter 13
        cout << endl;
        intentos = intentos + 1;
        fflush(stdin);
        pos = 0;

    } while (strcmp(cad, "shrek") != 0 && intentos < 3);

    if (strcmp(cad, "shrek") == 0)
    {
        intentos = 1;
    }
    else
    {
        intentos = 0;
    }
    return intentos;
}


void tiempo(int& tiempo, float& a)
{
    a = a + 0.05;
    if (a >= 1)
    {
        tiempo = tiempo + 1;
        a = 0;
    }
    gotoxy(0, 62); cout << "Tiempo:";
    gotoxy(8, 62); cout << tiempo;
}

void ganarJuego(int cronometro, int PuntajeTotal)
{
    system("cls");
    PuntajeTotal = 1200 - 20 * cronometro;
    if (PuntajeTotal > 0)
    {
        gotoxy(0, 0); cout << "Lograste ganar el juego mas dificil hecho por el hombre, tu puntaje final es!!!!!!!...................................:";
    }
    else
    {
        gotoxy(0, 0); cout << "das asco, no puedes ni terminar este juego tan facil, tu puntaje final es:";
    }
    gotoxy(0, 1); cout << PuntajeTotal;
    gotoxy(0, 2); cout << "apreta el boton 1 para salir";
    cout << endl;
}

int main()
{
    int x = 50, y = 50, salir = 0, listax[20], listay[20], listaVidaVirus[20], tot = 0, res, cronometro = 0, PuntajeTotal = 0;
    float a = 0, b = 20;
    srand(time(NULL));
    movimiento  mov;
    res = Detective();
    if (res == 1)
    {
        system("cls");
        VirusRandomGenerator(listax, listay);
        vidaVirus(listaVidaVirus);
        disenoTotal(x, y, listax, listay);
        Sleep(1000);
        while (b > 0)
        {
            color(7);
            Sleep(50);
            tiempo(cronometro, a);
            moverTodosVirus(x, y, listax, listay, listaVidaVirus);
            moverPersonaje(x, y, mov);
            b = puntaje(listaVidaVirus);
        }
        ganarJuego(cronometro, PuntajeTotal);
        while (salir != 1)
        {
            cin >> salir;
        }
    }
    else
    {
        cout << endl;
        cout << "no adivinaste la clave" << endl;
    }
    return 0;
}




/*
int AumentarPuntaje(int listaVidaVirus[tam])
{
    int a=0;
    for(int cont=0;cont<tam;cont++)
    {
        a=a+listaVidaVirus[cont];
    }
    return a;
}*/
