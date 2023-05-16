#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<int>& operator>>(vector<int>& v1, int a){
    for(auto it =v1.begin(); it != v1.end();){
        if(*it == a){
            it = v1.erase(it);
        }
        else{
            it++;
        }
    }
    return v1;
}

int osszead(int a, int b){
    return a+b;
}
double osszead(double a, double b){
    return a+b;
}
string osszead(string a, string b){
    return a+b;
}
string osszead(char a, char b){
    string eredmeny;
    eredmeny += a;
    eredmeny += b;
    return eredmeny;
}

int main(){
    vector<int> v1 = {1,2,3,4,5,6,7,8};
     v1 = v1 >> 2 >> 4 >> 6 >> 8;
    for(int i: v1){
        cout << i << " ";
    }
    cout << endl;
    cout << osszead(5, 9) << endl;
    cout << osszead(5.5, 6.7) << endl;
    cout << osszead("Hello", "World") << endl;
    cout << osszead('c', 'h') << endl;


}
