#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

// time complexity :- O(log(2^logm-1));

int binarySearch(vector<int> a , int s , int e , int target ){

    while( s<= e){
        int mid = s+(e-s)/2;

        if( a[mid] == target){
            return mid;
        }

        else if( a[mid] > target){
            e = mid-1;
        }

        else {
            s = mid+1;
        }
    }

    return -1;
}

int expoSearching(vector<int> a , int target){

    int n = a.size()-1;

    if( a[0] == target)
     return 0;

    int i = 1;

    while(i < a.size() && a[i] <= target){
        i = i*2;
    } 

    return binarySearch(a, i/2 , min(i,n), target);
}

int main(){
    vector<int> a{2,4,6,7,8,10,12,14,15,17,19,23,25,26,28,30,33,36,38};

    int target = 29;
    // / exponantial searching

    int ans = expoSearching(a,target);

    if( ans == -1 ){
        cout<<"Target not found!!\n";
    }
    else{
        cout<<"target found!!\n";
    }

    return 0;
}