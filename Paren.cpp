#include "Paren.h"
#include <string>

using namespace std;


Paren::Paren(Base* composite) {
	decorator = composite;	
}

string Paren::stringify() {
	return("(" + decorator->stringify() + ")");
}
