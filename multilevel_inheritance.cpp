#include<iostream>
using namespace std;

class animal
{
    public:
        void eat()
        {
            cout<<"Eating...$"<<endl;
        }
};

class dog: public animal
{
    public:
        void bark()
        {
            cout<<"barking...$"<<endl;
        }
};

class cat: public dog
{
    public:
        void meow()
        {
            cout<<"Meow...$";
        }
};

int main()
{
    cat c;
    c.eat();
    c.bark();
    c.meow();

    return 0;
}