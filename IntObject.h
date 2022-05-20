//
// Created by piotrek on 05.05.22.
//

#ifndef UNTITLED1_INTOBJECT_H
#define UNTITLED1_INTOBJECT_H

#include <string>
#include "Object.h"

namespace object {

    class IntObject : public Object{
    private:
        int intiger;
    public:
        IntObject(){this->intiger = 0;};
        IntObject(std::string value);
        IntObject operator+=(std::string x);
        void Multiply(int x);
        std::string Type(){return "IntObject";};
        std::string GetValue(){return std::to_string(this->intiger);}
        void Display();

    };

} // object

#endif //UNTITLED1_INTOBJECT_H
