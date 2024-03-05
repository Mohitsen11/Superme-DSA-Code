#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> a{1,4,2,6,7,3};
    vector<int> b{5,4,4,7,3};

    vector<int> ans;

    //outer loop for a 
    for(int i=0; i<a.size(); i++){
        int element = a[i];

        //inner loop for b
        for(int j=0; j<b.size(); j++){
            if(element == b[j]){
                //mark common element
                b[j] = -1; // agr negative value allowed hoti to -1 ki jgh INI_MIN use krna 
                ans.push_back(element);
            }
        }
    }

    for(auto value : ans){
        cout<<value<<" ";
    }



    return 0;
}