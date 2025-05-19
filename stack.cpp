#include"stackhead.h"

//main function

int typeop; //variable to choose type

int main()
{
    //Pointers to hold memory
    stack<int> *intp=0;
    stack<char> *charp=0;
    stack<float> *flp=0;
    stack<double> *dobp=0;
    stack<string> *stp=0;


    while(1)
    {
    start:
        cout<<"Enter options\n1)int\n2)char\n3)float\n4)double\n5)string\n6)exit\n";
        cout<<"Enter the type\n";
        cin>>typeop;
       while(1)
        {
            switch(typeop){
                case 1:
                    if(intp==0)
                        intp=new stack<int>;
                    stackop(intp);
                    break;
                case 2:
                    if(charp==0)
                        charp=new stack<char>;
                    stackop(charp);
                    break;
                case 3:
                    if(flp==0)
                        flp=new stack<float>;
                    stackop(flp);
                    break;
                case 4:
                    if(dobp==0)
                        dobp=new stack<double>;
                    stackop(dobp);
                    break;
                case 5:
                    if(stp==0)
                        stp=new stack<string>;
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
                case 7:
                    cout<<"I got here"<<endl;
                    goto start;
                    break;
            }
        } 
    }
}
