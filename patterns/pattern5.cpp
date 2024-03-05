#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int rows=0; rows<n ; rows++){
        for(int col =0; col<rows+1 ; col++){
            if( rows == n-1 || col == 0 || col == rows){
            cout<<col+1<<" ";
            }

            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}