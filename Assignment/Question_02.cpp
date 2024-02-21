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
