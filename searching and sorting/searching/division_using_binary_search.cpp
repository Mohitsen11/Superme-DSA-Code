#include<iostream>

// divisor can be negative also 
using namespace std;

int findQuotientUsingBinarySearch(int dividend , int divisor){

    int s = 0;
    int e = abs(dividend);

    int mid = s+(e-s)/2;

    int ans = 1;

    while(s<=e){

        if( abs(mid*divisor) == abs(dividend) ){
            ans = mid;
            break;
        }

        else if( abs(mid*divisor) > abs(dividend)){
            //left part me search
            e = mid-1;
        }

        else{
            //store the ans first
            ans = mid;
            //right part me search
            s = mid+1;
        }

        mid = s+(e-s)/2;
    }
    
    if( (dividend<0 && divisor<0) || (dividend>0 && divisor>0)){
        return ans;
    }

    else{
    return -ans;
    }
}

int main(){

    int dividend , divisor;

    cout<<"Give the dividend and divisor value : \n";
    cin>>dividend>>divisor;

    int quotient = findQuotientUsingBinarySearch(dividend , divisor);

    cout<<"Quotient is : "<<quotient<<"\n";

    return 0;

}