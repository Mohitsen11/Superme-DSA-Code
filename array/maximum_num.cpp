#include<iostream>
#include<limits.h>

using namespace std;

int getMax(int a[] , int size){

    int maxi = INT_MIN;

    for(int i=0; i<size; i++){
        if( maxi < a[i]){
            maxi = a[i];
        }
    }

    return maxi;
}

int main(){

    int a[] = {4,12,77,2323,33,89,234,965,23,6754};

    int size = sizeof(a)/sizeof(a[0]);

    int maxValue = getMax(a, size);

    cout<<"Maximum value is : "<<maxValue<<"\n";

    return 0;
}