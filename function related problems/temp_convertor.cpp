#include<iostream>

using namespace std;

int convertToFah(int celcius){

    return ( celcius * (9/5)) + 32;
}

int main(){
    int celcius;
    cin>>celcius;

    cout<<"Temp in fahrenheit is : "<<convertToFah(celcius);

    return 0;
}