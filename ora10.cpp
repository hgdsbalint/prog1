#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//könnyû feladatok
/*
    irjon függvényt amely paramétere intiger és megszámolja hogy az adott számot hány számmal tudjuk osztani úgy hogy 0 maradék legyen
*/
int oszthatok(int szam){
    int oszthato = 0;
    for(int i= 1; i <= szam; i++)
    {
        if(szam%i==0){
            oszthato++;
        }
    }
    cout << oszthato << endl;
}
/*
    irjon egy függvényt amelynek 10 méretû integer tömb a paramétere és visszaadja a maximum helyét
*/
int maximum(int tomb[10]){
    int max = tomb[0];
    int mhely = 0;
    for(int i = 0; i < 10; i++)
    {
        if(tomb[i] >= max)
        {

            max = tomb[i];
            mhely = i;
        }
    }
    cout << mhely << endl;
}
/*
    irjon egy függvenyt ami rendezi a parameterkent kapott 10 meretü tombot
*/
void rendez2(int tomb2[10]){
    sort(tomb2, tomb2+10);
}

void rendez(int tomb2[10]){
    int temp = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j+1 < 10-i; j++){
            //cout << tomb2[j] << endl;
            if(tomb2[j]>tomb2[j+1])
                temp = tomb2[j];
                tomb2[j] = tomb2[j+1];
                tomb2[j+1] = temp;
        }
    }
}
//nehéz feladatok
/*
    1. hozzon létre osztályt vagy struktúrát monitor néven amelynek szélessége magassága és márkája van
    2. kérjen be a felhasználótól 5 egész számot majdd irjuk ki azokat amelyek az átlagnál nagyobbak
*/


class Monitor{
public:
    int szelesseg;
    int magassag;
    string marka;
};



int main(){
/*
    tömb = vektor
    megszámlálás
    összegzés
    eldöntés
    kiválasztás
    keresés
    maximum/minimum
    rendezés
    kiválogatás
    szétválogatás

    3db könnyebb
    3db nehezebb
*/
    oszthatok(10);
    int tomb[10] = {1,2,3,4,5,6,7,8,9,10};
    maximum(tomb);
    int tomb2[10] = {1,6,3,2,5,8,7,8,4,6};
    rendez(tomb2);
    for(int i = 0; i < 10; i++){
        cout << tomb2[i] << " " ;
    }
    cout << endl;
    // osztaly feladat
    vector<Monitor> monitorok;

    Monitor m1;
    m1.szelesseg = 50;
    m1.magassag = 60;
    m1.marka = "Dell";
    monitorok.push_back(m1);

    Monitor m2;
    m2.szelesseg = 60;
    m2.magassag = 40;
    m2.marka = "Samsung";
    monitorok.push_back(m2);

    Monitor m3;
    m3.szelesseg = 60;
    m3.magassag = 40;
    m3.marka = "Dell";
    monitorok.push_back(m3);

    Monitor m4;
    m4.szelesseg = 65;
    m4.magassag = 60;
    m4.marka = "Samsung";
    monitorok.push_back(m4);
    vector<Monitor> samsung;

    for(Monitor m: monitorok){
        if(m.marka == "Samsung"){
            samsung.push_back(m);
        }
    }
    for(Monitor m: samsung){
        cout << m.magassag << " " << m.marka << " " << m.szelesseg << endl;
    }

    // atlag feladat
    int szamok[5];
    int szam = 0;
    for(int i = 0; i < 5; i++){
        cin >> szam;
        szamok[i] = szam;
    }
    int sum = 0;
    double atlag = 0;
    for(int i = 0; i < 5; i++){
        sum = szamok[i] + sum;
    }
    atlag = (double)sum / 5;
    cout << atlag << endl;;
    for(int i = 0; i < 5; i++){
        if(szamok[i] > atlag){
            cout << szamok[i] << " ";
        }
    }
}
