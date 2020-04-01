#include "Abs.h"

Abs::Abs(Base* num) {
	decorator = num;
}

double Abs::evaluate() {
	return abs(decorator->evaluate());
}
