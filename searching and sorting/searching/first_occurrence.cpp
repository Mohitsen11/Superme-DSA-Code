#include<iostream>
#include<vector>

using namespace std;

int firstOccurrence(vector<int> a , int target){

    int start = 0;
    int end = a.size()-1;

    int mid = start + ( end- start)/2;

    int ans = -1;
    while(start <= end){
        if( a[mid] == target){
            ans = mid;

            end = mid-1;
        }

        else if( a[mid] < target){
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

    int indexOfFirstOccu = firstOccurrence(a,target);

    cout<<"First occurrence of target is : "<<indexOfFirstOccu<<"\n";

    return 0;
}