#include "Floor.h"

Floor::Floor(Base* num) {
	decorator = num;
}

double Floor::evaluate() {
	return floor(decorator->evaluate());
}
