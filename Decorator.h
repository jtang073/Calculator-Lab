#ifndef __DECORATOR_H__
#define __DECORATOR_H__
#include <cmath>
#include <string>
#include "base.hpp"
using namespace std;

class Decorator : public Base {
	public:
	Base* decorator;
	Decorator() {};
	Decorator(Base*);
	double evaluate();
	string stringify();
};

#endif
