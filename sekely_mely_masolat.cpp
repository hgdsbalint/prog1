#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool palindrome(string s) {
	for (int i = 0; i < (s.length() / 2) + 1; ++i) {
		if (s.at(i) != s.at(s.length() - i - 1)) {
			return false;
		}
	}
	return true;
}

void printascii() {
	for (int i = 32; i <= 127; i++) {
		cout << i << " " << (char)i << endl;
	}
}

void printpiramis(int magassag) {
	for (int i = 1; i <= magassag; i++) {
		for (int j = 1; j <= magassag - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << " ";
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		for (int j = 1; j <= magassag - i; j++) {
			cout << " ";
		}
		cout << endl;
	}

}

void pozitiv(int* t, int size) {

	for (int i = 0; i < size;i++) {
		if (t[i] < 0) {
			t[i] = abs(t[i]);
		}
	}

}

int* melymasolat(int* t, int size) {
	int* t2 = t;
	return t2;
}

int* sekelymasolat(int* t, int size) {
	int* t2 = new int[size];
	for (int i = 0; i < size; i++) {
		t2[i] = *(t + i);
	}
	return t2;

}

int char_count(string s, char c) {
	int count = 0;
	for (char ch : s) {
		if (ch == c) {
			count++;
		}
	}
	return count;
}

void tombfeltolt(char* ct) {
	for (int i = 97; i <= 122; i++) {
		ct[i-97] = (char)i;
	}
}

char kisbetu() {
	return (char)(rand() % 26 + 97);
}

char nagybetu() {
	return (char)(rand() % 26 + 65);
}

char szam() {
	return (char)(rand() % 10 + 48);
}

char specialis() {
	int blokk = rand() % 4;
	switch(blokk){
		case 0:
			return (char)(rand() % 15 + 33);
			break;
		case 1:
			return (char)(rand() % 7 + 58);
			break;
		case 2:
			return (char)(rand() % 6 + 91);
			break;
		case 3:
			return (char)(rand() % 4 + 123);
			break;
	}
}

string jelszogen() {
	int hossz = rand() % 5 + 8;
	string s = "";
	s += kisbetu();
	s += nagybetu();
	s += szam();
	s += specialis();
	for (int i = 4; i <= hossz; i++) {
		int r = rand() % 4;
		switch (r){
		case 0:
			s += kisbetu();
			break;
		case 1:
			s += nagybetu();
			break;
		case 2:
			s += szam();
			break;
		case 3:
			s += specialis();
			break;
		}
	}
	return s;
}

struct Pont {
	int x;
	int y;
};

double distance(Pont p1, Pont p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// A utility function to print an array
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

// A function to generate a random
// permutation of arr[]
void randomize(int arr[], int n)
{
	// Use a different seed value so that
	// we don't get same result each time
	// we run this program
	srand(time(NULL));

	// Start from the last element and swap
	// one by one. We don't need to run for
	// the first element that's why i > 0
	for (int i = n - 1; i > 0; i--)
	{
		// Pick a random index from 0 to i
		int j = rand() % (i + 1);

		// Swap arr[i] with the element
		// at random index
		swap(&arr[i], &arr[j]);
	}
}


int main() {

	srand((unsigned int)time(NULL));

	cout << palindrome("habbah") << endl;
	printascii();
	printpiramis(5);

	int tomb[5] = { -1,3,-6,2,-1 };
	pozitiv(tomb,5);

	for (int i : tomb) {
		cout << i << " ";
	}
	cout << endl;

	int* tomb2 = melymasolat(tomb, 5);

	cout << tomb[0] << " " << tomb2[0] << endl;
	tomb[0]++;
	cout << tomb[0] << " " << tomb2[0] << endl;

	int* tomb3 = sekelymasolat(tomb, 5);

	cout << tomb[0] << " " << tomb3[0] << endl;
	tomb[0]++;
	cout << tomb[0] << " " << tomb3[0] << endl;

	cout << char_count("abbababa", 'a') << endl;

	char ctomb[26] = {};
	tombfeltolt(ctomb);
	for (char c : ctomb) {
		cout << c << " ";
	}
	cout << endl;

	cout << jelszogen() << endl;

	Pont a = { 1, 2 };
	Pont b = { 6, 5 };

	cout << distance(a, b) << endl;

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	randomize(arr, n);
	printArray(arr, n);



}
