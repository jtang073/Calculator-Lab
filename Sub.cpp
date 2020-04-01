#include "Sub.h"

Sub::Sub(Base* l, Base* r) {
	left = l;
	right = r;
}

double Sub::evaluate() {
	return (left->evaluate() - right->evaluate());
}

string Sub::stringify() {
	string temp = left->stringify();
	temp.append(" - ");
	temp.append(right->stringify());
	return temp;
}

Base* Sub::get_left() {
	return left;
}

Base* Sub::get_right() {
	return right;
}

Iterator* Sub::create_iterator() {
	return new BinaryIterator(this);
}
