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
 Na pocz�tku konstruktor obiektu inicjalizuje 10 bankomat�w z losowymi kwotami pieni�dzy
 i liczb� mozliwych wyplat.
 Pierwsze wywo�anie show() pokazuje poczatkowy stan tych bankomatow.
 Metoda wyplata()zostaje wywolana i dokonuje wyplat, zmieniaj�c ilosc pieni�dzy w ka�dym bankomacie.
 Drugie wywolanie show() wyswietla stan bankomat�w po dokonaniu wyplat.
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
