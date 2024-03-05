#include<bits/stdc++.h>

using namespace std;

void print( int *a , int n , int i){

    //base case
    if( i>= n){
        return ;
    }

    // 1 case sambhal lo
    cout<<a[i]<<" ";

    //baaki recursion sambhal lega
    print(a, n , i+1);
}

int main(){
    int a[5] = {1,2,3,4,5};

    int n = sizeof( a)/sizeof(a[0]);

    int i=0;
    
    print(a , n , i);
     cout<<"\n";
}