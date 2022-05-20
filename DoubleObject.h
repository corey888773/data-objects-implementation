//
// Created by piotrek on 28.04.22.
//

#ifndef UNTITLED1_DOUBLEOBJECT_H
#define UNTITLED1_DOUBLEOBJECT_H

#include "Object.h"
#include <string>

namespace object {

    class DoubleObject: public Object{
    private:
        double db;
    public:
        DoubleObject(){this->db = 0;};
        DoubleObject(std::string value);
        DoubleObject operator+=(std::string x);
        void Multiply(int x) override;
        std::string Type() override{return "DoubleObject";};
        std::string GetValue() override{return std::to_string(this->db);}
        void Display();
    };

} // Object

#endif //UNTITLED1_DOUBLEOBJECT_H
