//
// Created by piotrek on 28.04.22.
//

#include "DoubleObject.h"
#include <iostream>

using namespace std;

namespace object {
    void DoubleObject::Display() {
        if(this->db != 0) {
            auto y = std::to_string(this->db);
            cout << "DoubleObject(" << y << ")" << endl; }
    }

    DoubleObject DoubleObject::operator+=(string x) {
        auto y = std::stod(x);
        this->db += y;
        return *this;
    }

    DoubleObject::DoubleObject(string value) {
        auto y = std::stod(value);
        this->db = y;
    }

    void DoubleObject::Multiply(int x) {
        this->db *=x;
    }

} // Object