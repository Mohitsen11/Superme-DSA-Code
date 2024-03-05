#include<iostream>
#include<vector>

using namespace std;

// SORT CAN NOT BE ALLOWED ( T.C. - O(NLOGN) , S.C. - O(N)) 
// COUNTING MEHTOD DOES NOT SORT IN PLACE ( T.C. - O(N) , S.C. - O(1)) 

void inPlaceSort(vector<int> &a){

    // create three pointers
    int l , m , h;
    l=m=0 , h = a.size()-1;

    while(m<=h){
        if( a[m] == 0){
            swap(a[m] , a[l]);
            m++; l++;
        }

        else if( a[m] == 1){
            m++;
        }

        else{
            swap(a[m] , a[h--]);
        }
    }

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){

    vector<int> a{2,0,1,0,2,2,0,1,1,0};

    inPlaceSort(a);

    return 0;
}