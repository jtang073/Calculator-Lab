#include "Mult.h"

Mult::Mult(Base* l, Base* r) {
	left = l;
	right = r;
}

double Mult::evaluate() {
	return (left->evaluate() * right->evaluate());
}

string Mult::stringify() {
	string temp = left->stringify();
	temp.append(" * ");
	temp.append(right->stringify());
	return temp;

}

Base* Mult::get_left() {
	return left;
}

Base* Mult::get_right() {
	return right;
}

Iterator* Mult::create_iterator() {
	return new BinaryIterator(this);
}
