#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int getMax(vector<int> a){

    int maxi = INT_MIN;

    for(int i=0; i<a.size(); i++){
        if( maxi < a[i]){
            maxi = a[i];
        }
    }

    return maxi;
}

int majorityElement(vector<int> a){

    int maxElement = getMax(a);

    vector<int> count(maxElement+1);

    for(int i=0; i<a.size(); i++){
         count[a[i]]++;
    }

     
    int maxi = INT_MIN;
    int res;

    for(int i=0; i<count.size(); i++){
        if( maxi < count[i]){
            maxi = count[i];
            res = i;
        }
    }

    if( maxi > a.size()/2){
    return res;
    }

    else{
        return -1;
    }

   
}

int main(){
    vector<int> a{3,3,4,5,2,2,3,4,4};

    int majorElement = majorityElement(a);

    cout<<"Most appeared element is : "<<majorElement<<"\n";

    return 0;
}