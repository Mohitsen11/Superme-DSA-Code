#include<iostream>
#include<vector>

using namespace std;

int binarySearch( vector<int> a , int target){

    int s = 0;
    int e = a.size()-1;

    int mid = s+ (e-s)/2;

    while(s<=e){

        // check with mid 
        if( a[mid] == target){
            return mid;
        }

        //check with left element of mid
        if( a[mid-1] == target && ( mid-1 >= s)){
            return mid-1;
        }

        //check with right element of mid
        if( a[mid+1] == target && ( mid+1 <= e)){
            return mid+1;
        }

        //when element is bigger than target 
        else if( a[mid] > target){
            //left search
            e = mid-2;
        }

        else{
            //right search
            s = mid+2;
        }

        mid = s+(e-s)/2;
    }

    return -1;
}

int main(){
    vector<int> v{10,3,40,20,50,80,70};

    int target = 70;

    int indexOfTarget = binarySearch(v,target);

    if( indexOfTarget == -1 ){
        cout<<"Target not found!!\n";
    }

    else{
        cout<<"Target is found at index : "<<indexOfTarget<<"\n";
    }

    return 0;
}