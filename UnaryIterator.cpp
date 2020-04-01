#include "UnaryIterator.h"

void UnaryIterator::first() {
	temp = self_ptr;
}

void UnaryIterator::next() {
	temp = NULL;
}

bool UnaryIterator::is_done() {
	if (temp == NULL) {
		return true;
	}
	return false;
}

Base* UnaryIterator::current() {
	return temp;
}
