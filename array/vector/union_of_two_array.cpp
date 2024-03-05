#include<iostream>
#include<vector>

using namespace std;

// problem statement
// Elements are here only twice with one unique value

int printArray( vector<int> arr){

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
   
}

int main(){

    vector<int> a{1,2,3,4,5};
    vector<int> b{6,7,8,9};

    vector<int> ans;

    for(int i=0; i<a.size(); i++){
        ans.push_back(a[i]);
    }

    for(int i=0; i<b.size(); i++){
        ans.push_back(b[i]);
    }


    printArray(ans);


    return 0;
}