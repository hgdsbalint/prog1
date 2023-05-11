#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Termek{
    protected:
        int azon;
        int ar;
        string lejarat;

    public:
        void setAzon(int a){
            this -> azon = a;
        }
        int getAzon(){
            return this -> azon;
        }
};

class Etel: protected termek{
    private:
        string osszetevok;
        double suly;


};

class Ital: protected termek{
    private:
        int mennyiseg;
        string szin;


};
int main()
{
    cout << "aaa"
}
