#include<iostream>
#include<vector>

using namespace std;

// brute force approach

// int main(){

//     vector<int> a{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};

//     // suppose you have given infinite size array

//     int target = 4;
//     //brute force approach
//     int ans = -1;
//     int i =0;
//     while( 1 ){
//         if(a[i] > target){
//             break;
//         }

//         if(a[i] == target){
//             ans = i;
//             break;
//         }

//         i++;
//     }

//     if(ans != -1){
//         cout<<"Element is found!!\n";
//     }

//     else{
//         cout<<"Not found!!\n";
//     }

//     return 0;

// }


// exponantial appraoch

int binarySearch( vector<int> a , int s , int e , int target){

    while(s <= e){
        int mid = s+(e-s)/2;

        if(a[mid] == target){
            return mid;
        }

        else if( a[mid] > target){
            e = mid-1;
        }

        else{
            s = mid+1;
        }
    } 

    return -1;
}

int main(){

    vector<int> a{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};

    // suppose you have given infinite size array

    int target = 4;

    int i = 0;
    int j =1;

    while(a[j] < target){
        i = j;
        j = j*2;
    }

    int ans = binarySearch(a,i,j, target);

    if(ans != -1){
        cout<<"Element is found!!\n";
    }

    else{
        cout<<"Not found!!\n";
    }

    return 0;

}