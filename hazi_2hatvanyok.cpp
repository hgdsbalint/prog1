#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i;
    for(i = 0; 300 >= pow(2,i); i++)
    {
        cout << pow(2,i) << endl;
    }
    return 0;
}
