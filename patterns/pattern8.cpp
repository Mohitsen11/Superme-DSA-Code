#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int count =0;
    for(int r=0; r<n ; r++){
        for(int c=0; c<r+1 ;c++){
            count++;
            cout<<count<<" ";
        }
        cout<<"\n";
    }
}