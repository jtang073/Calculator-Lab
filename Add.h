#ifndef __ADD_H__
#define __ADD_H__
#include "base.hpp"
#include "Iterator.hpp"
#include "BinaryIterator.h"
#include "Op.h"
#include "visitor.h"
#include <string>
using namespace std;


class Add : public Base {

	public:
	Base* left;
	Base* right;
	Add(Base*, Base*);
	double evaluate();
	string stringify();
	Base* get_left();
	Base* get_right();
	Iterator* create_iterator();
        void accept(visitor* guest) { guest->visit_add(); left->accept(guest); right->accept(guest);}

};



#endif //__ADD_H__
