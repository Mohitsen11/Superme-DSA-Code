#include<iostream>

using namespace std;

int fact(int num){

    //base case
    if( num == 0 || num == 1){
        return 1;
    }

    int res = 1;

    for(int i=2; i<=num; i++){
        res= res*i;
    }

    return res;
}

int main(){
    int num;

    cin>>num;

    int result = fact(num);

    cout<<"Factorial is : "<<result<<"\n";

    return 0;

}