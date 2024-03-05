#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int rows=0; rows<n ; rows++){
        for(int col =0; col<n-rows ; col++){
            if( rows == 0 || col == 0 || col == n-rows-1){
                cout<<"* ";
            }

            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}