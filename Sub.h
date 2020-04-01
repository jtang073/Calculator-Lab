#ifndef __SUB_H__
#define __SUB_H__
#include <string>
#include "base.hpp"
#include "Iterator.hpp"
#include "BinaryIterator.h"
#include "visitor.h"
using namespace std;

class Sub : public Base {
	public:
	Base* left;
	Base* right;
	Sub(Base*, Base*);
	double evaluate();
	string stringify();
	Base* get_left();
	Base* get_right();
	Iterator* create_iterator();
        void accept(visitor* guest) { guest->visit_sub(); left->accept(guest); right->accept(guest); }

};

#endif
