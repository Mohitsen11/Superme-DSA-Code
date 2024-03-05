#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int findRepeatingElementIndex(vector<int> a){

    // brute force method 
    // t.c - o(n^2) , s.c.- 0(1)

    for(int i=0; i<a.size(); i++){
        for(int j=i+1; j<a.size(); j++){
            if( a[i] == a[j]){
                return i+1;
            }
        }
    }
}

int getMax(vector<int> a){

    int maxi = INT_MIN;

    for(int i=0; i<a.size(); i++){
        if( maxi < a[i]){
            maxi = a[i];
        }
    }

    return maxi;
}

// t.c. - o(n) , s.c -o(n)
int firstRepeatedElement(vector<int> a){

    // store the counting of the elements 

    // create a vector count for storing the count

    int maxElement = getMax(a);

    vector<int> count(maxElement+1);

    for(int i=0; i<a.size(); i++){
        count[a[i]]++;
    }

    for(int i=0; i<a.size(); i++){
        if( count[a[i]] > 1){
            return i+1;
        }
    }

    return -1;
}

int main(){
    vector<int> a{1,6,3,4,3,1,2};

    // cout<<"First repeting element's index is : "<<findRepeatingElementIndex(a);
    cout<<"First repeting element's index is : "<<firstRepeatedElement(a);

    return 0;
}