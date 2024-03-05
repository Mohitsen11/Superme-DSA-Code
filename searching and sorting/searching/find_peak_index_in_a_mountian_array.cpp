#include<iostream>
#include<vector>

using namespace std;

int findPeakIndex(vector<int> a){

    int s = 0;
    int e = a.size()-1;

    int mid = s+ (e-s)/2;

    while( s<e){

        if( a[mid] < a[mid+1]){
            //right search
            s = mid+1;
        }

        else{
            e = mid;
        }

        mid = s+ (e-s)/2;
    }

    return s; // return e also 
}

int main(){
    vector<int> a{0,4,2,8,0};

    int peakIndex = findPeakIndex(a);

    cout<<"Peak index is : "<<peakIndex<<"\n";

    return 0;
}
