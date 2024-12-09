#include<iostream>
using namespace std;

class animal
{
    public:
    string name;
    int age;
    void print()
    {
        cout<<"animal name is:"<<name<<endl;
        cout<<"animal age is:"<<age<<endl;

    }
};
class cat:public animal
{
public:
    string date_of_birth;
    int number_of_child;
    void print()
    {
        cout<<"animal name is:"<<name<<endl;
        cout<<"animal age is:"<<age<<endl;
        cout<<"animal date of birth is:"<<date_of_birth<<endl;
        cout<<"animal number of child is:"<<number_of_child<<endl<<endl;
    }
};
class dog:public animal
{
public:
    string date_of_birth;
    int number_of_child;
        void print()
    {
        cout<<"animal name is:"<<name<<endl;
        cout<<"animal age is:"<<age<<endl;
        cout<<"animal date of birth is:"<<date_of_birth<<endl;
        cout<<"animal number of child is:"<<number_of_child<<endl;
    }
};
int main()
{
  //CAT INFORMATION
    cat c1;
    c1.name="Joe Biden";
    c1.age=3;
    c1.date_of_birth="02.11.2021";
    c1.number_of_child=3;

    //DOG INFORMATION

    dog d1;
    d1.name="Donald Trunp";
    d1.age=4;
    d1.date_of_birth="05.02.2020";
    d1.number_of_child=5;
    cout<<"CAT INFORATION"<<endl;
    c1.print();
    cout<<"DOG INFORMATION"<<endl;
    d1.print();
    return 0;
}

