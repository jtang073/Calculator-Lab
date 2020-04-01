#include "base.hpp"
#include "Iterator.hpp"
#include "BinaryIterator.h"
#include "Add.h"
#include "Sub.h"
#include "Mult.h"
#include "Div.h"
#include "Pow.h"
#include "Op.h"
#include "UnaryIterator.h"
#include <iostream>

int main() {
	Op* op1 = new Op(100);
	Op* op2 = new Op(200);
	Sub* sub = new Sub(op1, op2);

	Op* op3 = new Op(300);
	Add* add2 = new Add(sub, op3);

	Op* op4 = new Op(400);
	Add* add3 = new Add(add2, op4);

	Iterator* it = add3->create_iterator();

	for (it->first(); !it->is_done(); it->next()) {
		cout << it->current()->evaluate() << " ";
	}
	cout << endl;

//////////////////////////////////////////////////////////////
//	cout << "Testinging Unary: " << endl;
//	Iterator* itt = add->create_iterator();
//	it->first();
//	cout << it->current()->stringify() << endl;

return 0;
}
