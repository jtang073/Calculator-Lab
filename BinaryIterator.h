#ifndef __BINARYITERATOR_H__
#define __BINARYITERATOR_H__
#include "Iterator.hpp"
#include "base.hpp"
using namespace std;

class BinaryIterator : public Iterator {
	public:
	Base* temp;
	int index;
	BinaryIterator(Base* ptr) { self_ptr = ptr; }
	void first();
	void next();
	bool is_done();
	Base* current();
};

#endif
