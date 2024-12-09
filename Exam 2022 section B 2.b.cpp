
#include<iostream>
using namespace std;

class animal
{
    public:
    void myanimalsound()
    {
        cout<<"make amnimal sound"<<endl;

    }
};
class dog:public animal
{
public:
    void myanimalsound()
    {
        cout<<"ehw ghew"<<endl;
    }
};
class cat:public animal
{
    public:
    void myanimalsound()
    {
        cout<<"mew mew"<<endl;
    }
};
class hen:public animal
{
    public:
    void myanimalsound()
    {
        cout<<"kok kok"<<endl;
    }

};
int main()
{
    animal a1;
    dog d1;
    cat c1;
    hen h1;
    a1.myanimalsound();
    d1.myanimalsound();
    c1.myanimalsound();
    h1.myanimalsound();

    }
