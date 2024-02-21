//Write a c++ program to find the lcm and hcf of two numbers.
#include<iostream>
using namespace std;

int lcm(int x, int y){
    int sky;
    if(x>y){
        sky = x;
    }
    else{
        sky = y;
    }

    while (1)
    {
        if((sky%x == 0) && (sky%y==0)){
            return sky;
        }
        else {
            sky++;
        }
    }    
};
int hcf(int x, int y){
    int sky;
    if(x>y){
        sky = y;
    }
    else{
        sky = x;
    }
    while(1){
        if((x%sky==0)&&(y%sky==0)){
            return sky;
        }
        else{
            sky--;
        }
    }
};

int main(){
    int a, b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;

    cout<<"LCM("<<a<<", "<<b<<") = "<<lcm(a,b)<<endl;
    cout<<"HCF("<<a<<", "<<b<<") = "<<hcf(a,b)<<endl;

    return 0;
}
