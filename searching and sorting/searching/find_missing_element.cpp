#include<iostream>
#include<vector>

using namespace std;

int findMissingElement(vector<int> a){

    //will use binary search method 
    //create two pointers 

    int start = 0;
    int end = a.size()-1;

    int mid = start + (end - start)/2;

    while( start <= end){

        if( mid + 1 == a[mid]){
            start = mid +1;
        }
        
        else{
            end = mid -1;
        }

        mid = start + ( end- start)/2;
    }

    return mid+1;
}

int main(){

    vector<int> a{2,3,4,5,6,7};

    int missingElement = findMissingElement(a);

    cout<<"Missing element is : "<<missingElement<<"\n";

    return 0;
}