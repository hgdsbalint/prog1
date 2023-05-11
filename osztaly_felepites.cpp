#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Termek{
    protected:
        int azonosito;
        string lejarat;
        int ar;
    public:
        void setAzonosito(int azon){
            this -> azonosito = azon;
        }
        int getAzonosito(){
            return this -> azonosito;
        }
        void setLejarat(string lejar){
            this -> lejarat = lejar;
        }
        string getLejarat(){
            return this-> lejarat;
        }
        void setAr(int ar){
            this -> ar = ar;
        }
        int getAr(){
            return this -> ar;
        }
        Termek(int azon, string lejar, int ar){ //konstruktor
            this -> azonosito = azon;
            this -> ar = ar;
            this -> lejarat = lejarat;
            //cout << "Lefutott";
        }
        ~Termek(){//destruktor
            //cout << "Lefutott";
        }
};
class Etel: public Termek{
    private:
            string osszetevok;
            double suly;
    public:
        void setOsszetevok(string ossze){
            this->osszetevok = ossze;
        }
        string getOsszetevok(){
            return this->osszetevok;
        }
        void setSuly(double suly){
            this->suly = suly;
        }
        double getSuly(){
            return this->suly;
        }
        Etel(int azon, string lejar, int ar, string ossze, double suly) : Termek(azon, lejar, ar){ //konstruktor
            this->azonosito = azon;
            this->ar = ar;
            this->lejarat = lejarat;
            this->osszetevok = ossze;
            this->suly = suly;
        }
        ~Etel(){};
};

class Ital: public Termek{
    private:
            int mennyiseg;
            string szin;
    public:
        void setMenny(int menny){
            this->mennyiseg = menny;
        }
        int getMenny(){
            return this->mennyiseg;
        }
        void setSzin(string szn){
            this->szin = szn;
        }
        string getSzin(){
            return this->szin;
        }
        Ital(int azon, string lejar, int ar, int menny, string szn) : Termek(azon, lejar, ar){ //konstruktor
            this->azonosito = azon;
            this->ar = ar;
            this->lejarat = lejarat;
            this->mennyiseg = menny;
            this->szin = szn;
        }
        ~Ital(){};
};
ostream& operator<<(ostream& os, Etel e){
    return os << e.getAzonosito() << " " << e.getLejarat() << " " << e.getAr() << " " << e.getOsszetevok() << " " << e.getSuly();
}

int main()
{
    Termek t(5, "2023a", 5000);
    Etel e(6,"fd",5,"dg", 2.4);
    Ital i(6,"s", 5, 6, "fe");

    cout << e << endl;
}
