#include<iostream>

using namespace std;

void printDigit( int num ){

    //base case
    if( num == 0){
        return ;
    }

    printDigit( num / 10 );
    
    int digit = num % 10;
    cout<<digit<<" ";

}

int main(){

    int num = 568;

    printDigit(num);

    cout<<"\n";
}