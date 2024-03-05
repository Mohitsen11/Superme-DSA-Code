#include<iostream>
#include<vector>

using namespace std;

int findPivotIndex(vector<int> a){

    int s =0;
    int e = a.size()-1;

    int mid = s+ (e-s)/2;

    while(s<=e){

        if( s == e){
            //single element ( this case created for the sorted array)
            return s;
        }

        if( (mid+1 <= e) && a[mid] > a[mid+1]){
            return mid;
        }

        if( a[mid-1] > a[mid] && (mid-1 >= s)){
            return mid-1;
        }

        if( a[s] > a[mid]){
            e = mid - 1;
        }

        else{
            s = mid+1;
        }

        mid = s + (e-s)/2;
    }

    return -1;
}

int main(){

    //basically pivot element array ka max element hai

    vector<int> a{1,2,3,4,7,8};

    int pivotIndex = findPivotIndex(a);

    if(pivotIndex == -1){
        cout<<"Kuch gadbad hai!\n";
    }

    else {
        cout<<"Ans is at index : "<<pivotIndex<<"\n";
        cout<<"Pivot element is : "<<a[pivotIndex]<<"\n";
    }

    return 0;
}