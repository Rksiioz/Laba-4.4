#pragma once
#include <string>
#include <iostream>
using namespace std;

class Figure {
protected:
    string name;
public:
    virtual float area() const = 0;
    virtual float perimeter() const = 0;
    virtual void input() = 0;
    virtual void output() const = 0;
    const string &getName() const {
        return name;
    }
};