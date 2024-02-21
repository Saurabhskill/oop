// Write a program to perform the Mathematical Operation. 
// a. Print Area of Circle. 
// b. Convert Celsius to Fahrenheit

#include<iostream>
using namespace std;

int main(){
    float radius, area;
    cout<<"Enter the radius of circle:"<<endl;
    cin>>radius;

    area = 3.14*radius*radius;
    cout<<"Area of the circle is: "<<area;
    return 0;
}


/* // b. Convert Celsius to Fahrenheit

#include<iostream>
using namespace std;

int main(){
    float temp1, temp2;
    cout<<"Enter the temperature in celsius:"<<endl;
    cin>>temp1;

    temp2 = 9.0/5*temp1 + 32;
    cout<<temp1<<" degree celsius is equals to "<<temp2<<" degree fahrenheit";
    return 0;
}
*/
