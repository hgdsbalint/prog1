#include <iostream>
#include <string>
#include <vector>

using namespace std;

int test(){return 0;}
int osszead(int a, int b){
    return a+b;
}
void operator<<(vector<double>& v, double a){
    v.push_back(a);
}


double osszead(double d1, double d2){
    return d1+d2;
}

vector<int> operator+(vector<int> v1, vector<int> v2){
    vector<int> o;
    for(int i: v1)
    {
        o.push_back(i);
        }
    for(int i: v2)
    {
        o.push_back(i);
        }
    return o;
}

vector<int>& operator<<(vector<int>& v, int a)
{
    v.push_back(a);
    return v;
}

void operator++(vector<int> v){
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
}

vector<float>& operator--(vector<float>& v){
    for(float& i: v){
        cout << --i << " ";
        }
    cout << endl;
    return v;
}

vector<int>& operator>>(vector<int>& vb, int c)
{
    vector<int> vn = {};
    for(int& i: vb){
        if(vb[i] != c)
        {
            vn.push_back(i);
        }
    }
    return vn;
}
vector<int>& operator-(vector<int>& vec1, vector<int>& vec2){
    vector<int> e;
    for(int& i:vec1){
            for(int& j:vec2){
                if(vec1[i] != vec2[j]){
                    e.push_back(i);
                }
            }
    }
    return e;
}

struct person{
    string nev;
    int kor;
    };


int main()
{
    osszead(2,3);
    osszead(2.1,5.4);
    //operátor túlterhelés
    /*
        nem felülirható
        sizeof
        typeid
        ::
        . .*
        ?:

    */
    vector<double> vd={0,1,2,3};
    vd.push_back(4);
    vd << 4.1;

    for(double d: vd)
    {
        cout << d << " ";
        }
    cout << endl;

    vector<int> v1 = {0,1,2,3};
    vector<int> v2 = {4,5,6,7};
    vector<int> o = v1+v2;

    for(int i: o){
        cout << i << " ";
    }
    cout << endl;

    vector<int> v = {0,1,2};
    v << 3;
    v << 4 << 5 << 6 << 7;

    for(int i: v){
        cout << i << " ";
    }
    cout << endl;
    ++v;
    vector<float> vf = {0, 2, 1.1, 5.6f};
    --vf;
    --vf;
    //házi feladat

    person p1;
    p1.nev = "Kiss József";
    p1.kor = 27;
    person p2;
    p2.nev = "Tóth Annamária";
    p2.kor = 31;

    //cout << p1 << " " << p2 << endl;

    /*
    vec >> int >> int;
    vektorból eltávolít
    v{0,1,3,4,5}
    v >> 0 >> 5
    v{1, 3, 4}

    vec1 - vec2
    vector1 bõl vector 2t
    v1{1,2,3,4,5}
    v2{3,5}
    v1-v2={1,2,4}
    */
    vector<int> vb = {0,1,3,4,5};
    for(int i: vb){
        cout << i << " ";
    }
    cout << endl;

    vb >> 0 >> 5;

    for(int i: vb)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> vec1 = {1,2,3,4,5};
    vector<int> vec2 = {3,5};

    vector<int> e = vec1 - vec2;

    for(int& i: e){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
