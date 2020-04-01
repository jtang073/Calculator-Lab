#include "BinaryIterator.h"
using namespace std;

void BinaryIterator::first() {
	/*
	temp = self_ptr;
	while (temp->get_left()->get_left() != nullptr) {
		temp = temp->get_left();
		++index;
	}
	*/
	temp = self_ptr->get_left();
}

void BinaryIterator::next() {
	if (temp != self_ptr->get_right()) {
		temp = self_ptr->get_right();
	}
	else {
		temp = nullptr;
	}
	/*
	if (index == 0) {
		temp = NULL;
	}
	else {	
		temp = self_ptr;
		for (int i = 0; i < index - 1; ++i) {
			temp = temp->get_left();
		}
		temp = temp->get_right();
		//--index;
	}
	*/
}

bool BinaryIterator::is_done() {
	if(temp == nullptr) {
		return true;
	}
	return false;
}

Base* BinaryIterator::current() {
	return temp;
}
