#include<iostream>

using namespace std;

int factorial(int x){

    if( x == 1 || x == 0){
        return 1;
    }

    int sum=1;

    for(int i=2; i<=x; i++){
        sum*=i;
    }

    return sum;
}

int main(){

    int n;
    cin>>n;

    for(int r=0; r<n ;r++){
        for(int c=0; c<r+1; c++){

            if(c==0 || c== r){
                cout<<"1 ";
            }
            else{

            int res = factorial(r) / (factorial(r-c) * factorial(c));

            cout<<res<<" ";
            }
        }
        cout<<"\n";
    }
}

