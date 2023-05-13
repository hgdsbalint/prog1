#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

// Írjon függvényt, amelynek 2 integer paramétere van, és kiírja 100-ig azokat a számokat, amelyek oszthatóak a megadott 2 számmal.
void oszthato2(int a, int b)
{
    int szamol = 0;
    for(int i = 1; i <=100; i++)
    {
        if(i%a==0 && i%b==0)
        {
            szamol++;
        }
    }
    cout << szamol << endl;
}

void rendez(int tomb[10], int c)
{
    sort(tomb+c+1, tomb+10);
}
//csökkenõbe rendez
void rendez2(int tomb[10])
{
    int temp;
    for(int i=0; i<10 ; i++)
    {
        for(int j = 0; j+1 < 10-i ; j++)
        {
            if(tomb[j] < tomb[j+1])
            {
                temp = tomb[j];
                tomb[j] = tomb[j+1];
                tomb[j+1] = temp;
            }
        }
    }
}
void referencia(int& num) {
    num = num-1;
}


int main()
{
    ifstream file("dokumentum.txt"); // txt-fájl megnyitása olvasásra
    vector<int> szamok; // a számok tárolása egy vektorban
    int szam;

    for (int i = 0; i < 5; i++)   // soronkénti beolvasás és tárolás a vektorban
    {
        for (int j = 0; j < 5; j++)
        {
            file >> szam;
            cout << szam << " ";
            szamok.push_back(szam);
        }
        cout << endl;
    }
    file.close();

    sort(szamok.begin(), szamok.end()); // a számok sorba rendezése

    int legritkabb_szam = szamok[0]; // a legelsõ szám a kezdeti érték
    int min_elofordulas = 1;

    // végigmegyünk a vektoron és megkeressük a legritkábban elõforduló számot
    int elofordulas = 1;
    for (int i = 1; i < szamok.size(); i++)
    {
        if (szamok[i] == szamok[i-1])
        {
            elofordulas++;
        }
        else
        {
            if (elofordulas < min_elofordulas)
            {
                min_elofordulas = elofordulas;
                legritkabb_szam = szamok[i-1];
            }
            elofordulas = 1;
        }
    }
    // az utolsó szám ellenõrzése is szükséges
    if (elofordulas < min_elofordulas)
    {
        min_elofordulas = elofordulas;
        legritkabb_szam = szamok[szamok.size()-1];
    }
    cout << "A legritkabban elofordulo szam: " << legritkabb_szam << endl; // eredmény kiíratása

    oszthato2(2,50);

    int tomb[10] = {1,6,3,2,5,8,7,8,4,6};
    rendez(tomb, 4);
    for(int i = 0; i<10; i++)
    {
        cout << tomb[i] << " " ;
    }
    cout << endl;
    int tomb2[10] = {1,6,3,2,60,8,7,8,4,6};
    rendez2(tomb2);
    for(int i = 0; i<10; i++)
    {
        cout << tomb2[i] << " " ;
    }
    cout << endl;
    int num = 5;
    referencia(num);
    cout << referencia;
}
