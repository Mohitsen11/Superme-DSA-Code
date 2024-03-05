#include<iostream>

using namespace std;

int fact(int n){

    //base case 
    if( n == 1 || n == 0){
        return 1;
    }

    // Recursive relation
    int ans = n * fact(n-1);

    return ans;
}

int main(){

    int n;

    cin>>n;

    int ans = fact(n);

    cout<<"Value of "<<n<<" factorial is : "<<ans<<"\n";

    return 0;
}