#include <iostream>
#include <string>
#include <vector>

using namespace std;

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

int main()
{
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

