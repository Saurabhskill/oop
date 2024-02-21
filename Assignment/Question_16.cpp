// Create the equivalent of a four-function calculator. The program should ask 
// the user to enter a number, an operator and another number. (Use floating 
// point). It should then carry out the specified arithmetical operation: adding, 
// subtracting, multiplying or dividing the two numbers. Use a Switch statement 
// to select the operation. Finally, display the result. When it finishes the 
// calculation, the program should ask whether the user wants to do another 
// calculation. The response can by ‘y’ or ’n’. 

#include<iostream>
using namespace std;

int main(){
    float a, b;
    char ch, f;
    do{
        cout<<"Enter 1st number: "<<endl;
        cin>>a;
        cout<<"Enter the operator(+, -, *, /):"<<endl;
        cin>>ch;
        cout<<"Enter 2nd number: "<<endl;
        cin>>b;

        switch (ch)
        {
        case '+': cout<<a+b<<endl;
            break;
        case '-': cout<<a-b<<endl;
            break;
        case '*': cout<<a*b<<endl;
            break;
        case '/': cout<<a/b<<endl;
            break;
        default:cout<<"Enter correct operator!";
            break;
        }

        cout<<"Do you want to continue('y' or 'n'): "<<endl;
        cin>>f;
    }while(f == 'y');

    cout<<"Thank you...";

    return 0;
}
