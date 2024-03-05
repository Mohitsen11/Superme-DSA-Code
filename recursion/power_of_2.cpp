#include<iostream>

using namespace std;

int powerOfTwo( int expo){

    //base case
    if ( expo < 0){
        return -1;
    }

    if( expo == 0){
        return 1;
    }

    // Recursive relation
    int ans = 2 * powerOfTwo(expo-1);

    return ans;
}

int main(){

    int exponent;
    cin>>exponent;

    int ans = powerOfTwo(exponent);

    cout<<"Value of 2^"<<exponent<<" is : "<<ans<<"\n";

    return 0;
}