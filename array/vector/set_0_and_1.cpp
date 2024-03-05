#include<iostream>
#include<vector>

using namespace std;

// void swap(int *num1 , int *num2){
//     int tmp = *num1;
//     *num1 = *num2;
//     *num2 = tmp;
// }

// int main(){
//     vector<int> a{0,1,1,0,0,0,1,0,1,1,0,1,0};
    
//     int s = 0;
//     int e = a.size() - 1;

//     while(s <= e){
//         if(a[s] != 0){
//             if( a[e] == 0){
//                 swap(&a[s++] , &a[e--]);
//             }

//             else{
//                 e--;
//             }
//         }

//         else{
//             s++;
//         }
//     }

//     for(int i=0; i<a.size(); i++){
//         cout<<a[i]<<" ";
//     }
    
//     return 0;
// }

//another method

int main(){
    vector<int> a{0,1,1,0,1,0,0,0,1,1,0,1,0};
    
    int s = 0;
    int e = a.size() - 1;

    int i=0;

    while(i != e){
        if( a[i] == 0){
            swap(a[i] , a[s]);
            i++;
            s++;
        }

        if(a[i] == 1){
            swap(a[i] , a[e]);
            e--;
        }
    }

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}