#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    for(int rows =0; rows<n; rows++){
        int col;
        for(col =0; col<rows+1 ; col++){
            int ans = col+1;
            char result = ans + 'A'-1;
            cout<<result;
        }
    
        col = col-1;
        //reverse 

        for(; col>=1 ; col--){
            char result = 'A' + col -1;
            cout<<result;
        }
        cout<<"\n";
    }
}