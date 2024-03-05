#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a{10,20,30,40};

    int sum = 70;

    for(int i=0; i<a.size(); i++){
        for(int j=i+1; j<a.size(); j++){
            for(int k=j+1; k<a.size(); k++){
                if( a[i] + a[j] + a[k] == sum){
                    cout<<"Triplet found : ("<<a[i]<<","<<a[j]<<","<<a[k]<<")\n";
                }
            }
        }
    }
    
    return 0;
}