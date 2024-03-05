#include<iostream>

using namespace std;

void printExtreme(int a[] , int n){

    int left = 0;
    int right = n-1;

    while( left < right ){
        cout<<a[left++]<<" "<<a[right--]<<" ";
    }


    if(left == right)
    {
        cout<<a[left]<<"\n";
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8};

    int n = 8;

    printExtreme(a ,n);

    return 0;
}