//
// Created by jbakst on 4/9/17.
//

#ifndef UNTITLED_DERIVED_H
#define UNTITLED_DERIVED_H

#include "Base.h"

class Derived : public Base {
public:
    Derived();
    virtual ~Derived();

    void apply() override;

};


#endif //UNTITLED_DERIVED_H
