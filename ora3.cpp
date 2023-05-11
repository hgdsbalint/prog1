#include <string>
#include <iostream>

int main() {
	struct {
		int szul_ev;
		std::string nev;
	} szemely1, szemely2;

	szemely1.szul_ev = 2000;
	szemely1.nev = "Kiss Béla";

	szemely2 = szemely1;

	using namespace std;

	cout << szemely1.nev << " " << szemely1.szul_ev << endl;
	cout << szemely2.nev << " " << szemely2.szul_ev << endl;

	szemely1.nev = "alma";

	cout << szemely1.nev << " " << szemely1.szul_ev << endl;
	cout << szemely2.nev << " " << szemely2.szul_ev << endl;

	struct jarmu {
		string marka;
		string tipus;
		short int evjarat;
	};

	jarmu swift;
	swift.marka = "Suzuki";
	swift.tipus = "Swift";
	swift.evjarat = 2002;

	jarmu civic;
	civic.marka = "Honda";
	civic.tipus = "Civic";
	civic.evjarat = 2009;

	cout << swift.marka << " " << swift.tipus << " " << swift.evjarat << endl;
	cout << civic.marka << " " << civic.tipus << " " << civic.evjarat << endl;

	if (swift.evjarat > civic.evjarat) {
		cout << "A " << swift.tipus << " fiatalabb" << endl;
	}
	else {
		cout << "A " << civic.tipus << " fiatalabb" << endl;
	}

	string st = "narancs";
	string& gyumolcs = st;

	cout << st << " " << gyumolcs << endl;
	st = "kiwi";
	cout << st << " " << gyumolcs << endl;
	cout << &st << " " << &gyumolcs << endl;
	cout << &civic.evjarat << endl;

	/*
	Create a pointer variable with the name ptr, that points to a string variable, by using the asterisk sign * (string* ptr). Note that the type of the pointer has to match the type of the variable you're working with.

Use the & operator to store the memory address of the variable called food, and assign it to the pointer.

Now, ptr holds the value of food's memory address.
	*/

	int a = 10;
	int* b = &a;
	//int* c = a;

	cout << a << " " << &a << " " << b << " " << &b << endl;

	cout << *b << endl;
	cout << sizeof(b) << endl;

	*b = 15;
	cout << a << " " << *b << endl;

	int* ptr = NULL;
	cout << "A pointer értéke:" << ptr;
	if (ptr) {
		cout << "Nem null" << endl;
	}
	else {
		cout << "null" << endl;
	}

	int tomb[5] = { 1,2,3,4,5 };
	int* tptr;

	tptr = tomb;

	for (int i = 0; i < 5; i++) {
		cout << "Tömb " << i << ". eleméneke címe = " << tptr <<endl;

		cout << "Tömb " << i << ". eleméneke értéke = " << *tptr << endl;

		tptr++;
	}

	cout << endl << endl;
	tptr = &tomb[5 - 1];

	for (int i = 5; i > 0; i--) {
		cout << "Tömb " << i << ". eleméneke címe = " << tptr << endl;

		cout << "Tömb " << i << ". eleméneke értéke = " << *tptr << endl;

		tptr--;
	}

	tptr = tomb;
	int meret = 5;
	int i = 0;

	cout << endl << endl;

	while (tptr <= &tomb[meret - 1]) {
		cout << "Tömb " << i << ". eleméneke címe = " << tptr << endl;

		cout << "Tömb " << i << ". eleméneke értéke = " << *tptr << endl;

		tptr++;
		i++;
	}
	cout << endl << endl;
	*(tomb + 4) = 500;

	for (int i = 0; i < 5; i++) {
		*(tomb+i) = 1;    // This is a correct syntax
		//tomb++;       // This is incorrect.
	}

	

	tptr = tomb;

	for (int i = 0; i < 5; i++) {
		cout << "Tömb " << i << ". eleméneke címe = " << tptr << endl;

		cout << "Tömb " << i << ". eleméneke értéke = " << *tptr << endl;

		tptr++;
	}

	int* ptrtomb[5];
	for (int i = 0; i < 5; i++) {
		ptrtomb[i] = &tomb[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << *ptrtomb[i] << endl;
	}

	const char* names[4] = { "Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali" };

	for (int i = 0; i < 4; i++) {
		cout << "Value of names[" << i << "] = ";
		cout << (names + i) << endl;
		cout << *(names + i) << endl;
	}

	int z = 10;
	int* zptr = &z;
	int** zpptr = &zptr;

	cout << z << " " << *zptr <<" " << **zpptr << endl;

	//pointer és string, balérték és jobbérték referenciák, értékadás referencia szerint és más szerint is, void pointerek
	//*p++   // same as *(p++): increment pointer, and dereference unincremented address
		//* ++p   // same as *(++p): increment pointer, and dereference incremented address
		//++* p   // same as ++(*p): dereference pointer, and increment the value it points to
		//(*p)++ // dereference pointer, and post-increment the value it points to 

	//feladat: a tömb elsõ és utolsó elemét cseréljék ki pointerekkel

	int cseretomb[5] = { 1,2,3,4,5 };
	int* sz1; int* sz2; int temp;
	sz1 = &cseretomb[0];
	sz2 = &cseretomb[4];
	temp = *sz1;
	*sz1 = *sz2;
	*sz2 = temp;

	cout << cseretomb[0] << " " << cseretomb[4] << endl;

	//feladat: másoljanak át egy tömböt egy másikba pointerekkel

	int tomb2[5] = { 1,2,3,4,5 };
	int mtomb[5];

	int* kezdo_ptr = tomb2;
	int* veg_ptr = &(tomb2[4]);
	int* cel_ptr = mtomb;
	while (kezdo_ptr <= veg_ptr)
		*(cel_ptr++) = *(kezdo_ptr++);

	for (int i = 0; i < 5; i++) {
		cout << tomb2[i] << " " << mtomb[i] << endl;
	}

	const char* s = "Hello world";

	//feladat: a tömb elsõ és utolsó elemét cseréljék ki pointerekkel



	return 0;
}