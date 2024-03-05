#include<iostream>
#include<string>

using namespace std;

// it will take o(n^3) time complexity

bool isPalindrome(string s , int i , int j){

    // use palindrome algo to find palindrome.

    while( i<= j){
        if( s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int findPalindromicSubstr( string s){

    // first get the length 
    int n = s.length();
    int cnt = 0;
    // use for loops to get the substrings

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            //now check valid palindrome for every substr
            if( isPalindrome(s , i , j)){
                cnt++;
            }
        }
    }

    return cnt;
}


// o(n^2) t.c.
int expandAroundIndex(string s , int left , int right){

    int count = 0;

    while( left>=0 && right < s.length() && s[left] == s[right]){
        count++;
        left--;
        right++;
    }

    return count;
}

int countSubstring( string s){

    int totalCount = 0;

    int n = s.length();

    for(int center=0; center<n; center++){

        //odd substring ke liye
        int oddKaAns = expandAroundIndex(s, center , center);
        totalCount += oddKaAns;

        int evenKaAns = expandAroundIndex(s, center , center+1);
        totalCount += evenKaAns;

    }

    return totalCount;
}

int main(){
    string s;
    getline(cin , s);

    // int totalNoOfPalindromicSubstr = findPalindromicSubstr(s);



    // cout<<"Total substrings which are palindrome in the given string are : "<<totalNoOfPalindromicSubstr<<"\n";

    int ans = countSubstring(s);

    cout<<"Total number of substrings are : "<<ans<<"\n";

    return 0;
}