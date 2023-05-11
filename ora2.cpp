// Example program
#include <iostream>
#include <string>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>


int main()
{
    int x = 1;
    int y = 10;
    std::string eredmeny;
    eredmeny = (x == y) ? "egyenlõ" : "nem egyenlõ";
    std::cout << eredmeny << std::endl;

    if (x == y)
        eredmeny = "egyenlõ";
    else
        if (x < y)
            eredmeny = "kisebb";
        else
            eredmeny = "nagyobb";

    //feladat
    eredmeny = (x == y) ? "egyenlõ" : (x < y) ? "kisebb" : "nagyobb";
    std::cout << eredmeny << std::endl;

    int day = 4;
    switch (day) {
    case 6:
        std::cout << "Today is Saturday";
        break;
    case 7:
        std::cout << "Today is Sunday";
        break;
    default:
        std::cout << "Looking forward to the Weekend";
    }

    int i = 0;
    while (i < 10) {
        std::cout << i << std::endl;
        i++;
    }
    do {
        ++i;
        std::cout << i << std::endl;
    } while (i < 10);

    for (int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    // Outer loop
    for (int i = 1; i <= 2; ++i) {
        std::cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j) {
            std::cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }

    i = 0;
    /*for (;;) {
        //Sleep(1);
        std::cout << ++i << std::endl;
    }*/

    int myNumbers[5] = { 10, 20, 30, 40, 50 };
    for (int i : myNumbers) {
        std::cout << i << "\n";
    }

    std::cout << sizeof(myNumbers);
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    std::cout << getArrayLength;

    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
        std::cout << myNumbers[i] << "\n";
    }

    i = 0;
    while (i < 10) {
        std::cout << i << "\n";
        i++;
        if (i == 4) {
            break;
        }
    }

    i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        std::cout << i << "\n";
        i++;
    }

    std::string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << letters[i][j] << "\n";
        }
    }

    //feladatok
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
