#pragma once
//Correctly reason about control flow in a program using dynamic dispatch.
//base
// concept of Virtual Functions

#include <iostream>
using namespace std;

class user {
public:
    virtual void print()
    {
        cout << "Welcome" << endl;
    }

    void show()
    {
        cout << "This is the lobby" << endl;
    }
};

class lobby : public user {
public:
    void print()
    {
        cout << "Plase wait " << endl;
    }

    void show()
    {
        cout << "Someone will help you shortly" << endl;
    }
};

int main()
{
    user* costumer1;
    lobby costumer2;
    costumer1 = &costumer2;

    // virtual function, binded at runtime
    costumer1->print();

    // Non-virtual function, binded at compile time
    costumer1->show();
}

