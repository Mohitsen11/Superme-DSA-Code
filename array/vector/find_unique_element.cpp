#include<iostream>
#include<vector>

using namespace std;

// problem statement
// Elements are here only twice with one unique value

int findUnique( vector<int> arr){

    int ans = 0;

    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }

    return ans;
}

int main(){

    int n;

    cout<<"Enter the size of the array : \n";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements of the array: \n";

    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout<<"Unique Element is : "<<uniqueElement<<"\n";

    return 0;
}