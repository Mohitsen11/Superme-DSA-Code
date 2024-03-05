#include<iostream>
#include<vector>

using namespace std;

int findPivot(vector<int> a){

    int s = 0;
    int e = a.size()-1;

    int mid = s + (e-s)/2;

    while(s <= e){

        //for handle sorted array case
        if( s==e ){
            return s;
        }

        // for that fluctuated case 
        if( (mid+1 <=e) && a[mid] > a[mid+1] ){
            return mid;
        }

        if( (mid-1 >=s) && a[mid-1] > a[mid]){
            return mid-1;
        }

        if( a[mid] > a[e]){
            s = mid +1;
        }

        else{
            e = mid -1;
        }

        mid = s+(e-s)/2;
    }

    return -1;
}

int binarySearch(vector<int> a , int s , int e , int target){

    int mid = s + (e-s)/2;

    while( s<=e ){

        if( a[mid] == target){
            return mid;
        }

        else if( a[mid] > target ){
            e = mid-1;
        }

        else{
            s = mid+1;
        }

        mid = s + (e-s)/2;
    }

    return -1;
}

int main(){

    vector<int> a{7,8,9,1,2,3,4,5};

    int target = 3;

    int pivotIndex = findPivot(a);

    int ans = 0;
    if( target >= a[0] && target <= a[pivotIndex]){
        ans = binarySearch(a, 0 , pivotIndex,target);
    }

    else{
        ans = binarySearch(a,pivotIndex+1,a.size()-1,target);
    }

    if(ans == -1){
        cout<<"Target not found!!\n";
    }

    else{
        cout<<"Target is found at index : "<<ans<<"\n";
    }
    return 0;
}