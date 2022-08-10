#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
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
    //implemento el metodo de seleccion
    for(int i=0;i<strlen(v)-1;i++){
        for(int j =0; j<strlen(v);j++){
            //implementacion del metodo
            if(v[i] > v[j]{
                aux = v[i];
                v[i] = v[j];
                v[j] = aux
                }
           }

    }
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
