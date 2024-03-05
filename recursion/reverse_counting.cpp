#include<iostream>

using namespace std;

void printReverseCounting(int n){

    //base case 
    if ( n <= 0){
        return ;
    }

    // Processing
    cout<<n<<" ";


    // Recursive relation
    printReverseCounting(n-1);
}

int main(){

    int n;
    cin>>n;

    printReverseCounting(n);

    return 0;
}