//a class can also be derived from one class which is already derived from another class
//in the following example MyGrandChild is derived from class MyChild (which is derived from MyClass)

//Base class (parent)
#include <iostream>
#include <string.h>
using namespace std;
class MyClass {

public:
void myFunction ()
{
    cout << "Some content in parent class."<<endl << endl;
}

};
//Derived class (grandchild)
class MyChild: public MyClass{

};

//Derived class (grandchild)
class MyGrandChild:public MyChild{

};

int main ()
{
MyGrandChild obj;
obj.myFunction();

return 0;
}





























