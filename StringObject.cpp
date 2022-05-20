//
// Created by piotrek on 28.04.22.
//

#include "StringObject.h"
#include <iostream>
using namespace std;

namespace object {
    StringObject StringObject::operator+=(std::string str) {
        this->base += str;
        return *this;
    }
    StringObject StringObject::operator+=(StringObject str) {
        this->base += str.base;
        return *this;
    }

    void StringObject::Display() {
        if (base != "")
        cout <<"StringObject(\""<< this->base <<"\")"<< endl;
    }

    StringObject::StringObject(std::string value) {
        this->base =  value;
    }

    void StringObject::Multiply(int x) {
        auto pivot = this->base;
        for(int i = 1; i < x; i++)
            this->base += pivot;
    }

} // Object