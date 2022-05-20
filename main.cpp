#include <iostream>
#include <string>
#include "Object.h"
#include "StringObject.h"
#include "DoubleObject.h"
#include "IntObject.h"
#include "ComplexObject.h"
#include <vector>
#include <memory>

using namespace object;
using namespace std;


void CreateObject(string x, std::vector<unique_ptr<Object>> &list){
    string method, type, value;

    method = x.substr(0, 3);

if(method == "add")
    {
        int pos = x.find(':');
        type = x.substr(4,pos - 4);
        value = x.substr(pos+1, x.length());

        if (value.empty() || pos == -1)
            throw "!IncompleteType";


        if (type == "StringObject") {
            list.push_back(make_unique<StringObject>(value));
            return;
        }
        if (type == "DoubleObject") {
            list.push_back(make_unique<DoubleObject>(value));
            return;
        }
        if (type == "IntObject") {
            list.push_back(make_unique<IntObject>(value));
            return;
        }
        if (type == "ComplexObject") {
            list.push_back(make_unique<ComplexObject>(value));
            return;
        }


    }
if(method =="sum"){
    DoubleObject dSum;
    IntObject iSum;
    StringObject sSum;
    ComplexObject cSum;

    for(int i = 0; i < list.size(); i++)
        {
            auto x = list[i]->Type();
            if(list[i]->Type() == "StringObject")
                sSum += list[i]->GetValue();
            if(list[i]->Type() == "IntObject")
                iSum += list[i]->GetValue();
            if(list[i]->Type() == "ComplexObject")
                cSum += list[i]->GetValue();
            if(list[i]->Type() == "DoubleObject")
                dSum += list[i]->GetValue();
        }
    cSum.Display();
    dSum.Display();
    iSum.Display();
    sSum.Display();
    }
if(method == "get"){
    char index = x[4];
    if (index == char(0)) {
        throw "!MissingArgument after: ";
    }

    auto y = int(index) - 48;
    list[y]->Display();
}
if(method == "mul"){
    char val = x[4];
    if (val == char(0)) {
        throw "!MissingArgument after: ";
    }
    auto y = int(val) - 48;
    for(int i = 0; i < list.size(); i++){
        list[i]->Multiply(y);
    }
}
//else if (!method.empty())
//    throw "!InvalidCommand";
}


int main() {
    string input;
    std::vector<unique_ptr<Object>> list;

    try{
        do {
            getline(cin, input);
            CreateObject(input, list);
        } while (input != "");
    }
        catch(const char * txtException){
        std::cout << "Exception: " << txtException;
        };

    return 0;

}
