#include<iostream>

using namespace std;

int main(){


    int n;
    cin>>n;

    for(int r=0; r<n; r++){
    int count=1;

        for(int c=0; c<n-r-1; c++){
            cout<<" ";
        }

        for(int c=0; c<(2*r)+1; c++){

            if( r==0 || r==n-1){
            if( c%2 == 0){
                cout<<count;
                count++;
            }
                

            else{
                cout<<" ";
            }
            }
            
            else {
                if( c == 0){
                cout<<"1";
            }

            else if( c == 2*r){
                cout<<r+1;
            }

            else{
                cout<<" ";
            }
            }

        }
        cout<<"\n";
    }
}