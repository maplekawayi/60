#include<iostream>
#include <string.h>

using namespace std;

class Mammal
{
protected:
    char name[10];
public:

    virtual void set()
    {
        strcpy_s(name, "����");
    }
    virtual void speak()
    {
        cout << "���ǲ��鶯��" << endl;
    }
};
class Dog :public Mammal
{
public:
    void set()
    {
        strcpy_s(name, "����");
    }
    void speak()
    {
        cout << "���ǲ��鶯���" << endl;
    }
};

void fun(Mammal& s)
{
    s.speak();
}

void main()
{
    Mammal m1;
    Dog d2;
    fun(m1);
    fun(d2);
    system("pause");
}