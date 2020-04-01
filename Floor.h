#ifndef __FLOOR_H__
#define __FLOOR_H__
#include "Decorator.h"
#include "visitor.h"
#include <string>

using namespace std;

class Floor : public Decorator {
        public:
	Floor(Base*);
        double evaluate();
	string stringify() {};
        void accept(visitor* guest) { guest->visit_floor(); }

};
#endif //__FLOOR_H__
