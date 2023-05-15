#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> prim(int a, int b){
    vector <int> primek;
    int szamol = 0;
    for(int i= a+1; i < b; i++){
        szamol = 1;
        for(int j = 2; j < i; j++){
            if(i%j==0){
                szamol = 0;;
            }
        }
        if(szamol != 0){
            //cout << i << " " << endl;
            primek.push_back(i);
        }
    }
    return primek;
}
vector <int> sormax(int tomb[4][4]){
    vector<int> maximum;
    int sornagy = 0;
    for(int i = 0; i < 4; i++){
        sornagy = 0;
        for(int j = 0; j < 4; j++){
            if(tomb[i][j] > sornagy){
                sornagy = tomb[i][j];

            }
        }
        maximum.push_back(sornagy);
        //cout << sornagy << " ";
    }
    return maximum;
}
int atlagkozel(int tomb2[5]){
    int osszeg = 0;
    double atlag = 0;
    double kozel[5];
    for(int i = 0; i < 5; i++){
        osszeg = osszeg + tomb2[i];
    }
    atlag = (double)osszeg/5;
    //cout << atlag << endl;
    int legkozelebbi = tomb2[0];
    int legkisebbKulonbseg = abs(tomb2[2] - atlag);

    for (int i = 1; i < 5; i++) {
        int kulonbseg = abs(tomb2[i] - atlag);
        if (kulonbseg < legkisebbKulonbseg) {
            legkozelebbi = tomb2[i];
            legkisebbKulonbseg = kulonbseg;
        }
    }
    //cout << legkozelebbi << endl;
    return legkozelebbi;
}
class Alma{
public:
    string szin;
    string fajta;
};

int main(){
    cout << "1es----" << endl;
    vector <int> primek = prim(2, 45);;
    for(int i = 0; i < primek.size(); i++){
        cout << primek[i] << " ";
    }
    cout << endl << "2es--------" << endl;


    int tomb[4][4] = {{4,6,9,40},
                        {5,9,4,7},
                        {6,9,7,1},
                        {41,25,68,1}};
    vector<int> v = sormax(tomb);
    for(int i = 0; i < v.size(); i++){
        cout << i+1 << "sor:" << v[i] << endl;
    }
    cout << endl << "3as------" << endl;


    int tomb2[5];
    for(int i = 0; i < 5; i++){
        cin >> tomb2[i];
    }
    cout << "atlaghoz legkozelebbi szam: "<< atlagkozel(tomb2);
    cout << endl << "4es------" << endl;

    vector<Alma> almak;
    Alma a1;
    a1.szin = "Zold";
    a1.fajta = "aa";
    almak.push_back(a1);

    Alma a2;
    a2.szin = "Zold";
    a2.fajta = "aa";
    almak.push_back(a2);

    Alma a3;
    a3.szin = "Piros";
    a3.fajta = "aa";
    almak.push_back(a3);

    int piros = 0;
    int zold = 0;
    for(Alma s: almak){
        if(s.szin=="Piros"){
            piros++;
        }
        if(s.szin=="Zold"){
            zold++;
        }
    }
    cout << piros << " piros alma van" << endl;
    cout << zold << " zold alma van" << endl;

    cout << endl << "5os------" << endl;
    ifstream file("dokumentum.txt"); // txt-fájl megnyitása olvasásra
    vector<int> szamok; // a számok tárolása egy vektorban
    int szam;
    ofstream file1("novekvo.txt");
    for (int i = 0; i < 5; i++)   // soronkénti beolvasás és tárolás a vektorban
    {
        for (int j = 0; j < 5; j++)
        {
            file >> szam;
            cout << szam << " ";
            szamok.push_back(szam);
        }
        cout << endl;
        sort(szamok+i*j(), szamok.end());
        for (int k = 0; k < 5; k++)
        {
            file1 << szamok[k] << " ";
        }
        file1 << endl;
    }
    file1.close();
    file.close();

    //sort(szamok.begin(), szamok.end()); // a számok sorba rendezése

}
