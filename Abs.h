#ifndef __ABS_H__
#define __ABS_H__
#include "Decorator.h"
#include "visitor.h"
#include <string>

using namespace std;

class Abs : public Decorator {
        public:
	Abs(Base*);
        double evaluate();
	string stringify() {};
        void accept(visitor* guest) { guest->visit_abs(); }

};
#endif //__ANS_H__

