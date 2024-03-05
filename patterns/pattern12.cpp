#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int count =0;
    for(int r=0; r<n ; r++){
        count = r+1;
        //spaces
        for(int c=0; c<n-r-1; c++){
            cout<<" ";
        }

        //printing
        int c;
        for(c=0; c<r+1; c++){
            cout<<count;
            count++;
            
        }

        //reverse
        count--;
        c--;

        for(; c>=1 ; c--){
            count--;
            cout<<count;
        }
        cout<<"\n";
    }
}