#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int getProfit(vector<int> a){

    int min = INT_MAX;
    int max, index;

    for(int i=0; i<a.size(); i++){
        if( min > a[i]){
            min = a[i];
            index = i;
        }
    }

    max = min;

    if( index < a.size()-1){
        for(int i=index+1; i<a.size(); i++){
        if( max < a[i]){
            max = a[i];
        }
    }
    }

    int res = max - min;

    if(res>0){
        return res;
    }

    else{
        return 0;
    }
}

int main(){
    vector<int> a{100,180,260,310,40,535,695};

    int profit = getProfit(a);

    cout<<"Profit is : "<<profit<<"\n";

    return 0;
}