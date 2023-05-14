#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n-1) + fibonacci(n-2);
}

int maxFibonacci(int a, int b) {
  int n = 0;
  int fibN = fibonacci(n);
  int maxFib = 0;
  while (fibN <= b) {
    if (fibN >= a) {
      maxFib = fibN;
      n++;
      fibN = fibonacci(n);
    } else {
      n++;
      fibN = fibonacci(n);
    }
  }
  return maxFib;
}
double* atlag(int tomb[4][4]){
    double* tomb2 = new double[4];
    int j;
    int osszeg = 0;
    for(int i = 0; i < 4; i++){
        osszeg = 0;
        for(j = 0; j < 4; j++){
            osszeg = osszeg + tomb[i][j];
        }
        tomb2[i]= (double)osszeg/4;
    }
    return tomb2;
}
void csere(char& m, char tomb3[10], int kar){
    m = tomb3[kar-1];
}
class Doboz{
public:
    int szelesseg;
    int magassag;
    int melyseg;

        Doboz(int szeles, int magas, int mely)
        {
            this->szelesseg = szeles;
            this->magassag = magas;
            this->melyseg = mely;
        }
        ~Doboz()
        {

        }
};

int main(){
    cout << "1es feladat---------" << endl;
    int maxFib = maxFibonacci(10, 100);
    cout << "A legnagyobb Fibonacci szam: " << maxFib << endl;
    int tomb[4][4] = {{4,5,6,7},
                    {5,9,7,5},
                    {3,1,9,8},
                    {4,6,9,7}};
    /*for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << tomb[i][j] ;
        }
    }*/
    cout << "2es feladat-----------" << endl;

    double* tomb2 = atlag(tomb);

    for(int i=0; i <4; i++){
        cout << tomb2[i] << endl;;
    }
    //cout << atlag(tomb) << endl;

    cout << "3as feladat----------" << endl;
    char tomb3[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    char m = 's';
    csere(m, tomb3, 5);
    cout << m << endl;
    //4
    /*int szam2;
    cin >> szam2;*/
    cout << "5os feladat-------" << endl;
    //5
    Doboz a(10, 30, 1);
    Doboz b(10, 31, 1);
    Doboz c(10, 29, 1);
    Doboz d(10, 28, 1);
    Doboz e(10, 32, 1);

    vector<Doboz> dobozok;
    dobozok.push_back(a);
    dobozok.push_back(b);
    dobozok.push_back(c);
    dobozok.push_back(d);
    dobozok.push_back(e);

    int magassag = 0;

    for(Doboz m: dobozok){

        magassag = magassag + m.magassag;
}
    cout << "magassaga : " << magassag << endl;
    cout << "6os feladat------------" << endl;
    ifstream file("randomok.txt");
    vector<int> szamok;
    int szam;
    int osszeg = 0;
    double atlag;
    int random[5];
    ofstream kicsi;
    kicsi.open("kisebb.txt");
    vector<string> igha;
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
        cout << atlag << endl;
        if(atlag < 37){
            igha.push_back("Igen\n");
        }
        else{
            igha.push_back("Nem\n");
        }
        /*if(file.is_open() && atlag > 37){
            kicsi << "Igen\n";
        }
        if(file.is_open() && atlag <= 37){
            kicsi << "Nem\n";
        }
        cout << endl;*/
    }
    for(string i: igha){
        kicsi << i;
        }
    file.close();
}
