//
// Created by piotrek on 28.04.22.
//

#ifndef UNTITLED1_STRINGOBJECT_H
#define UNTITLED1_STRINGOBJECT_H

#include <string>
#include "Object.h"
namespace object {

    class StringObject : public Object{
    private:
        std::string base;

    public:
        StringObject(){this->base ="";};
        StringObject(std::string value);
        StringObject operator+=(std::string str);
        void Multiply(int x) override;

        StringObject operator+=(StringObject str);
        std::string Type() override{return "StringObject";};
        std::string GetValue() override{return this->base;};
        void Display();
    };


} // Object

#endif //UNTITLED1_STRINGOBJECT_H
