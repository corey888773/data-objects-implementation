//
// Created by piotrek on 05.05.22.
//

#include "IntObject.h"
#include <iostream>
using namespace std;

namespace object {

    IntObject::IntObject(string value) {
        auto y = std::stoi(value);
        this->intiger = y;
    }

    IntObject IntObject::operator+=(std::string x) {
        auto y = std::stoi(x);
        this->intiger += y;
        return *this;
    }

    void IntObject::Display() {
        if(this->intiger != 0) {
            auto y = std::to_string(this->intiger);
            cout << "IntObject(" << y << ")" << endl; }

    }

    void IntObject::Multiply(int x) {
        this->intiger *= x;
    }
} // object