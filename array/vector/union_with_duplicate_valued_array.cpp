#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a{1,5,3,2,7,4};
    vector<int> b{5,8,3,9};

    vector<int> ans;

    for(int i=0; i<a.size(); i++){
        int element = a[i];
        ans.push_back(element);
        for(int j=0; j<b.size(); j++){
            if( element == b[j]){
                b[j] = -1;
            }
        }
    }

    for(int i=0; i<b.size(); i++){

        if( b[i] != -1){
        ans.push_back(b[i]);
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}