//
// Created by piotrek on 28.04.22.
//

#ifndef UNTITLED1_OBJECT_H
#define UNTITLED1_OBJECT_H


#include <string>

namespace object {


    class Object {
    private:
    public:
        virtual void Display(){};
        virtual std::string Type(){return "";};
        virtual std::string GetValue(){return "";};
        virtual void Multiply(int x) {};
        virtual ~Object()= default;
    protected:


    };

} // Object

#endif //UNTITLED1_OBJECT_H
