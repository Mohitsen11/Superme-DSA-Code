#include<iostream>

using namespace std;

float getArea( int radius ){

    float pi = 3.14;

    float result = pi * radius * radius;

    return result;
}

int main(){
    int radius;

    cin>>radius;

    float areaOfCircle = getArea(radius);

    cout<<"Area of cicle is : "<<areaOfCircle<<"\n";

    return 0;
}