#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printPercentagePeopleFirstAgeRange(int totalPeople, int countAgeRange)
{

    printf("Porcentam de pessoas na primeira faixa etária é: %.2f %%\n", (((100 * countAgeRange ) / (totalPeople)) / 1.0));
}

void printPercentagePeopleLastAgeRange(int totalPeople, int countAgeRange)
{
    printf("Porcentam de pessoas na última faixa faixa etária é: %.2f %%\n", (((100 * countAgeRange ) / (totalPeople)) / 1.0));
}

void printQuantityPeopleEachAgeRange(int countAgeRange[])
{
    for(int i = 0; i <= 5; i++)
    {
        printf("Quantidade de pessoas na faixa etária %d: %d\n", i, countAgeRange[i]);
    }
}

int main ()
{

    int totalPeople = 8;
    int age;
    int *arrCountAgeRange = (int *) malloc(5);

    for(int i = 0; i < totalPeople; i++)
    {
        printf("Qual sua idade?\n");
        scanf("%i", &age);
        if(age <= 15)
        {
            arrCountAgeRange[0] += 1;
        }
        else if(age >= 16 && age <= 30)
        {
            arrCountAgeRange[1] += 1;
        }
        else if(age >= 31 && age <= 45)
        {
            arrCountAgeRange[2] += 1;
        }
        else if(age >= 46 && age <= 60)
        {
            arrCountAgeRange[3] += 1;
        }
        else if(age > 60)
        {
            arrCountAgeRange[4] += 1;
        }
    }
    printQuantityPeopleEachAgeRange(arrCountAgeRange);
    printPercentagePeopleFirstAgeRange(totalPeople, arrCountAgeRange[0]);
    printPercentagePeopleLastAgeRange(totalPeople, arrCountAgeRange[4]);
}