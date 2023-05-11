#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal{ // osztály
    public:
            string nev;
            int kor;

            static int szamlalo;

            void setSuly(int s){
                this->suly = s;
            }

            int getSuly(){
                return this->suly;
            }

            void mozog(){
                cout << nev << " megmozdult." << endl;
            }

            void baratkozik(Animal b);

            Animal(){ // üres konstruktor
                nev = " ";
                kor = 0;
                //cout << nev << " konstruktora lefutott" << endl;
                szamlalo++;
            }

            Animal(string n) {//paraméterezett konstruktor
                nev = n;
                kor = 0;
                //cout << nev << " konstruktora lefutott" << endl;
                szamlalo++;
            }

            Animal(string n, int k){//teljes konstruktor
                //this aktuális objektum pointer tipus
                nev = n;
                kor = k;
                //this ->nev = n;
                //this ->kor = k;
                //cout << nev << " konstruktora lefutott" << endl;
                szamlalo++;
            }
            ~Animal(){
                //cout << nev << " destruktora lefutott" << endl;
                szamlalo--;
            }

            static void printSzamlalo(){
                cout << szamlalo << endl;
            }
    protected:
        int labak_szama;
        void print_labak(){
            cout << this->nev <<" -nek" << this->labak_szama << " laba van" << endl;
        }
    private:
        int suly;
        void print_suly(){
            cout << this->suly << endl;
        }

};

string idosebb(Animal a, Animal b){
    if(a.kor>b.kor){
        return a.nev;
    }else{
        return b.nev;
    }
}

class Kutya : public Animal{
    public:
        string szin;
        string fajta;

        Kutya(){}

        Kutya(string nev, int kor, string szin, string fajta){
            this->nev = nev;
            this->kor = kor;
            this->szin = szin;
            this->fajta = fajta;
            szamlalo++;
        }
        ~Kutya(){
            //cout << nev << " destruktora lefutott" << endl;
            szamlalo--;
        }
    protected:
        void printlab(){
            cout << labak_szama << endl;
            print_labak();
        }
};

void Animal::baratkozik(Animal a){
    cout << nev << " es " << a.nev << " baratok lettek" << endl;
}

int Animal::szamlalo = 0;

ostream& operator<<(ostream& os, Animal a){
    os << a.nev << " " << a.kor << endl;
    return os;
}

/*Animal legidosebb(vector<Animal> v)
{
    Animal idos("", 0);
    for(int i= 0; i < v.size();i++)
    {
        if(v[i].kor > idos.kor){
            idos = v[i];
            cout << idos;
        }
    }
    //cout << idos << endl;;
}*/
/*vector<int> sorrend(vector<Animal> v)
{
    for(int i = v.size(); i > 0; i--)
    {
        for(int j = 0; j < i-1; i++)
        {
            if(v[j].kor > v[j+1].kor)
               {
                    int temp = v[j].kor;
                    v[j].kor = v[j+1].kor;
                    v[j+1].kor = temp;
               }
        }
    }
    return v;
}*/
//házi rendezzük a vektort életkor szerint növekvõ sorrendbe

int main()
{
    Animal a;
    //a objektum
    a.nev= "Bodri";
    a.kor= 9;

    cout <<a.nev << " " << a.kor << endl;

    // Animal.mozog() //ilyen nincs
    a.mozog();
    // konstruktor - létrehozás/inicializálás
    // destruktor - törlõdik az objektum


    //Animal c();
    Animal d("Morzsa");
    Animal e("Bloki",1);
    //cout << c.nev << " " << c.kor << endl;
    cout << d.nev << " " << d.kor << endl;
    cout << e.nev << " " << e.kor << endl;

    a.baratkozik(e);
    //a.szamlalo = 0;
    cout << Animal::szamlalo << endl;
    Animal::printSzamlalo();

    Kutya k;// üres konstruktor hivás
    k.nev =  "Ubul";
    k.kor = 7;
    k.mozog();

    Kutya k2("Fifi", 4, "fehér", "puli");
    k2.mozog();
    Kutya::printSzamlalo();

    cout << idosebb(a,e) << endl;
    cout << idosebb(k,k2) << endl;

    vector<Animal> allatok;
    allatok.push_back(a);
    //allatok.push_back(c);
    allatok.push_back(d);
    allatok.push_back(e);
    allatok.push_back(k);
    allatok.push_back(k2);
    //legidosebb(allatok).nev
    /*for(int i:v)
    {
        cout << i.kor << " ";
    }*/
    cout << a << endl;
    //setter-irható
    //a.suly = 10;
    a.setSuly(10);

    //getter- olvasható
    //cout << a.suly << endl;
    cout << a.getSuly();



}
