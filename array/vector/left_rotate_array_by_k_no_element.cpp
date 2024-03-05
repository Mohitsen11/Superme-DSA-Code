#include<iostream>
#include<vector>

using namespace std;

void leftRotate(vector<int> a , int kElement){

    int j , index =0;

    // FOR GRABBING THE K NO OF ELEMENTS
    for(int i=0; i<kElement; i++){
        int element = a[index];

        //FOR SHIFITING THE ELEMENT TO LEFT ONE BY ONE 
        for(j=0; j<a.size()-1; j++){
            a[j] = a[j+1];
        }
        a[j] = element;
    }

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){

    vector<int> a{1,2,3,4,5,6};

    int k = 3;

    leftRotate(a,k);

    return 0;
}