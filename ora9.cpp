#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Allat{
public:
    string nev;
    int kor;

};

void operator>>(istream &i, Allat &a){
    i >> a.nev >> a.kor;
}

void operator<<(ofstream& o, Allat& a){
    o << a.nev << " " << a.kor <<'\n';
}
int main(){
    int x, y;
    int osszeg;
    cout << "Adjon meg egy egesz szamot " << endl;
    cin >> x;
    cout << "Adjon meg egy egesz szamot " << endl;
    cin >> y;
    osszeg = x+y;
    cout << "Az osszeg: " << osszeg << endl;

    /*Allat a
    cin >> a;
    cout << a.nev << " " << a.kor << endl;*/

    /*int x;
    cout << "Adjon meg egy szamot: " << endl;
    cin >> x;
    string nev;
    for(int i = 0; i < x; i++){
        vector <string> a;
        cin >> nev;
        a.push_back(nev);
    }*/

    /*
        ofstream - létrehoz és ir
        ifstream - csak olvas
        fstream - létrehoz, olvas, ir

    */
    //létrehoz
    ofstream file1("file1.txt");

    file1 << "Beirtam a fajlba\n";
    file1.close();

    ifstream file2("file1.txt");
    //olvas
    string text;
    while(getline(file2, text)){
        cout << text;
    }
    file2.close();






    string user;
    cout << "Adja meg a nevet: " << endl;
    cin >> user;

    ofstream user1("user.txt");
    user1 << user;
    user1.close();

    ifstream user2("user.txt");
    string text1;
    while(getline(user2, text1)){
        cout << text1;
    }
    user2.close();

    ofstream o1;
    o1.open("nev.txt", ios::out);
    o1.open("file1.txt", ios::out | ios::trunc);
    o1.close();

    fstream afile;
    afile.open("file1.txt", ios::out | ios::in);
    afile.close();

    /*ofstream allatok("allatok.txt");
    for(int i = 0; i < meret; i++){
        allatok << tomb[i];
    }
    allatok.close();*/

}
