#ifndef __TRUNC_H__
#define __TRUNC_H__
#include "Decorator.h"
#include "visitor.h"
#include <string>

using namespace std;

class Trunc : public Decorator {
        public:
	Trunc(Base*);
        //string num;
        string stringify();
	double evaluate() {};
        void accept(visitor* guest) { guest->visit_trunc();}

};
#endif //__TRUNC_H__

