#include "gtest/gtest.h"
#include "Op.h"
//#include "Rand.h"
//#include "base_factory.hpp"
//#include "PrecisionOp.h"
//#include "PrecisionRand.h"
//#include "PrecisionFactory.h"
//#include "SciOp.h"
//#include "SciRand.h"
//#include "SciFactory.h"
#include "Add.h"
#include "Sub.h"
#include "Mult.h"
#include "Div.h"
#include "Pow.h"
//#include "DoubleFactory.h"
//#include "AddCommand.h"
//#include "SubCommand.h"
//#include "MultCommand.h"
//#include "DivCommand.h"
//#include "PowCommand.h"
//#include "InitialCommand.h"
//#include "Menu.h"
#include "Iterator.hpp"
#include "BinaryIterator.h"
#include "UnaryIterator.h"
#include "NullIterator.h"
#include "base.hpp"
#include "PreorderIterator.h"
#include "visitor.h"
#include "Decorator.h"
#include "Trunc.h"
#include "Floor.h"
#include "Ceil.h"
#include "Abs.h"
#include "Paren.h"

TEST(Visitor, OpCount) {
	visitor* vis = new visitor();
	Op* op1 = new Op(100);
	Op* op2 = new Op(200);
	Add* add = new Add(op1, op2);
	Op* op3 = new Op(3);
        Add* add2 = new Add(add, op3);
        Op* op4 = new Op(4);
        Sub* sub = new Sub(add2, op4);
        Op* dummy_op = new Op(0);
        Add* dummy_connector = new Add(sub, dummy_op);
	PreorderIterator* pit = new PreorderIterator(dummy_connector);
	for(pit->first(); !pit->is_done(); pit->next()) {
		sub->accept(vis);
	}
        EXPECT_EQ(vis->op_count(), 4);
}

TEST(Visitor, AddCount) {
        visitor* vis = new visitor();
        Op* op1 = new Op(100);
        Op* op2 = new Op(200);
        Add* add = new Add(op1, op2);
        Op* op3 = new Op(3);
        Add* add2 = new Add(add, op3);
        Op* op4 = new Op(4);
        Sub* sub = new Sub(add2, op4);
	Op* op5 = new Op(9);
	Add* add3 = new Add(sub, op5);
        Op* dummy_op = new Op(0);
        Add* dummy_connector = new Add(add3, dummy_op);
        PreorderIterator* pit = new PreorderIterator(dummy_connector);
        for(pit->first(); !pit->is_done(); pit->next()) {
                add3->accept(vis);
        }
        EXPECT_EQ(vis->add_count(), 3);
}

TEST(Visitor, SubCount) {
        visitor* vis = new visitor();
        Op* op1 = new Op(100);
        Op* op2 = new Op(200);
        Add* add = new Add(op1, op2);
        Op* op3 = new Op(3);
        Add* add2 = new Add(add, op3);
        Op* op4 = new Op(4);
        Sub* sub = new Sub(add2, op4);
        Op* op5 = new Op(9);
        Add* add3 = new Add(sub, op5);
        Op* dummy_op = new Op(0);
        Add* dummy_connector = new Add(add3, dummy_op);
        PreorderIterator* pit = new PreorderIterator(dummy_connector);
        for(pit->first(); !pit->is_done(); pit->next()) {
                add3->accept(vis);
        }
        EXPECT_EQ(vis->sub_count(), 1);
}

TEST(Visitor, DivCount) {
        visitor* vis = new visitor();
        Op* op1 = new Op(100);
        Op* op2 = new Op(200);
        Div* div = new Div(op1, op2);
        Op* op3 = new Op(3);
        Add* add2 = new Add(div, op3);
        Op* op4 = new Op(4);
        Sub* sub = new Sub(add2, op4);
        Op* op5 = new Op(9);
        Add* add3 = new Add(sub, op5);
	Op* op6 = new Op(0);
	Div* div2 = new Div(add3, op6);
        Op* dummy_op = new Op(0);
        Add* dummy_connector = new Add(div2, dummy_op);
        PreorderIterator* pit = new PreorderIterator(dummy_connector);
        for(pit->first(); !pit->is_done(); pit->next()) {
                div2->accept(vis);
        }
        EXPECT_EQ(vis->add_count(), 2);
}

TEST(Visitor, PowCount) {
        visitor* vis = new visitor();
        Op* op1 = new Op(100);
        Op* op2 = new Op(200);
        Pow* pow = new Pow(op1, op2);
        Op* op3 = new Op(3);
        Pow* pow2 = new Pow(pow, op3);
        Op* op4 = new Op(4);
        Pow* pow3 = new Pow(pow2, op4);
        Op* op5 = new Op(9);
        Pow* pow4 = new Pow(pow3, op5);
        Op* dummy_op = new Op(0);
        Add* dummy_connector = new Add(pow4, dummy_op);
        PreorderIterator* pit = new PreorderIterator(dummy_connector);
        for(pit->first(); !pit->is_done(); pit->next()) {
                pow4->accept(vis);
        }
        EXPECT_EQ(vis->pow_count(), 4);
        EXPECT_EQ(vis->trunc_count(), 0);
        EXPECT_EQ(vis->ceil_count(), 0);
        EXPECT_EQ(vis->floor_count(), 0);
        EXPECT_EQ(vis->paren_count(), 0);
        EXPECT_EQ(vis->rand_count(), 0);
        EXPECT_EQ(vis->abs_count(), 0);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}	
