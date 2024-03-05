#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int num;

    cin>>num;

    int totalDigits = floor(log10(abs(num))) + 1;

    cout<<"Number of digits : "<<totalDigits;
}