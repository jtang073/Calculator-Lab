#include "Add.h"
#include "base.hpp"
#include <string>
using namespace std;

Add::Add(Base* L, Base* R) {
	left = L;
	right = R;
}

double Add::evaluate() {
	return (left->evaluate() + right->evaluate());
}

string Add::stringify() {
	string temp = left->stringify();
	temp.append(" + ");
	temp.append(right->stringify());
	return temp;

}

Base* Add::get_left() {
	return left;
}

Base* Add::get_right() {
	return right;
}

Iterator* Add::create_iterator() {
	return new BinaryIterator(this);
}
