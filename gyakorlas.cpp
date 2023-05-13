#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

// �rjon f�ggv�nyt, amelynek 2 integer param�tere van, �s ki�rja 100-ig azokat a sz�mokat, amelyek oszthat�ak a megadott 2 sz�mmal.
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
//cs�kken�be rendez
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
    ifstream file("dokumentum.txt"); // txt-f�jl megnyit�sa olvas�sra
    vector<int> szamok; // a sz�mok t�rol�sa egy vektorban
    int szam;

    for (int i = 0; i < 5; i++)   // soronk�nti beolvas�s �s t�rol�s a vektorban
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

    sort(szamok.begin(), szamok.end()); // a sz�mok sorba rendez�se

    int legritkabb_szam = szamok[0]; // a legels� sz�m a kezdeti �rt�k
    int min_elofordulas = 1;

    // v�gigmegy�nk a vektoron �s megkeress�k a legritk�bban el�fordul� sz�mot
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
    // az utols� sz�m ellen�rz�se is sz�ks�ges
    if (elofordulas < min_elofordulas)
    {
        min_elofordulas = elofordulas;
        legritkabb_szam = szamok[szamok.size()-1];
    }
    cout << "A legritkabban elofordulo szam: " << legritkabb_szam << endl; // eredm�ny ki�rat�sa

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
