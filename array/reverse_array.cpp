#include<iostream>

using namespace std;

void swap( int *x , int *y){

    int tmp = *x;
    *x = *y;
    *y = tmp;

}

void reverseArray(int a[] , int n){

    int left = 0;
    int right = n-1;

    while( left <= right ){
        swap(&a[left++] , &a[right--]);
    }

}

void printArray(int a[], int n){
    for(int i=0; i<n ; i++){
        cout<<a[i]<<" ";
    }

    cout<<"\n";
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9};

    int n = 9;

    reverseArray(a ,n);
    printArray(a, n);

    return 0;
}