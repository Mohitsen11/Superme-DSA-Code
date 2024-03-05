#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>& arr , int s ,int e, int& key){

    //base case 
    if( s > e ){
        return -1; // invalid array
    }

    int mid = s + (e-s)/2;
    // case -2 
    if( arr[mid] == key){
        return mid;
    }

    // 1 case sambhal lo 
    // when arr[mid] < key ---> search in right part

    if( arr[mid] < key){
       return binarySearch(arr , mid+1 , e , key);
    }

    else{
        // when arr[mid] > key ---> search in left part
       return  binarySearch(arr,s,mid-1,key);
    }

}

int main(){

    vector<int> v{3,6,12,76,3,77,43,90};

    int n = v.size();

    int s = 0; 
    int e = n;

    int target = 1;

    int index = binarySearch( v ,s, e , target);

    if( target != -1 ){
        cout<<"Target is present at : "<<index<<" index.\n";
    }

    else{
        cout<<"Target is absent."<<index<<"\n";
    }

    return 0;
}