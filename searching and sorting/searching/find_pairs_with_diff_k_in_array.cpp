#include<iostream>
#include<vector>
#include<set>

using namespace std;

// approach-1 T.C. - O(n^2)
// int main(){

//     vector<int> a{3,1,4,1,5};

//     int k = 2;

//     set<pair<int , int> > ans;
    
//     for(int i=0; i<a.size(); i++){
//         for(int j=i+1; j<a.size(); j++){

//             if( abs(a[i] - a[j]) == k){
//                 ans.insert({a[i] , a[j]});
//             }
//         }
//     }

//     cout<<"Total unique pairs with difference k are : "<<ans.size()<<"\n";

//     cout<<"Pairs are here : \n";

//     for(auto i : ans){
//         cout<<i.first<<" "<<i.second<<"\n";
//     }

//     return 0;

// }

// approach -2:- TWO POINTER ( t.c. - O(nlogn))

// int main(){
//     vector<int> a{3,1,4,1,5};

//     int k = 2;

//     int i =0, j =1;
    
//     set<pair<int,int> > ans;

//     //sort the array

//     sort(a.begin() , a.end());

//     while(j < a.size()){
//         int diff = a[j] - a[i];

//         if( i == j){
//             ++j;
//         }

//         if( diff == k ){
//             ans.insert({a[i] , a[j]});
//             ++i , ++j;
//         }

//         else if( diff > k){
//             ++i;
//         }

//         else{
//             ++j;
//         }
//     }

//     cout<<"Total unique pairs with difference k are : "<<ans.size()<<"\n";

//     cout<<"Pairs are here : \n";

//     for(auto i : ans){
//         cout<<i.first<<" "<<i.second<<"\n";
//     }

//     return 0;

// }

//approach - 3 :- Binary Search ( t.c. - O(nlogn));

// int BS( vector<int> a , int start , int target){

//     int end = a.size()-1;

//     while( start <= end){
//         int mid = start+(end-start)/2;
//         if( a[mid] == target ){
//             return mid;
//         }

//         else if( a[mid] > target){
//             end = mid-1;
//         }

//         else{
//             start = mid +1;
//         }
//     }

//     return -1;
// }

// int main(){

//     vector<int> a{3,1,4,1,5};

//     int k = 2;

//     // sort the array

//     sort(a.begin() , a.end());

//     set<pair<int , int> > ans;

//     for(int i=0; i<a.size(); i++){

//         if( BS(a , i+1 , a[i]+k) != -1){
//             ans.insert({a[i] , a[i]+k});
//         }
//     }

//     cout<<"Total unique pairs with difference k are : "<<ans.size()<<"\n";

//     cout<<"Pairs are here : \n";

//     for(auto i : ans){
//         cout<<i.first<<" "<<i.second<<"\n";
//     }

//     return 0;
// }