#include "Div.h"
#include <string>

Div::Div(Base* l, Base* r) {
	left = l;
	right = r;
}

double Div::evaluate() {
	return (left->evaluate() / right->evaluate());
}

string Div::stringify() {
	string temp = left->stringify();
	temp.append(" / ");
	temp.append(right->stringify());
	return temp;
}

Base* Div::get_left() {
	return left;
}

Base* Div::get_right() {
	return right;
}

Iterator* Div::create_iterator() {
	return new BinaryIterator(this);
}
