#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Allat
{
protected:
    int azonosito;
    string nev;
    int suly;
public:
    void setAzon(int azon)
    {
        this->azonosito = azon;
    }
    int getAzon()
    {
        return this->azonosito;
    }
    void setNev(string neve)
    {
        this->nev = neve;
    }
    string getNev()
    {
        return this->nev;
    }
    void setSuly(int sulya)
    {
        this->suly = sulya;
    }
    int getSuly()
    {
        return this->suly;
    }
    Allat(int azon, string neve, int sulya)
    {
        this->azonosito = azon;
        this->nev = neve;
        this->suly = sulya;
        cout << "lefut" << endl;
    }
    ~Allat(){}
};
class Hal: public Allat
{
private:
    int hossz;
    string elohely;
public:
    void setHossz(int hossza)
    {
        this->hossz=hossza;
    }
    int getHossz()
    {
        return this->hossz;
    }
    void setElohely(string helye)
    {
        this->elohely = helye;
    }
    string getElohely()
    {
        return this->elohely;
    }

    Hal(int azon, string neve, int sulya, int hossza, string helye): Allat(azon, neve, sulya)
    {
        this->azonosito = azon;
        this->nev = neve;
        this->suly = sulya;
        this->hossz = hossza;
        this->elohely = helye;
    }
    ~Hal() {}
};
class Madar: public Allat
{
private:
    int szarnytav;
    string orszag;
public:
    void setSzarnytav(int szarny)
    {
        this-> szarnytav = szarny;
    }
    int getSzarnytav()
    {
        return this->szarnytav;
    }
    void setOrszag(string orszaga)
    {
        this->orszag = orszaga;
    }
    string getOrszag()
    {
        return this->orszag;
    }
    Madar(int azon, string neve, int sulya, int szarny, string orszaga): Allat(azon, neve, sulya)
    {
        this->azonosito = azon;
        this->nev = neve;
        this->suly = sulya;
        this->szarnytav = szarny;
        this->orszag = orszaga;
    }
    ~Madar() {}
};

ostream& operator<<(ostream& os, Hal h)
{
    return os << h.getAzon() << " " << h.getNev() << " " << h.getSuly() << " " << h.getHossz() << " " << h.getElohely();
}

int main()
{
    Allat a(1,"Blöki",8);
    Hal h(2,"Nemo",4,28,"Atlanti ocean");
    Madar m(3, "Sas", 5, 70, "USA");

    cout << h << endl;
}
