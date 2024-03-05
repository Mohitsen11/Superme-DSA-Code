#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<vector<int> >a, int target){

    int rows = a.size();
    int col = a[0].size();

    int s = 0;
    int e = rows*col-1;

    int mid = s + (e-s)/2;

    while(s<=e){

        int rowIndex = mid/col;
        int colIndex = mid%col;

        int element = a[rowIndex][colIndex];

        if( element == target){
            cout<<"Targer found at : "<<rowIndex<<" "<<colIndex<<"\n";

            return true;
        }

        else if( element > target){
            e = mid-1;
        }

        else{
            s =mid+1;
        }
        mid = s + (e-s)/2;
    }

    return false;
}

int main(){

    //creating 2-d vector array

    vector<vector<int> > v{
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };

    int target = 11;

    if(binarySearch(v,target)){
        cout<<"Target is found!!\n";
    }

    else{
        cout<<"Target not found!!\n";
    }

    return 0;
}