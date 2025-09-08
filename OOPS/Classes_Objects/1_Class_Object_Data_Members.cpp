#include <iostream>
using namespace std;

class Person
{
    // private   : accessible only inside the class
    // public    : accessible everywhere throughout the file
    // protected : accessible within class and another classes only (with the help of inheritance)

public:
    int aid;
    int age;
    string name;
}; // ! class has been created

int main()
{
    Person P; // ! object of class has been created ....
    // ? class  object       custom datatypes
    // ? datatype   variable

    // p.aid = 1234;
    // cout << P.aid << endl;

    P.aid = 123456;
    P.age = 45;
    P.name = "Mohan Varma";

    cout << "AID  : " << P.aid << "\nAGE  : " << P.age << "\nNAME : " << P.name << endl;
    return 0;
}