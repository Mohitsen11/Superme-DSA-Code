#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

string addUsingArray(vector<int> a , vector<int> b){

    string ans;
    int carry = 0;
    int i = a.size()-1;
    int j = b.size()-1;

    while(i>=0 && j>=0){

        int x = a[i] + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i-- , j--;
    }


    while(i>=0){

        int x = a[i] + 0 + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i-- ;
    }

    while(j>=0){
        int x = 0 + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        j--;
    }

    //WHEN CARRY WILL BE GENERATED BY LAST DIGIT ADDITION , IT NEED TO BE STORED IN STRING ANS

    if( carry ){
        ans.push_back(carry + '0');
    }

    //FOR REMOVING STARTING ZEROS
    while(ans[ans.size()-1] == '0'){
        ans.pop_back();
    }

    //REVERSE THE STRING TO GET THE ACTUAL ANS
    reverse(ans.begin() , ans.end());

    return ans;

}

int main(){

    vector<int> a{1,2,3,4};
    vector<int> b{7,7,8};

    string ans = addUsingArray(a,b);

    cout<<ans<<" ";

    return 0;
}