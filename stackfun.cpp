/*FUNCTION DEFINITION FOR THE STACK CLASS
 *
 * */

#include"stackhead.h"

template<typename stk>
stack<stk>::stack()
    {
        index=-1;
    }
    


template<typename stk>
void stack<stk>::push()
    {
        if(index<MAX_SIZE-1)
        {
            index++;
            cout<<"Enter the element\n";
            cin>>s[index];
        }
        else
        {
            cout<<"stack overflow\n";
        }
    }

template<typename stk>
void stack<stk>::pop()
{
        if(index>=0)
        {
            cout<<"deleted "<<s[index]<<endl;
            index--;
        }
        else
            cout<<"stack underflow\n";
 }


template<typename stk>
void stack<stk>::display()
    {
        if(index==-1)
        {
            cout<<"no elements to display\n";
        }
        for(int i=0;i<=index;i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;
 }


//Providing stack operations
//
template<typename t1>
void stackop(stack<t1>* ptr)
{
    int op; //variable to choose operator
    while(1)
    {
        cout<<"available options\n1)push\n2)pop\n3)display\n4)exit\n";
        cin>>op;
        switch(op)
        {
            case 1:
                ptr->push();
                break;
            case 2:
                ptr->pop();
                break;
            case 3:
                ptr->display();
                break;
            case 4:
                typeop=7;
                return;
                break;
        }
    }
}

//TEMPLATE FUNCTION TO FREE THE POINTER
//
//
template<typename t1>
void freest(stack<t1>*ptr)
{
    if(ptr!=0)
        delete ptr;
}


//EXPLICIT DECLARATION FOR THE TEMPLATES

template class stack<int>;
template class stack<string>;
template class stack<float>;
template class stack<double>;
template class stack<char>;
template void stackop<int>(stack<int>*);
template void stackop<char>(stack<char>*);
template void stackop<string>(stack<string>*);
template void stackop<double>(stack<double>*);
template void stackop<float>(stack<float>*);
template void freest<int>(stack<int>*);
template void freest<char>(stack<char>*);
template void freest<float>(stack<float>*);
template void freest<double>(stack<double>*);
template void freest<string>(stack<string>*);
