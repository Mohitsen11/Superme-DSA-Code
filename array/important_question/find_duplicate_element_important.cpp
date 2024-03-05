#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

//solve it without modifying the array

// visited solution
// int findDupliacte(vector<int> a){

//     int ans = -1;

//     for(int i=0; i<a.size(); i++){
//         int index = abs(a[i]);
//         if(a[index] > 0){
//             a[index] *= ans;
//         }
//         else{
//             ans = index;
//             break;
//         }

//     }

//     return ans;

// } 

int positioningMethod( vector<int> a){

    while( a[0] != a[a[0]]){
        swap(a[0] , a[a[0]]);
    }

    return a[0];
}

int main(){
    vector<int> a{1,4,2,3,3,6,5};

    // int duplicateElement = findDupliacte(a);

    int duplicateElement = positioningMethod(a);

    cout<<"Duplicate element is : "<<duplicateElement<<"\n";

    return 0;
}