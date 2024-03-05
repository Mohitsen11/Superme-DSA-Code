#include<iostream>

using namespace std;

int printFibonacciSeries(int n){
    
    //base case
    if( n == 1){
        return 0;
    }

    if( n==2){
        return 1;
    }

    //Recursive relation

    int ans = printFibonacciSeries(n-1) + printFibonacciSeries(n-2);

    return ans;
}

int main(){

    // fibonacci series :- 0 1 1 2 3 5 8 13 21 ....

    int n;
    cin>>n;

    int nthTerm = printFibonacciSeries(n);

    cout<<"Fibonacci series "<<n<<"th term is : "<<nthTerm<<"\n";

    return 0;
}