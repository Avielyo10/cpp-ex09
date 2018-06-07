#include "TestCase.hpp"

TestCase::TestCase(string name, ostream &out){
        testName = name;
        op = &out;
}

TestCase TestCase::print(){
       *op <<testName<<": "<<failed<<" failed, "<<passed<<" passed, "<<failed+passed<<" total."<<endl<<"\n===============================================================================================\n\n"; 
       return *this;
}