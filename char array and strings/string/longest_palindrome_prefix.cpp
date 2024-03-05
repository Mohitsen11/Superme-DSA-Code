#include<iostream>
#include<vector>

using namespace std;

// time complexity is O(n^2)

string longestCommonPrefix( vector<string> s){

    // creation of a string ans to store the common chars
    string ans ;
    int i =0;

    while( true ){

        // creation of a char variable to store the curr char
        char curr_ch = 0;

        // now loop through the given vector string array
        for(auto str : s){

            // check if curr_ch is empty then assign it a char
            if( curr_ch == 0){
                curr_ch = str[i];
            }

            else if( str[i] != curr_ch){
                curr_ch = 0;
                break;
            }
        }

        if( curr_ch == 0){
            break;
        }

        ans.push_back(curr_ch);
        i++;
    }

    return ans;
}

int main(){

    vector<string> word{"codewithharry" , "codedamn", "codingNinjas"};

    string ans = longestCommonPrefix(word);

    if( ans == ""){
        cout<<"There is no common prefix available!\n";
    }

    else{
        cout<<"Longest Common Prefix is : "<<ans<<"\n";
    }

    return 0;
}