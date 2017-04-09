//
// Created by jbakst on 4/9/17.
//

#ifndef UNTITLED_BASE_H
#define UNTITLED_BASE_H


class Base {

public:
    Base();
    Base(const Base& other);
    virtual ~Base();

    virtual void apply();
};


#endif //UNTITLED_BASE_H
