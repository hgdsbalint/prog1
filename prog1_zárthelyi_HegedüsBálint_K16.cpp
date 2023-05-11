#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void fibonacci(int a, int b){
    int osszeg = 0;
    int szam1 = 0;
    int szam2 = 1;
    int max = 0;
    for(int i = 1; i <= b-2; i++){
        osszeg = szam1 + szam2;
        szam1 = szam2;
        szam2 = osszeg;
        cout << osszeg << " ";
        //
        cout << b << endl;
        if(b < osszeg){
            max = osszeg;
        }
    }
    cout << max << endl;;
}
void atlag(int tomb[4][4]){
    double tomb2[4];
    int j;
    int osszeg = 0;
    double atlag;
    for(int i = 0; i < 4; i++){
        osszeg = 0;
        for(j = 0; j < 4; j++){
            osszeg = osszeg + tomb[i][j];
        }
        atlag = (double)osszeg/4;
        tomb2[i] = atlag;
    }
    for(int i = 0; i < 4; i++){
        cout << tomb2[i] << " ";
    }
    cout << endl;
}
void csere(char a, char tomb3[10], int b){
    a = tomb3[b-1];
    cout << a << endl;;
}
class Doboz{
public:
    int szelesseg;
    int magassag;
    int melyseg;
};

int main(){
    cout << "1es feladat" << endl;
    fibonacci(5, 21);
    int tomb[4][4] = {{4,5,6,7},
                    {5,9,7,5},
                    {3,1,9,8},
                    {4,6,9,7}};
    /*for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << tomb[i][j] ;
        }
    }*/
    cout << "2es feladat" << endl;;
    atlag(tomb);
    cout << "3as feladat" << endl;
    char tomb3[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    csere(' ', tomb3, 5);
    //4
    /*int szam2;
    cin >> szam2;*/
    cout << "5os feladat" << endl;
    //5
    vector<Doboz> dobozok;

    Doboz d1;
    d1.szelesseg = 50;
    d1.magassag = 60;
    d1.melyseg = 40;
    dobozok.push_back(d1);

    Doboz d4;
    d4.szelesseg = 60;
    d4.magassag = 90;
    d4.melyseg = 70;
    dobozok.push_back(d4);

    Doboz d2;
    d2.szelesseg = 30;
    d2.magassag = 40;
    d2.melyseg = 47;
    dobozok.push_back(d2);

    Doboz d3;
    d3.szelesseg = 20;
    d3.magassag = 90;
    d3.melyseg = 40;
    dobozok.push_back(d3);

    Doboz d5;
    d5.szelesseg = 50;
    d5.magassag = 70;
    d5.melyseg = 30;
    dobozok.push_back(d5);

    int magassag;

    for(Doboz m: dobozok){

        magassag = magassag + m.magassag;
}
    cout << "magassaga :" << magassag << endl;
    //6
    cout << "6os feladat" << endl;
    ifstream file("randomok.txt");
    vector<int> szamok;
    int szam;
    int osszeg = 0;
    double atlag;
    int random[5];
    for (int i = 0; i < 5; i++)
    {
        osszeg = 0;
        for (int j = 0; j < 5; j++)
        {
            file >> szam;
            osszeg = osszeg + szam;
            cout << szam << " ";
        }
        atlag = (double)osszeg/5;
        cout << atlag;
        if(atlag < 37){
            cout << "Igen\n";
        }
        else{
            cout << "Nem\n";
        }
        fstream kicsi("kisebb.txt");
        if(file.is_open() && atlag > 37){
            kicsi << "Igen\n";
        }
        if(file.is_open() && atlag <= 37){
            kicsi << "Nem\n";
        }
        cout << endl;
    }
    file.close();
}
