#include<iostream>
#include<vector>

using namespace std;

int binarySearch( vector<int> a , int target){

    //declare two pointers 
    int start = 0; 
    int end = a.size()-1;

    // for calculating mid index 
    int mid = start + (end - start)/2;

    while(start <= end){
        int element = a[mid];

        if( element == target ){
            return mid;
        }

        else if( target < element ){
            end = mid-1;
        }

        else{
            start = mid+1;
        }

        mid = start + ( end - start)/2;
    }
    
    return -1;
}

int main(){
// ARRAY MUST BE SORTED 
    vector<int> a{1,2,3,4,5,6,7,8,9};
    int target = 78;

    int indexOfTarget = binarySearch(a, target);

    if( indexOfTarget == -1){
        cout<<"Target not found!"<<"\n";
    }

    else{
        cout<<"Target is found!"<<"\n";
    }

    return 0;
}