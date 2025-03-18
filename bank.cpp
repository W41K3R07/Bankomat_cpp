#include <iostream>
#include <ctime>
#include "bank.h"
/**
autorzy: Piotr Osowiec i Przemys³aw Mendel
*/



/**
 ************************************************************************************
 nazwa: Konstruktor
 opis: w konstruktorze sa pseudolosowane i zapisywane do tablicy struktur tab
 wartosci takie jak:
 ilosc waluty posiadanej przez bankomat w zakresie od 500 do 2300
 ilosc transakcji od 1 do 5
 numer bankomatu
 zakladamy ze w naszej symulacji jest 10 bankomatow przez co w konstruktorze
 zapiszemy numery bankomatow od 1 do 10
 parametry:
 brak
 zwracany typ i opis: brak - w nim zapisywane sa wartoœci do tablicy tab
 **************************************************************************************
 */
Bank::Bank() {
    srand(time(0));
    tab = new Bankomat[10];

    for (int i = 0; i < 10; i++) {
        tab[i].amount = (rand() % 1800) + 500;
        tab[i].payout = (rand() % 5) + 1;
        tab[i].num = i+1;
    }
}
/**
 ************************************************************************************
 nazwa: wyplata
 opis: metoda reprezentuje wyplacanie waluty z bankomatu
 wartosci wyplacane sa pseudolosowe a ilosc wyplat z konkretnego
 Bankomatu jest pobierana z tablicy tab
 wyplata jest rejestrowana komunikatem z numerem bankomatu i iloscia wyplaconej waluty
 numer równiez jest pobierany z tablicy tab
 w razie próby wyplacenia wiekszej ilosci waluty z bankomatu niz on posiada
 wyswietli sie komunikat braku mozliwosci wyplaty z numerem bankomatu i iloscia waluty
 która próbowano wyplacic
 parametry:
 brak
 zwracany typ i opis: void - brak zwracanych wartosci
 **************************************************************************************
 */
void Bank::wyplata() {

for (int i = 0; i < 10; i++) {
    for (int j = 0; j < tab[i].payout; j++) {
        int withdrawal = (rand() % 450)+ 50;
        if ( withdrawal <= tab[i].amount ) {
            tab[i].amount -= withdrawal;
            std::cout << "Wyplata z bankomatu " << tab[i].num << ": " << withdrawal << std::endl;
        }
        else{
            std::cout<<"brak mozliwosci wyplaty "<<withdrawal<<" z bankomatu "<<i+1<< std::endl;
        }

        }
    }

}
/**
 ************************************************************************************
 nazwa: show
 opis: metoda wyswietlajaca z tablicy tab wartosci ile waluty posiada dany bankomat
 oraz ile zostalo przeprowadzonych transakcji
 parametry:
 brak
 zwracany typ i opis: void - brak zwracanych wartosci
 **************************************************************************************
 */
void Bank::show() {
    for (int i = 0; i < 10; i++) {
        std::cout << "Bankomat " << i + 1 << ": Stan pieniedzy: " << tab[i].amount
                  << ", Liczba wyplat: " << tab[i].payout << std::endl;
    }
}
/**
 ************************************************************************************
 nazwa: Dekonstruktor
 opis: zwalnia pamiec usuwajac tablice tab
 parametry:
 brak
 zwracany typ i opis: brak - zwalnia pamiec, usuwa tablice tab
 **************************************************************************************
 */
Bank::~Bank(){
delete []tab;
}
