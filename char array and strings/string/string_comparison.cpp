#include<iostream>

using namespace std;

bool isEqual( string a , string b){

    //base case
    if( a.length() != b.length()){
        return false;
    }

    for( int i=0; i<a.length(); i++){
        if( a[i] != b[i]){
            return false;
        }
    } 

    return true;
}

int main(){

    string a = "Raju";
    string b = "Raju";

    if(isEqual(a,b)){
        cout<<"Yes ! strings are equal\n";
    }
    
    else{
        cout<<"Strings are not equal!!\n";
    }

    return 0;
}