#include <stdio.h>
#include <stdlib.h>

int main()
{
    long double liczba1, liczba2, wynik;
    char wybor;
    printf("=============================================================\n");
    printf("                   Witaj w kalkulatorze!\n");
    printf("=============================================================");
    do
    {
        printf("\n\nJesli chcesz wyjsc z programu wpisz 007\n\nPodaj pierwsza liczbe: ");
        scanf("%Lf", &liczba1);
        if(liczba1 != 007)
        {
        printf("Wybierz dzialanie: +  -  *  /       ");
        scanf(" %c", &wybor);
            if(wybor != '+' && wybor != '-' && wybor != '*' && wybor != '/')
            {
            printf("Podales niepoprawny typ dzialania, wprowadz jeszcze raz     ");
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
            default: printf("Podales niepoprawny typ dzialania\n");
            }
        printf("Wynik: %Lf %c %Lf = %Lf\n\n",liczba1, wybor, liczba2, wynik);
        printf("=============================================================");
        }
        else
            return 0;
    }  while(1);
return 0;
}

