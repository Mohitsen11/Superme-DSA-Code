#include<iostream>

using namespace std;

void printColWiseSum(int a[][3]){

    for(int r=0; r<3; r++){
    int rsum = 0;
        for(int c=0; c<3; c++){
            rsum+= a[c][r];
        }
        cout<<r<<"th col sum is : "<<rsum<<"\n";
    }
}

void print2DArray(int a[][3]){
    // for printing
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            cout<<a[r][c]<<" ";
        }
        cout<<"\n";
    }
}

int main(){

    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    print2DArray(a);

    printColWiseSum(a);

    return 0;

}