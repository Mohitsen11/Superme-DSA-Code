#include<iostream>

using namespace std;

void countZeroOne(int *a , int size){

    int countZero = 0 , countOne = 0;

    for(int i=0; i<size; i++){
        if( a[i] == 0 ){
            countZero++;
        }
        if ( a[i] == 1){
            countOne++;
        }
    }

    cout<<"Total zero's in array : "<<countZero<<"\n";
    cout<<"Total one's in array : "<<countOne<<"\n";

}

int main(){
    int a[] = { 1,1,0,0,1,0,6,5,4,1,0,0,1,0,1};

    int size = sizeof(a)/sizeof(a[0]);

    countZeroOne(a, size);

    return 0;
}