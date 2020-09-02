#include <iostream>
using namespace std;

int main31(){
	int a = 3, b = 4;
	//Bitweise ändern - in assembler gg ez
	cout << (a | b) << endl; //OR
	cout << (a & b) << endl; //AND
	cout << (a ^ b) << endl; //XOR
	cout << (a << 1) << endl; //links schieben
	cout << (b >> 1) << endl; //rechts schieben
	cout << ~a << endl; //Bits umdrehen (NOT)


	return 0;
}
