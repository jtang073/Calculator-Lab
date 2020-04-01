#ifndef __ITERATOR_H__
#define __ITERATOR_H__
#include "base.hpp"
using namespace std;

class Base;

class Iterator {
	//protected:
	//Base* self_ptr;
	
	public:
	Base* self_ptr;
	Iterator(Base* ptr) { this->self_ptr = ptr; }
	Iterator() {this->self_ptr = nullptr; }
	virtual void first() = 0;
	virtual void next() = 0;
	virtual bool is_done() = 0;
	virtual Base* current() = 0;
};

#endif
