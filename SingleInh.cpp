//***************INHERITANCE*******************
//Inheritance inherit the properties or attributes from one class to another.
//Single inheritance have 2 classes . 1. Base class (Parent class)   2. Derived class (Base class)
//Base class is also called as parent class and derived class is also called as child class
//Single inheritance means single dericed class is inherited from single base class.

#include<iostream>
using namespace std;
class A{
public:
    void fun() {
    cout<<"Single Inheritance";
    }
};
class B : public A {

};
int main(){
 B b;
 b.fun();
}
