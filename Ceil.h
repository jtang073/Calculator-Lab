#ifndef __CEIL_H__
#define __CEIL_H__
#include "Decorator.h"
#include "visitor.h"
using namespace std;

class Ceil : public Decorator {
	public:
	Ceil(Base*);
	double evaluate();
	string stringify() {};
        void accept(visitor* guest) { guest->visit_ceil(); }

};

#endif 
