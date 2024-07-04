//Simple calculator in c++
#include <iostream>
using namespace std;
int main()
{
    int a,b;//taken two variable to do arithematic opertaion for simple calculator
    cin>>a>>b;
    char ch;
    int s;
    cin>>ch;// to input the operator which you have to do on operands
    switch(ch){
        case '+':
                cout<<"After adding the operands"<<endl;
                cout<<a+b;
                break;
        case '-':
                cout<<"After subtracting the operands"<<endl;
                cout<<a-b;
                break;
         case '*':
                cout<<"After multiplying the operands"<<endl;
                cout<<a*b;
                break;
         case '/':
                cout<<"After dividing the operands"<<endl;
                cout<<a/b;
                break;
         case '%':
                cout<<"After moduling the operands"<<endl;
                cout<<a%b;
                break;
        default:
                cout<<"Enter the valid symbol and try again sry"<<endl;
    }

}