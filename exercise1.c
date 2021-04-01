#include <stdio.h>
#include <stdlib.h>
#include<string.h>


void printArray(char array[], int tam)
{

    for(int i = 0; i < tam; i++)
    {
        printf("%c\t", array[i]);
    }
    printf("\n");
}

// if crescente == 1 --> ordena crescente
// if crescente == -1 --> ordena decrescente
void insercao(char vet[], int tam, int decrescente)
{

    int i, j;
    char x;
    for (i = 1; i < tam; i++)
    {
        x = vet[i];
        j = i - 1;
        while (j >= 0 && ((strcmp(&x, &vet[j])*decrescente) < 0))
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = x;
    }
    printArray(vet, tam);
}


int main()
{
    int quantGrupos = 5;
    int tamArray = 4;
    char value;
    char *values =  (char *) malloc(tamArray);


    for(int i = 0; i < quantGrupos; i++)
    {
        for (int j = 0; j < tamArray; j++)
        {
            printf("Digite um caractere dentre [A, B, C, D]\n");
            scanf(" %c", &value);
            values[j] = value;
        }

        printf("Imprimindo na ordem que foi digitado:\n");
        printArray(values, tamArray);
        printf("Imprimindo na ordem crescente: \n");
        insercao(values, tamArray, 1); //ordem crescente
        printf("Imprimindo na ordem decrescente: \n");
        insercao(values, tamArray, -1); //ordem decrescente
    }

}

