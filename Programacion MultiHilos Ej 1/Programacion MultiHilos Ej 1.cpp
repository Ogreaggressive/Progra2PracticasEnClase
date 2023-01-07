


#include "Formato.h"
#include <iostream>
#include <thread>
#include <mutex>
#include <random>

using namespace std;

long cont = 0;
mutex m;
mt19937 mt(1729);
uniform_int_distribution<int> dist(0, 2);

void incrementar(int idHilo)
{
    for (int i = 0; i < 10000000; i++)
    {
        m.lock();
        cont++;
        cout << "hilo:" << idHilo<<cont << endl;
        m.unlock();
    }
}

void printChar(int x, int y, char c)
{
    m.lock();
    gotoxy(x,y);
    cout << c;
    m.unlock();
}

void cambiarXYAleatoriamente(int& x, int& y)
{
    int mX = dist(mt) - 1;
    int mY = dist(mt) - 1;
    if (x + mX > 0 && x+mX<10)
    {
        x += mX;
    }
    if (y + mY > 0 && y + mY < 10)
    {
        y += mY;
    }    
}

void personajeAleatorio(int x, int y, char c)
{
    while (true)
    {
        printChar(x, y,' ');
        cambiarXYAleatoriamente(x,y);
        printChar(x, y, c);
        this_thread::sleep_for(chrono::milliseconds(200));
    }
}

int main()
{
    /*
    thread* hilos[10];
    for (int i = 0; i < 10; i++)
    {
        hilos[i] = new thread(incrementar, i);
    }

    for (int i = 0; i < 10; i++)
    {
        hilos[i]->join();
    }
    cout << "cont:" << cont << endl;
    */

    thread per1(personajeAleatorio, 5, 5, 1);
    thread per2(personajeAleatorio, 7, 7, 2);
    thread per3(personajeAleatorio, 9, 9, 3);

    per1.join();
    per2.join();
    per3.join();

    return 0;
}
