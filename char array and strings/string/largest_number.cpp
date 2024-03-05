#include<iostream>
#include<string>
#include<vector>

using namespace std;

static bool myComp( string x , string y){

    string t1 = x + y;
    string t2 = y + x;

    return t1 > t2;
}

    string largestNumber(vector<int>& nums) {
        
        // convert the integers into string

        vector<string> ans;

        for(auto n : nums){
            ans.push_back(to_string(n));
        }

        // descending sorting
        sort(ans.begin() , ans.end() , myComp);


        // check if array of string has all string zero

        if( ans[0] == "0"){
            return "0";
        }

        string output;

        for( auto str : ans){
            output += str;
        }

        return output;
    }

    int main(){

        vector<int> nums{1,2,5,4,3};

        string ans = largestNumber( nums);

        cout<<"Largest number is : "<<ans<<"\n";

        return 0;
    }