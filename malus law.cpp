#include<iostream>
#include<math.h>
#include<stdio.h>
#define pl 3.14159654
using namespace std;
int main()
{
    float angle,result;
    float I=0;
    float Io=0.7;
    cout<<"Here, Io is (0.7/2)mA";
    cout<<endl<<"Enter the angle:";
    cin>>angle;
    angle=(angle*pl)/180;
    result=cos(angle);
    I=(Io/2)*cos(angle)*cos(angle);
    cout<<endl<<"Final intensity,I="<<ends<<I<<"mA";
}
