#ifndef __PAREN_H__
#define __PAREN_H__
#include "Decorator.h"
#include "visitor.h"
#include <string>

using namespace std;

class Paren : public Decorator {
        public:
	Paren(Base*);
        string stringify();
	double evaluate() {};
        void accept(visitor* guest) { guest->visit_paren(); }

};
#endif //__PAREN_H__

