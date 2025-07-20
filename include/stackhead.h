#include<iostream>
using namespace std;


//Maximum size of the stack
#define MAX_SIZE 5
extern int typeop;

template <typename stk>
class stack;

template<typename stk>
void freest(stack<stk>*ptr);

template<typename stk>
void stackop(stack<stk>*ptr);

template <typename stk>
class stack
{
    stk s[MAX_SIZE];
    int index;

    public:

    stack();  //CONSTRUCTOR CALL
    void push(); //ADDING DATA TO STACK
    void pop();  //To pop elements from stack(i.e)deletes elements from stack
    void display();//displays the element of the stack
    
    friend void freest<stk>(stack<stk> *ptr);
};



