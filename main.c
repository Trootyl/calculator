/* kalkulator.c -- po prostu kalkulator
autor - Pawel Stateczny
ostatnia aktualizacja - 12.04.2019 / 20:28 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    long double liczba1, liczba2, wynik;
    char wybor;
    char sprawdz[50];
    printf("=============================================================\n");
    printf("                   Witaj w kalkulatorze!\n");
    printf("=============================================================");
    do
    {
        printf("\n\nJesli chcesz wyjsc z programu wpisz Q\n\nPodaj pierwsza liczbe: ");
        while(1)
        {
            scanf("%s", sprawdz);
            if(strcmp(sprawdz, "q") == 0 || strcmp(sprawdz, "Q") == 0)
                return 0;
            if(sscanf(sprawdz, "%Lf", &liczba1) != 1)
                printf("To nie liczba, wpisz liczbe jeszcze raz: ");
            else
                break;
        }
        printf("Wybierz dzialanie: +  -  *  /       ");
        scanf(" %c", &wybor);
        if(wybor != '+' && wybor != '-' && wybor != '*' && wybor != '/')
        {
            printf("Podales niepoprawny typ dzialania, wprowadz jeszcze raz.     ");
            scanf(" %c", &wybor);
        }
        printf("Podaj druga liczbe: ");
        scanf("%Lf", &liczba2);
        switch(wybor)
        {
            case '+': wynik = liczba1 + liczba2;
            break;
            case '-': wynik = liczba1 - liczba2;
            break;
            case '*': wynik = liczba1 * liczba2;
            break;
            case '/': wynik = liczba1 / liczba2;
            break;
            default: printf("Podales niepoprawny typ dzialania.\n");
        }
        printf("Wynik: %Lf %c %Lf = %Lf\n\n",liczba1, wybor, liczba2, wynik);
        printf("=============================================================");
    }  while(1);
    return 0;
}
