#include<iostream>
#include<vector>

using namespace std;

int lastOccurrence(vector<int> a , int target){

    int start = 0;
    int end = a.size()-1;

    int mid = start + ( end- start)/2;

    int ans = -1;
    while(start <= end){
        if( a[mid] == target){
            ans = mid;

            start = mid + 1;
        }

        else if( a[mid] > target){
            start = mid+1;
        }

        else{
            end = mid-1;
        }

        mid = start + ( end - start)/2;
    }

    return ans;
}

int main(){

    vector<int> a{1,3,4,4,4,4,4,6,7};

    int target = 4;

    int indexOfLastOccu = lastOccurrence(a,target);

    cout<<"Last occurrence of target is : "<<indexOfLastOccu<<"\n";

    return 0;
}