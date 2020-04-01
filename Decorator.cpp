#include "Decorator.h"
using namespace std;

Decorator::Decorator(Base* num) {
	decorator = num;
}

double Decorator::evaluate() {
	return decorator->evaluate();
}

string Decorator::stringify() {
	return decorator->stringify();
}
