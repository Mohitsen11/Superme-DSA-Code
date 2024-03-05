#include<iostream>

using namespace std;

int main(){

    for(int r=0; r<4; r++){
        int c;
        for(c=0; c<r+1; c++){
            if( c==0 ){
                cout<<"* ";
            }

            else{
                cout<<c<<" ";
            }
        }
        c--;
        //reverse 

        for(; c>=1 ; c--){
            if(c == 1){
                cout<<"* ";
            }

            else{
                cout<<c-1<<" ";
            }
        }
        cout<<"\n";
    }

    for(int r=0 ; r<3; r++){
        int c;
        for(c=0; c<3-r; c++){
            if( c ==0 ){
                cout<<"* ";
            }

            else{
                cout<<c<<" ";
            }
        }

        c--;
        //reverse
        for(; c>=1 ; c--){
            if(c == 1){
                cout<<"* ";
            }

            else{
                cout<<c<<" ";
            }
        }

        cout<<"\n";
    }
    

    
}