#ifndef BANK_H
#define BANK_H
/**
autorzy: Piotr Osowiec i Przemyslaw Mendel
*/

/**
*******************************************************************************
 nazwa: Bankomat
 opis:
 struktura ta jest reprezentacja bankomatu, który opisany jest wlasciwosciami
 amount typu <int> okresla ilosc waluty w bankomacie
 payout typu <int> okresla ilosc transakcji ktore beda wykonane
 num typu <int> okreœla numer bankomatu
 parametry:
 brak
 zwracany typ i opis: brak
 *******************************************************************************
*/
struct Bankomat{
int amount;
int payout;
int num;
};
/**
*******************************************************************************
 nazwa: Bank
 opis:
 Klasa ta przechowuje
 tablice dynamiczna struktur opisanych powyzej
 metode wyplata typu <void> ktora reprezentuje transakcje z bankomatami
 metode show wyswietlajaca dane o bankomatach odczytujac je z tablicy struktur
 Konstruktor w ktorym zapisywane sa wartosci do tablicy tab
 Destruktor który zwalnia pamiec usuwajac tablice tab
 dwie metody konstruktor i destruktor sa publiczne
 natomiast tablica sktruktur jest prywatna
 parametry:
 brak
 zwracany typ i opis: brak
 *******************************************************************************
*/
class Bank{
private:
Bankomat* tab;

public:
    void wyplata();
    void show();
    Bank();
    ~Bank();
};



#endif
