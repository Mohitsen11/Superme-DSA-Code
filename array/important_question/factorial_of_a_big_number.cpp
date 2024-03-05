#include<iostream>
#include<vector>

using namespace std;

vector<int> getFactorial(int num){

    vector<int> ans;

    ans.push_back(1);
    int carry =0 , j=0;

    for(int i=2; i<=num; i++){

        for(j=0; j<ans.size(); j++){
        int x = ans[j] * i + carry;
        int digit = x%10;

        ans[j] = digit;

        carry = x/10;

        }
        while( carry ){
            ans.push_back(carry%10);
            carry = carry/10;
        }
    }

    reverse(ans.begin() , ans.end());

    return ans;
}

int main(){
    int num;
    cin>>num;

    vector<int> ans = getFactorial(num);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}