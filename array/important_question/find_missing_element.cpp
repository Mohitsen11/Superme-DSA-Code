#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a{2,3,4,3,5};

    // visiting method
    // for(int i=0; i<a.size(); i++){
    //     int index = abs(a[i]);

    //     if( a[index - 1] > 0){
    //         a[index-1] *= -1;
    //     }
    // }

    // for(int i=0; i<a.size(); i++){
    //     if(a[i]>0){
    //         cout<<i+1<<"\n";
    //     }
    // }


    // sorting + swapping method

    int i=0;
    while(i<a.size()){
        int index = a[i]-1;

        if( a[i] != a[index]){
            swap(a[i] , a[index]);
        }

        else{
            ++i;
        }
    }

    for(int i=0; i<a.size(); i++){
        if( a[i] != i+1){
            cout<<i+1<<"\n";
        }
    }

     
    return 0;
}