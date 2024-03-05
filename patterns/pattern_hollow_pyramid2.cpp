#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int rows =0 ;rows <n ; rows++){

        int x = 0;

        for( int col = 0; col < (2*n)-1 ; col++){
            if( col < n - rows - 1){
                cout<<" ";
            }
            else if(x < 2* rows + 1){

            if(x ==0 || x == 2*rows || rows == n-1){
                cout<<"*";
                
            }

            else{
                cout<<" ";
            }
            x++;
            }
            else {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}