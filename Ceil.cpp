#include "Ceil.h"
using namespace std;

Ceil::Ceil(Base* num) {
	decorator = num;
}

double Ceil::evaluate() {
	return ceil(decorator->evaluate());
}

