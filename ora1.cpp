#include <iostream>
#include <string>

#define LENGTH 10

int g;

int main(){

	std::cout<<"Hello world\n";
	
	char c = 'c';
	int i = 0;
	short int si = 1;
	long int li = 1000000;
	float f = 10.2;
	double d = 10.2;
	bool b = false;
	
	int i1 = 3, i2=4;
	char x, y; //lokális deklaráció
	
	std::cout<<"char:" << sizeof(char) << std::endl;
	std::cout<<"int:" << sizeof(int) << std::endl;	
	std::cout<<"short int:" << sizeof(short int) << std::endl;
	std::cout<<"long int:" << sizeof(long int) << std::endl;
	std::cout<<"float:" << sizeof(float) << std::endl;
	std::cout<<"double:" << sizeof(double) << std::endl;
	std::cout<<"bool:" << sizeof(bool) << std::endl;
	
	//egysoros komment
	/*
		többsoros komment
	*/
	
	typedef int szam;
	
	szam sz = 10;	
	
	x='f'; //inicializáció
	
	std::cout<<g<<'\n';
	
	g = 15;
	
	{ //ugyanaz, mint pythonban az indentáció
	
		char g = 'z';
	}
	
	std::cout<<g<<'\n';
	//\ ' " ? alert or bell backspace form feed new line, carriage return, tab, vertical tab
	std::cout<<"\\1 \'2 \"3 \?4 \a5 \b6 \f7 \n8 \r9 \t10 \v11"<<std::endl;
	
	"hello, world"; //sztring literál
	
	std::cout<<LENGTH<<std::endl;
	
	const int WIDTH = 11;
	
	std::cout<<WIDTH<<std::endl;
	
	//Operátorok +-*/ % ++ --
	//== != > < >= <=
	// && || !
	
	//bitműveletek & | ^XOR << eltolás >> eltolás
	
	//értékadó operátorok
	//= += -= *= /= %= <<= >>= &= ^= |=
	
	int A = 60; // 0011 1100
	int B = 13; // 0000 1101
	
	std::cout << (A<<2) <<std::endl; //1111 0000
	
	double tomb[5] = {1000.0, 4.1, 11.1, 56.98, 0.0};
	
	std::cout<<tomb[0]<<std::endl;
	std::cout<<tomb[5]<<std::endl;
	
	char sztring[]="Hello, world!";
	std::cout<<sztring<<std::endl;
	
	std::string st = "C++ sztring"; //ehhez dokumentáció
	std::cout << st << std::endl;
	
	using namespace std;
	
	cout<< "névterek használata" <<endl;
	
	//konverziók -statikus, dinamikus kasztolás később, majd előadáson.
	//implicit
	int num = 92;
	double doub;
	
	doub=num;
	
	cout<<num<<" "<<doub<<endl;
	
	int num_int;
	double num_double=1.11;
	
	num_int = num_double;
	
	cout << num_int << " " <<num_double<<endl;
	
	int z = 21;
	double zs;
	
	zs = double(z);
	
	cout<<zs <<endl;
	
	if(21>10){
		cout<<"nagyobb"<<endl;
	} else if (15>16) {
		cout<<"else if"<< endl;
	} else {
		cout<<"egyéb"<< endl;
	}
	
	if(10>9){
		if(11>10){
			cout << "belső"<< endl;
		} else {
			cout << "belső else"<< endl;
		}
		cout << "külső" << endl;
	} 
	
	int cif = 10>9? 1 : 0;
	cout << cif << endl;
	
		
		
			
	return 0;
}
