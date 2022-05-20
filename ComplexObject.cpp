//
// Created by piotrek on 05.05.22.
//

#include "ComplexObject.h"
#include <iostream>
using namespace std;

namespace object {

    ComplexObject ComplexObject::operator+=(std::string value) {
        int sIndex = -1;
        for (int i = 0; i < value.length(); i++) {
            if (value[i] == '+' || value[i] == '-') {
                this->sign = value[i];
                sIndex = i;
            }
        }


        if (sIndex != -1) {
            auto real = value.substr(0, sIndex);
            this->real = stoi(real);
            string img = value.substr(sIndex + 1, value.length() - 1);
            this->img = stoi(img);
            return *this;
        }

        if (value[value.length() - 1] == 'i' && value.length() != 1) {
            auto img = value.substr(0, value.length() - 1);
            this->img = stoi(img);
            return *this;
        }
        if (value[value.length() - 1] == 'i') {
            this->img = 1;
            return *this;
        } else {
            auto real = value.substr(0, value.length());
            this->real = stoi(real);
            return *this;
        }
    }

    void ComplexObject::Display() {
        if(this->img == 0 && this->real == 0);
        else if(this->img == 0) {
            cout << "ComplexObject(" << this->real << ")" << endl;
        }
        else
            cout << "ComplexObject(" << this->real << this->sign << this->img << "i)" << endl;
    }

    ComplexObject::ComplexObject(std::string value) {
        this->base = value;
        int sIndex = -1;
        for (int i = 0; i < value.length(); i++) {
            if (value[i] == '+' || value[i] == '-') {
                this->sign = value[i];
                sIndex = i;
            }
        }

        if (sIndex != -1) {
            auto real = value.substr(0, sIndex);
            this->real = stoi(real);
            string img = value.substr(sIndex + 1, value.length() - 1);
            this->img = stoi(img);
            }
        if(sIndex == -1){
            if(value[value.length()-1] == 'i' && value.length() != 1)
                {auto img = value.substr(0, value.length() - 1); this->img = stoi(img);
                    return;}
            if(value[value.length()-1] == 'i'){this->img = 1;
                    return;}
            else
                {auto real = value.substr(0, value.length()); this->real = stoi(real);
                return;}
        }
    }

    std::string ComplexObject::GetValue(){
        string s = "";
        if(this->img == 0 && this->real == 0)
            return "";
        if(this->real == 0) {
            if(this->img == 1)
               return "i";
            else
            {
                s += to_string(this->img);
                s += "i";
                return s;
            }

        }
        if(this->img == 0) {

            return to_string(this->real);
        }
        s+= to_string(this->real);
        s+= this->sign;
        s+= to_string(this->img);
        s += "i";
        return s;
        }

    void ComplexObject::Multiply(int x) {
        this->img *= x;
        this->real *= x;
    }
}
// object