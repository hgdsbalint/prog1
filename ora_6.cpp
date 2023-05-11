#include <iostream>
#include <string>

using namespace std;

bool palindrome(string s)
{
    for(int i = 0; i < (s.length()/2)+1; ++i)
    {
        if(s.at(i) != s.at(s.length()-i -1))
        {
            return false;
        }
    }
    return true;
}

//32tól 127ig
void printascii()
{
    for(int i = 32; i < 128; ++i)
    {
        int var = i;
        cout << var <<" "<< char(var) << endl;
    }
}
/*void piramis(int magassag)
{
    for(int i = 1; i <= magassag; ++i)
    {
        for(int j = magassag-i; j > 0; --j)
        {
            if(j != magassag)
            {
                cout << " ";
            }
            else
            {
                cout << "#";
            }
            cout << "  ";

        }
        for(int k = 0; k < i; ++k)
            {
                cout << "#" << endl;
            }
    }
}
*/
void abs(int tomb[], int tombmeret)
{
    for(int i = 0; i < tombmeret; ++i)
    {
        int abs = 0;
        if(tomb[i] < 0)
        {
            abs = tomb[i];
            cout << abs * -1 << " ";
        }
        else
        {
            cout << tomb[i] << " ";
        }

    }
      cout << endl;
}
int sekelymasolat(int t[], int meret)
{

}

int main()
{
    //cout << palindrome("habbah") << endl;
    //printascii();
    //piramis(3);
    int tomb[5] = {0,-1,-2,5,-8};
    int tombmeret = sizeof(tomb) / sizeof(int);
    for(int i = 0; i < tombmeret; ++i)
    {
        cout << tomb[i] << " ";
    }
    cout << endl;
    abs(tomb, tombmeret);
}







