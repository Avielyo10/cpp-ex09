#include "TestCase.hpp"
TestCase::TestCase(string name, ostream &out){
    testName = name;
    op = &out;
}
template <class T> 
TestCase TestCase::check_equal(T a,T b){
    if(a!=b){
        ++failed;
        this.*op <<this.name<<": "<<"Failure in test #"<<this.caseNum<<to_string(a)<<"!="<<to_string(b)<<endl;
    }else{
        ++passed;  
    }
    return *this;
}
template <class T> 
TestCase TestCase::check_different(T a,T b){

}
template <class T> 
TestCase TestCase::check_function(function <T>,T toOperateOn, int result){

}
template <class T> 
TestCase TestCase::check_output(T a,string s){

}
template <class T> 
TestCase TestCase::print(){

}

