#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void llenaLetras(char v[])
{
    int i, j, num, jx;
    int lc, i;
    char aux[10];
    srand(time(NULL));
    lc = 1 + rand() % 10;
    for (int j = 0; j < 10; j++)
    {
        aux[j] = 97 + rand() % 26;
    }

    for (i = 0, jx = 0; i < lc; i++)
    {
        if (v[i] != aux[jx])
        {
            v[i] = aux[jx];
        }
        else
        {
            jx++;
        }
    }
    v[i] = '\0';
}
void ordenaLetras(char v[])
{
    int i, j;
}
void buscarLetra(char v[])
{
    int i, j;
}
main()
{
    char letras[100];
    llenaLetras(letras);
    ordenaLetras(letras);
    buscarLetra(letras);
}