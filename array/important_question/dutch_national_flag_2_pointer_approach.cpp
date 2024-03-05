// move all negative numbers to one side of an array;
// t.c. - o(n , s.c. - o(1))
#include<iostream>
#include<vector>

using namespace std;

void sortInplace(vector<int> &a){

    //create two pointers
    int l , h;
    l=0 , h = a.size()-1;

    while( l < h){
        if( a[l] < 0){
            l++;
        }

        else if( a[h] > 0){
            h--;
        }

        else{
            swap(a[l] ,a[h]);
        }
    }
}

int main(){
    vector<int> a{1,2,-1,4,-2,4,4,-2,-2,3,2,-1};

    sortInplace(a);

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
