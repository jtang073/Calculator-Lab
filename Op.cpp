#include "Op.h"
#include <string>
using namespace std;

Op::Op(double input) {
	num = input;
}

double Op::evaluate() {
	return this->num;
}

string Op::stringify() {
	string temp = to_string(this->num);
	return temp;
}
