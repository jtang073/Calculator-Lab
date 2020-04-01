#ifndef __UNARYITERATOR_H__
#define __UNARYITERATOR_H__
#include "Iterator.hpp"
#include "base.hpp"
using namespace std;

class UnaryIterator : public Iterator {
	public:
	Base* temp;
	UnaryIterator(Base* ptr) { self_ptr = ptr; };
	void first();
	void next();
	bool is_done();
	Base* current();
};

#endif
