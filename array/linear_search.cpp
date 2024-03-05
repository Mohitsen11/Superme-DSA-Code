#include<iostream>

using namespace std;

int linearSearch(int *a , int size , int value ){

    for(int i=0; i<size; i++){
        if( a[i] == value){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[] = { 1 , 8 , 5, 33, 67, 32, 112};

    int value;
    cin>>value;
    int size = sizeof(a)/sizeof(a[0]);

    int valueIndex = linearSearch(a ,size , value);

    if( valueIndex != -1){
        cout<<"Value is present in the array at index : "<<valueIndex<<"\n";
    }

    else{
        cout<<"Value is absent!!"<<"\n";
    }

    return 0;
}