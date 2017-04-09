//
// Created by jbakst on 4/9/17.
//


#include <cstdio>
#include <iostream>

using std::cout;
using std::endl;

#include "Base.h"

void Base::apply() {
    cout << "Base::apply" << endl;
}

Base::Base() {

}

Base::Base(const Base& other) {

}

Base::~Base() {

}
