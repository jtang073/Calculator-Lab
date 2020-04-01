#ifndef __NULLITERATOR_H__
#define __NULLITERATOR_H__
#include "Iterator.hpp"
#include "base.hpp"
class NullIterator : public Iterator {
	public:
	NullIterator(Base* ptr) {self_ptr = ptr; }
	NullIterator() { self_ptr = nullptr; }
	void first() {};
	void next() {};
	bool is_done() { return true; }
	Base* current() { return nullptr; }
};

#endif
