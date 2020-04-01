#include "Trunc.h"
#include <string>

using namespace std;

Trunc::Trunc(Base* composite) {
        decorator = composite;
}

string Trunc::stringify() {
        return(to_string(decorator->evaluate()));
}

