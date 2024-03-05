#include<iostream>

using namespace std;

void print2DArray(int a[][3]){
    // for printing
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            cout<<a[r][c]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";
}

void swap(int *x , int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void transposeMatrix(int a[][3] , int transposeArr[][3]){

    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            transposeArr[c][r] = a[r][c];
        }
    }

    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            cout<<transposeArr[r][c]<<" ";
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
    // print2DArray(a);
    int transposeArr[3][3];

    transposeMatrix(a, transposeArr);
    // print2DArray(a);
    return 0;
}