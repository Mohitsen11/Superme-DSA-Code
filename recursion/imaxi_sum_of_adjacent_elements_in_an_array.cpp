#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

void maxSum( vector<int>& arr , int i , int& maxi , int sum){

    //base case
    if( i >= arr.size()){
        maxi = max(maxi , sum);

        return;
    }

    // include
    maxSum(arr , i+2 , maxi , sum + arr[i]);

    //exclude
    maxSum(arr , i+1 , maxi , sum);
}


int main(){

    vector<int> v{4,7,2,1,3,5};

    int i =0;
    int sum= 0;

    int maxi = INT_MIN;

    maxSum(v,i,maxi,sum);

    cout<<"Maximum sum of two adjacent elements is : "<<maxi<<"\n";

    return 0;
}