#include<iostream>
#include<string>
#include<limits.h>

using namespace std;

// we can check char to integer using isdigit() function
// overall time complexity is O(n)

bool isDigit( char x ){
    
    if( x >= 48 && x <= 57){
        return true;
    }

    return false;
}

int myAtoi( string s){

    // create variable to store the number
    int num = 0;

    // create variable to keep the sign
    int sign = 1; // 1 means +ve number

    int i = 0; // for track the index of the string

    // now ignore the leading whitespaces 
    while(s[i] == ' '){
        i++;
    }// O(n) worst case

    // now check i whether it is in range or not
    // and if next char is '-' or '+' then keep it in sign variable
    if( i < s.size() && ((s[i] == '-') || (s[i] == '+'))){
        sign = s[i] == '-' ? -1 : 1;
        ++i;
    }


    // now loop through the string and get the number
    // also if a non - digit char appears then ignore rest of the chars 
    // and if number is outof range [-2^31 , 2^31 - 1] then clammed it in range

    while( i<s.size() && isDigit(s[i])){

        // special case out of range problem
        if( (num > INT_MAX/10) || ((num == INT_MAX/10) && (s[i] > '7'))){
            
            return sign == -1 ? INT_MIN : INT_MAX;
        }

        num = num*10 + (s[i] - '0');
        ++i;
    } //O(n) worst case

    return num*sign;
}

int main(){

    string s;

    cin>>s;

    int ans = myAtoi(s);

    cout<<ans<<"\n";

    return 0;
}