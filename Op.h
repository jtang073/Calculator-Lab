#include "base.hpp"
#include "Iterator.hpp"
#include "NullIterator.h"
#include "visitor.h"
#ifndef __OP_H__
#define __OP_H__
#include <string>
using namespace std;

class Op : public Base {
	public:
	Op() {};
	Op(double);
	double num;
	double evaluate();
	string stringify();
	Base* get_right() {return nullptr; };
	Base* get_left() { return nullptr; };
	Iterator* create_iterator() { return new NullIterator(this); }
	void accept(visitor* guest) { guest->visit_op(); }
};


#endif // __OP_H__

