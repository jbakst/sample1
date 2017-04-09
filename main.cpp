#include <iostream>
#include <memory>
#include <vector>
#include "Base.h"
#include "Derived.h"

std::vector<  std::unique_ptr<Base>> targets;

void add( Base& target) {
     targets.push_back( std::unique_ptr<Base>( &target));
}

void run() {
    for (auto& t : targets) {
        t->apply();
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    Derived d1;
    add(d1);
    Derived d2;
    add(d2);
    Derived d3;
    add(d3);
    Derived d4;
    add(d4);

    run();

    return 0;
}