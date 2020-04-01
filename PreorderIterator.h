#ifndef __PREORDERITERATOR_H__
#define __PREORDERITERATOR_H__
#include "base.hpp"
#include "Iterator.hpp"
#include "BinaryIterator.h"
#include "UnaryIterator.h"
#include "NullIterator.h"
#include <stack>
using namespace std;

class PreorderIterator : public Iterator {
	public:
	Base* self_ptr;
	stack<Iterator*> s;
	PreorderIterator(Base* ptr) { self_ptr = ptr; }
	void first();
	void next();
	bool is_done();
	Base* current();
};

#endif
