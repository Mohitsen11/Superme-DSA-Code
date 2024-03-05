#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int solve(vector<int>& arr , int target){

    //base case
    if( target == 0){
        return 0;
    }

    if( target < 0){
        return INT_MAX;
    }

    // 1 case solve krdo
    int mini = INT_MAX;
    for(int i=0; i<arr.size(); i++){
        int ans = solve( arr , target - arr[i]);

        if( ans != INT_MAX){
        mini = min(mini , ans + 1);
        }
    }

    return mini;
}

int main(){

    vector<int> v = {1,2};

    int target = 3;

    int ans = solve(v , target);

    cout<<"Mini elements to get "<<target<<" is : "<<ans<<"\n";

    return 0;
}


// #include<iostream>
// #include<vector>
// #include<limits.h>

// using namespace std;

// int solve( vector<int>& arr , int target , int sum){
    
//     //base case
//     if( target == sum){
//         return 0;
//     }
    
//     // when target is invalid -> < 0
//     if( target < sum){
//         return INT_MAX;
//     }
    
//     // 1 case sambhal lo
//     int mini = INT_MAX;
    
//     for( int i =0; i<arr.size() ; i++){
        
//         int ans = solve( arr , target , sum + arr[i]);
        
//         if( ans != INT_MAX){
//             mini = min(mini , ans+1);
//         }
//     }
    
//     return mini;
// }

// int main(){
    
//     vector<int> v = {1,2};
    
//     int target = 3;
    
//     int sum = 0;
    
//     int ans = solve( v , target, sum);
    
//     cout<<"Answer is : "<<ans<<'\n';
    
//     return 0;
// }