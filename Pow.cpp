#include "Pow.h"
#include <cmath>

Pow::Pow(Base* l, Base* r) {
	left = l;
	right = r;
}

double Pow::evaluate() {
	return (pow(left->evaluate(), right->evaluate()));
}

string Pow::stringify() {
	string temp = left->stringify();
	temp.append(" ** ");
	temp.append(right->stringify());
	return temp;
}

Base* Pow::get_left() {
	return left;
}

Base* Pow::get_right() {
	return right;
}

Iterator* Pow::create_iterator() {
	return new BinaryIterator(this);
}
