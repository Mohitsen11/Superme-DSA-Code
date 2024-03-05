#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<limits.h>

using namespace std;

int expandAroundIndex(string s , int i , int j){

    int count = 0;
    while( i>=0 && j<s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;
    }

    return count;
}

string longestPalindromeSubstr(string s){

    string ans;
    int evenMaxi = INT_MIN;
    int oddMaxi = INT_MIN;
    int e , o;
    e=o=0;

    for(int i=0; i<s.length(); i++){

        int oddCount = expandAroundIndex(s,i,i);

        if(oddMaxi < oddCount){
           oddMaxi = oddCount;
            o = i;
        }

        int evenCount = expandAroundIndex(s, i,i+1);

        if( evenMaxi < evenCount){
            e = i;
            evenMaxi = evenCount;
        }       
        
    }

    if( oddMaxi > evenMaxi){
            ans = s.substr(o - oddMaxi +1 , 2*oddMaxi - 1);
        }

        else{
            ans = s.substr(e-evenMaxi+1 , 2*evenMaxi);
        }

        cout<<ans<<" ";

    return ans;
}

int main(){

    string s;

    getline(cin , s);

    string palindromeSubstr = longestPalindromeSubstr(s);

    cout<<"Longest palindromic substring is : "<<palindromeSubstr<<"\n";

    return 0;
}




// brute force approach 
// t.c. - O(n^3)

#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool isValidPalindrome( string s , int start , int end){
    
    while( start <= end){
        
        if( s[start] != s[end]){
            return false;
        }
        
        start++;
        end--;
    }    
    
    return true;
}

string longestPalindromeSubstr( string s){
    
    // use brute force appraoch 
    
    string ans = "";
    
    // find all the substrings and check every substring whether it is a valid palindrome or Not
    
    for(int i=0; i<s.size(); i++){
        for(int j=i; j<s.size(); j++){
            
            if( isValidPalindrome(s,i,j)){
                string t = s.substr(i,j-i+1);
                
                ans = t.size() > ans.size() ? t : ans;
            }
        }
    }
    
    return ans;
}

int main(){
    
    string s = "babad";
    
    string ans = longestPalindromeSubstr(s);
    
    if( ans == ""){
        cout<<"Not found!\n";
    }
    
    else{
        cout<<"Logest palindrome substring is : "<<ans<<"\n";
    }
    
    return 0;
}