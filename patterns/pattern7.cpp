#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int rows=0; rows<n ; rows++){
        
        //spaces

        for( int col =0 ; col<n-rows-1; col++){
            cout<<" ";
        }

        //printing
        for(int col=0; col<rows+1 ; col++){
            cout<<col+1;
        }
        
        //revrese printing
        for(int col=rows; col>=1; col--){
            cout<<col;
        }
        cout<<"\n";
    }

    }

    
