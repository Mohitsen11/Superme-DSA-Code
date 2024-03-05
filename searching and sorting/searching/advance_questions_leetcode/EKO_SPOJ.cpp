#include<iostream>
#include<vector>

using namespace std;

long long int isPossibleHeight( vector<long long int> a , int requireWood , int bladeHeight){

    long long collectedWood = 0;

    for(long long int i=0; i<a.size(); i++){
        if( a[i] > bladeHeight){
            collectedWood += a[i] - bladeHeight;
        }
    }

    return collectedWood >= requireWood;
}

long long int  maxSawBladeHeight( vector<long long int> a , long long int requireWood){

    //create search space 
    // sort(a.begin() , a.end()); //works in c++20

    long long int ans = -1;

    long long int s = 0;
    long long int e = a[a.size()-1];

    while( s<=e){
        long long int mid = s+(e-s)/2;

        if( isPossibleHeight(a,requireWood , mid)){
            ans = mid;
            s = mid+1;
        }
        
        else{
            e = mid-1;
        }
    }

    return ans;
}

int main(){

    long long int n,m;

    cin>>n>>m;

    vector<long long int> a;

    while(n--){

        long long int height ;
        cin>>height;

        a.push_back(height);
    }

    cout<<maxSawBladeHeight(a,m)<<"\n";

    return 0;
}