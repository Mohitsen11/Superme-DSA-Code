#include<iostream>
#include<vector>

using namespace std;

// 1st approach ( t.c. :- O(n-k) , s.c.:- O(n))
// void kClosestElements(vector<int> a , int k ,int x){

//     int l = 0;
//     int h = a.size()-1;

//     while(h-l >=k){

//         if( abs(a[l]-x) > abs(x-a[h])){
//             l++;
//         }

//         else{
//             h--;
//         }
//     }

//     vector<int> ans;

//     for(int i=l; i<=h; i++){
//         ans.push_back(a[i]);
//     }

//     cout<<"K closest elements are here :\n";

//     for(auto i : ans){
//         cout<<i<<" ";
//     }

//     cout<<"\n";
// }

int binarySearch(vector<int> a, int x){

    int s =0;
    int e = a.size()-1;

    int mid = s+(e-s)/2;

    int ans = e;

    while(s<=e){

        if( a[mid] >= x){
            ans = mid;
            e = mid-1;
        }

        // else if( a[mid] < x){
        //     s = mid+1;
        // }

        else {
            s=mid+1;
        }

        mid = s+(e-s)/2;
    }

    return ans;
}

int main(){

    vector<int> a{3,5,8,10};

    int k = 2 , x = 15;

    // kClosestElements(a,k,x);

    int h = binarySearch(a,x);
    int l = h-1;

    // cout<<h<<" ";
    // cout<<l<<" ";

    while(k--){

        if( l < 0){
            h++;
        }

        else if( h >= a.size()){
            l--;
        }

        else if( abs(x-a[l]) > abs(a[h]-x)){
            h++;
        }

        else{
            l--;
        }
    }

    vector<int> ans;

    for(int i=l+1; i<=h-1; i++){
        ans.push_back(a[i]);
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}