//
// Created by piotrek on 05.05.22.
//

#ifndef UNTITLED1_COMPLEXOBJECT_H
#define UNTITLED1_COMPLEXOBJECT_H

#include "Object.h"
#include <complex>


namespace object {

    class ComplexObject : public Object{
    private:
        int real, img;
        char sign = '+';
        std::string base;
    public:
        ComplexObject(){this->real = 0; this->img = 0;};
        ComplexObject(std::string value);
        ComplexObject operator+=(std::string c);
        void Multiply(int x) override;
        std::string Type() override{return "ComplexObject";};
        std::string GetValue() override;
        void Display();


    };

} // object

#endif //UNTITLED1_COMPLEXOBJECT_H
