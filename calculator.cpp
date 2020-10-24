#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    char op;

    cout<<"Welcome to the calculator";

    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    cout<<"Enter the operator:";
    cin>>op;

    float result=0;

    if(op=='+'){
        result = num1+num2;
    }
    else if(op=='-'){
        result = num1-num2;
    }
    else if(op=='*'){
        result = num1*num2;
    }
    else if(op=='/'){
        result = num1/num2;
    }
    else {
        cout<<"Invalid operator";
    }
    cout<<"The answer is "<<result;
    return 0;
}
