#include <iostream>
#include "Pasport.h"
#include "ForeignPassport.h"
using namespace std;


int main() {
	Pasport pas(string("Name"), string("surname"), string("midname"), 'M', string("Ukraine"), 2000, 2, 12, 2001, 3, 11, 2002, 4, 10);
	ForeignPassport forpas(pas, {"visa1", "visa2"}, 1);
	cout<<forpas.display();
	return 0;
}