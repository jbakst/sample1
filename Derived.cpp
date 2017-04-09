//
// Created by jbakst on 4/9/17.
//

#include <cstdio>
#include <iostream>

using std::cout;
using std::endl;

#include "Derived.h"

void Derived::apply() {
    cout << "Derived::apply" << endl;
}

Derived::Derived() {

}

Derived::~Derived() {

}
