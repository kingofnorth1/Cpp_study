#include<iostream>
using namespace std;

class Child
{
public:
    int age1;
    int age2;
    int age;
    char sex;
    char* name;
};

int memory()
{
    Child child;
    cout << "&Child.age: " << &child.age << endl;
    cout << "&Child.sex: " << &child.sex << endl;
    cout << "&Child.name: " << &child.name << endl;

    cout << "ChildÄÚ´æ:" << sizeof(child) << endl;
    return 1;
}