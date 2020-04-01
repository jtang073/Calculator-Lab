#ifndef __POW_H__
#define __POW_H__
#include "base.hpp"
#include "Iterator.hpp"
#include "BinaryIterator.h"
#include "visitor.h"
#include <string>
using namespace std;

class Pow : public  Base {
	public:
	Base* left;
	Base* right;
	Pow(Base*, Base*);
	double evaluate();
	string stringify();
	Base* get_left();
	Base* get_right();
	Iterator* create_iterator();
        void accept(visitor* guest) { guest->visit_pow(); left->accept(guest); right->accept(guest);}

};

#endif
