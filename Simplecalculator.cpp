# include <iostream>
using namespace std;

int main()
{
    double num1,num2;   // num1 for first operand and num2 for second operand.
    char op;           // op for operator.
    cout<<"     Make your calculations easy!"<<endl;
    cout<<"______________________________________"<<endl;
    cout<<endl;
    cout<<"Enter the first operand: ";
    cin>>num1;
    cout<<"Enter the operator among '+','-','*','/'."<<endl;
    cout<<"NOTE : '+' for addition, '-' for subtraction,'*' for multiplication,'/' for division."<<endl;
    cin>>op;
    cout<<"Enter the second operand: ";
    cin>>num2;

    switch(op)
    {
        case '+':
        cout<<num1+num2<<endl;
        break;

        case '-':
        cout<<num1-num2<<endl;
        break;

        case '*':
        cout<<num1*num2<<endl;
        break;

        case '/':
        cout<<num1/num2<<endl;
        break;

        default: 
        cout<<"Invalid syntax ! Please try another operation."<<endl;
        break;

    }

    return 0;



}


