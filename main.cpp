#include <iostream>
#include "bank.h"
/**
autorzy: Piotr Osowiec i Przemyslaw Mendel
*/
using namespace std;
/**
 ************************************************************************************
 nazwa: main
 opis:
 w funkcji main
 tworzony jest obiekt klasy Bank o nazwie bank
 Na pocz¹tku konstruktor obiektu inicjalizuje 10 bankomatów z losowymi kwotami pieniêdzy
 i liczb¹ mozliwych wyplat.
 Pierwsze wywo³anie show() pokazuje poczatkowy stan tych bankomatow.
 Metoda wyplata()zostaje wywolana i dokonuje wyplat, zmieniaj¹c ilosc pieniêdzy w ka¿dym bankomacie.
 Drugie wywolanie show() wyswietla stan bankomatów po dokonaniu wyplat.
 **************************************************************************************
 */
int main()
{
    Bank bank;
    bank.show();
    bank.wyplata();
    bank.show();

    return 0;
}
