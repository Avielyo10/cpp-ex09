#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class TestCase{
    public:
    string testName;
    ostream* op;
    int passed = 0, failed = 0;
    TestCase(){}
    TestCase(string name, ostream &out);
    template <class T> TestCase check_equal(T a,T b);
    template <class T> TestCase check_different(T a,T b);
    template <class T> TestCase check_function(function <T>,T toOperateOn, int result);
    // template <class T> TestCase check_function(int(*function)(T t),T toOperateOn, int result);
    // template <class T> TestCase check_function(int(*function)(const T &t),T toOperateOn, int result);
    template <class T> TestCase check_output(T a,string s);
    template <class T> TestCase print();
};
