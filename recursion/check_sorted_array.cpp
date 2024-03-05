#include<iostream>
#include<vector>

using namespace std;

bool checkSorted(vector<int>& arr , int i , int& n){

    // base case
    if( i == n-1 )
        return true;

    // 1 case sambhal lo
    if( arr[i+1] < arr[i])
       return false;

    // baaki recursion dekh lega
    return checkSorted(arr , i+1 , n);
}

int main(){

    vector<int> v{1,2,8,4,5,6};

    int i = 0;

    int n = v.size();

    bool ans = checkSorted(v , i , n );

    if( ans ){
        cout<<"Given array is sorted!!\n";
    }

    else{
        cout<<"Given array is not sorted!!\n";
    }
}