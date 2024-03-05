#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> a{10,20,30,40,50};

    int sum = 70;

    for(int i=0; i<a.size(); i++){
        for(int j=i+1; j<a.size(); j++){
            if( a[i] + a[j] == sum){
                cout<<"Pair found : ("<<a[i]<<","<<a[j]<<")"<<"\n";
            }
        }
    }
    return 0;
}