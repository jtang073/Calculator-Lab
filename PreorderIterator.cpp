#include "PreorderIterator.h"
#include <iostream>

#include "Op.h"
#include "base.hpp"

void PreorderIterator::first() {
	while (!s.empty()) {
		s.pop();
	}
	Iterator* it = self_ptr->create_iterator();
	s.push(it);
}
/*
void PreorderIterator::next() {
	Iterator* it = s.top()->current()->create_iterator();
	s.push(it);
	if (s.top()->is_done()) {
		s.pop();
	}
}
*/
void PreorderIterator::next() {
	while((s.top()->is_done()) == false) {
		s.top()->next();
	}
	s.pop();
}

bool PreorderIterator::is_done() {
	return (s.empty());
	//return true;
}

Base* PreorderIterator::current() {
	s.top()->first();
	return s.top()->current();
}


