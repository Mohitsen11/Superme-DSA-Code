#include<iostream>

using namespace std;

void checkEvenOdd(int num){
    if( num % 2 == 0){
        cout<<"Number is Even."<<"\n";
    }
    else{
        cout<<"Number is Odd."<<"\n";
    }
}

int main(){
    int num;
    cin>>num;

    checkEvenOdd(num);

    return 0;
}