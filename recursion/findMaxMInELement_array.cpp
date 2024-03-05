#include<iostream>
#include<limits.h>

using namespace std;

void findMax(int *a , int n, int i, int& maxi){

        //base case
        if( i >= n){
            return;
        }

        maxi = max(maxi , a[i]);

        //recursive relation
        findMax(a,n,i+1,maxi);

}


void findMin(int *a, int n ,int i, int& mini){

    //base case
    if ( i >= n){
        return ;
    }

    mini = min(mini , a[i]);

    //recursive relation

    findMin(a,n,i+1,mini);

}

int main(){

    int a[] = { 11,4,6,23,7,656,3423,3};

    int maxi = INT_MIN;
    int mini = INT_MAX;

    int i = 0;

    int n = sizeof(a)/sizeof(a[0]);

    findMax(a,n,i,maxi);
    findMin(a,n,i,mini);

    cout<<"Max ELement in the given array is : "<<maxi<<"\n";
    cout<<"Min ELement in the given array is : "<<mini<<"\n";

    return 0;
}