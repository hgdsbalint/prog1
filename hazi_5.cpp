#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int>& operator>>(vector<int>& vb, int c)
{
    for (vector<int>::iterator it = vb.begin(); it != vb.end();)
    {
        if (*it == c)
        {
            it = vb.erase(it);
        }
        else
        {
            it++;
        }

    }
    return vb;
}
vector<int>& operator-(vector<int>& vec1, vector<int>& vec2)
{
    vector<int>::iterator it = vec1.begin();
    vector<int>::iterator jt = vec2.begin();
    while (it != vec1.end())
    {
        while (jt != vec2.end() && it != vec1.end())
        {
            if (*it == *jt)
            {
                it = vec1.erase(it);
                jt = vec2.begin();
            }
            else
            {
                ++jt;
            }

        }
        if (it != vec1.end())
            ++it;
        jt = vec2.begin();
    }

    return vec1;
}




int main()
{
    /*vec >> int >> int;
    vektorból eltávolít
        v{ 0,1,3,4,5 }
        v >> 0 >> 5
        v{ 1, 3, 4 }
        vec1 - vec2
        vector1 bõl vector 2t
        v1{ 1,2,3,4,5 }
        v2{ 3,5 }
        v1 - v2 = { 1,2,4 }*/

    vector<int> vb = { 0,1,3,4,5 };
    for (int i : vb) {
        cout << i << " ";
    }
    cout << endl;

    vb >> 0 >> 5;

    for (int i : vb)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> vec1 = { 1,2,3,4,5 };
    vector<int> vec2 = { 3,5 };

    for (int i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;
    vec1 - vec2;

    for (int& i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;

}

