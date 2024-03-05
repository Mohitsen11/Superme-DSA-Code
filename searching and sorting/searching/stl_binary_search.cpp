#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v{1,2,3,4,5,6};

    int target1 = 12;

    int a[] = {7,8,9,10,11};

    int n = 5;

    int target2 = 10;

    if( binary_search(v.begin() , v.end() , target1)){
        cout<<"Target is found!!"<<"\n";
    }

    else{
        cout<<"Target not found!!"<<"\n";
    }

    if( binary_search(a , a+n, target2)){
        cout<<"Target is found!!"<<"\n";
    }

    else{
        cout<<"Target not found!!"<<"\n";
    }

     vector<int> b{1,3,3,3,3,3,3,4,4,4,4,4,4,6,7};

    //Lower bound
    auto ans1 = lower_bound(b.begin() , b.end() , 4);

    cout<<"Lower bound is / first occurrence is : "<<ans1 - b.begin()<<"\n";

    //Upper bound
    auto ans2 = upper_bound(b.begin() , b.end() , 3);

    cout<<"Upper bound is / last occurrence is : "<<ans2 - b.begin()-1<<"\n";

    return 0;
}