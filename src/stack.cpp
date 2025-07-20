#include"stackhead.h"

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
                typeop=-1;
                return;
                break;
            default:
                cout<<"please enter correct option"<<endl;
                break;
        }
    }
}

int typeop; //variable to choose type

//main function
int main()
{
    //Pointers to hold memory
    stack<int> *intp=0;
    stack<char> *charp=0;
    stack<float> *flp=0;
    stack<double> *dobp=0;
    stack<string> *stp=0;

    char cont; //option to continue to with old data
    int fcount=0; //fail checking

    while(1)
    {
    start:
    
        cout<<"Enter options....\n1)int\n2)char\n3)float\n4)double\n5)string\n6)exit\n";
        cout<<"Enter the type\n";
        cin>>typeop;
        
        //main while starts
        while(1)
        {
            if(fcount!=0)
            {
                if(typeop>=1&&typeop<=6)
                {
                    fcount=0;
                }
            }
            switch(typeop)
            {
                case 1:
                    if(intp==0)
                        intp=new stack<int>;
                    else{
                        cout<<"Existing data present\nWant to continue?\nPress y to continue and any key to new instance\n\n";
                        cin>>cont;
                        if(cont!='y'||cont!='Y')
                        {
                            cout<<"deleted"<<endl;
                            freest(intp);
                            intp=new stack<int>;
                        }                            
                    }
                    stackop(intp);
                    break;
                case 2:
                    if(charp==0)
                        charp=new stack<char>;
                    else
                    {
                        cout<<"Existing data present\nWant to continue?\nPress y to continue and any key to new instance\n\n";
                        cin>>cont;
                        if(cont!='y'||cont!='Y')
                        {
                            cout<<"deleted"<<endl;
                            freest(charp);
                            charp=new stack<char>;
                        }                            
                    }
                    stackop(charp);
                    break;
                case 3:
                    if(flp==0)
                        flp=new stack<float>;
                    else{
                        cout<<"Existing data present\nWant to continue?\nPress y to continue and any key to new instance\n\n";
                        cin>>cont;
                        if(cont!='y'||cont!='Y')
                        {
                            cout<<"deleted"<<endl;
                            freest(flp);
                            flp=new stack<float>;
                        }                            
                    }
                    stackop(flp);
                    break;
                case 4:
                    if(dobp==0)
                        dobp=new stack<double>;
                    else{
                        cout<<"Existing data present\nWant to continue?\nPress y to continue and any key to new instance\n\n";
                        cin>>cont;
                        if(cont!='y'||cont!='Y')
                        {
                            cout<<"deleted"<<endl;
                            freest(dobp);
                            dobp=new stack<double>;
                        }                            
                    }
                    stackop(dobp);
                    break;
                case 5:
                    if(stp==0)
                        stp=new stack<string>; 
                    else{
                        cout<<"Existing data present\nWant to continue?\nPress y to continue and any key to new instance\n\n";
                        cin>>cont;
                        if(cont!='y'||cont!='Y')
                        {
                            cout<<"deleted"<<endl;
                            freest(stp);
                            stp=new stack<string>;
                        }                            
                    }
                    stackop(stp);
                    break;
                case 6:
                    freest(intp);
                    freest(charp);
                    freest(flp);
                    freest(dobp);
                    freest(stp);
                    exit(0);
                    break;
                case -1:
                    goto start;
                    break;
                default:
                    fcount++;
                    switch(fcount){
                        case 1:
                            cout<<"Please read the options carefully"<<endl;
                            typeop=-1;
                            break;
                        case 2:
                            cout<<"last chance please take care"<<endl;
                            typeop=-1;
                            break;
                        case 3:
                            cout<<"Thanks for using our application.. Read operations carefully"<<endl;
                            typeop=-1;
                            exit(0);
                            break;
                    }
            }
        } 
    }
}
