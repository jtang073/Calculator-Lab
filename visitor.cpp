#include "visitor.h"

using namespace std;

visitor::visitor() {
	ops = 0, rands = 0, mults = 0, divs = 0, add = 0, sub = 0, pow = 0, ceil = 0, floor = 0, abs = 0, trunc = 0, paren = 0;
}

void visitor::visit_op() {
	ops++;
}

int visitor::op_count() {
	return ops;
}

void visitor::visit_rand() {
        rands++;
}

int visitor::rand_count() {
        return rands;
}

void visitor::visit_mult() {
        mults++;
}

int visitor::mult_count() {
        return mults;
}

void visitor::visit_div() {
        divs++;
}

int visitor::div_count() {
        return divs;
}

void visitor::visit_add() {
        add++;
}

int visitor::add_count() {
        return add;
}

void visitor::visit_sub() {
        sub++;
}

int visitor::sub_count() {
        return sub;
}

void visitor::visit_pow() {
        pow++;
}

int visitor::pow_count() {
        return pow;
}

void visitor::visit_ceil() {
        ceil++;
}

int visitor::ceil_count() {
        return ceil;
}

void visitor::visit_floor() {
        floor++;
}

int visitor::floor_count() {
        return floor;
}

void visitor::visit_abs() {
        abs++;
}

int visitor::abs_count() {
        return abs;
}

void visitor::visit_trunc() {
        trunc++;
}

int visitor::trunc_count() {
        return trunc;
}

void visitor::visit_paren() {
        paren++;
}

int visitor::paren_count() {
        return paren;
}


