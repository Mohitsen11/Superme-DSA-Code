#include<iostream>

using namespace std;

int waysToReach(int n ){
    
    //base case ( when to stop)
    
    if( n == 0 || n == 1 ){
        return 1;
    }
    
    // recursive relation
    
    int ans = waysToReach(n-1) + waysToReach(n-2);
    
    return ans;
}

int main(){
    
    int n;
    
    cin>>n;
    
    int totalWays = waysToReach(n);
    
    cout<<"Total ways to reach "<<n<<"th stairs : "<<totalWays<<"\n";
    
    return 0;
}