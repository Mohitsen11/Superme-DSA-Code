#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<vector<int> > a(5, vector<int> (5 , -8));

    for(int i=0; i<a.size(); i++){
        for(int j=0 ; j<a[0].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<a[2][3]<<" \n";
    return 0;
}