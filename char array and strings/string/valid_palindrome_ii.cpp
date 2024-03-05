#include<iostream>
#include<string>

using namespace std;

bool checkPalindrome(string s, int i , int j){

    while( i<=j){

        if( s[i] != s[j]){
            return false;
        }

        i++;
        j--;
    }

    return true;
}

bool validPalindrome(string s){

    int i=0; 
    int j = s.length()-1;

    while( i<= j){

        if( s[i] != s[j]){
            //ek baar i ko remove kro
            //ek baar j ko remove kro

            return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
        }
        
        else{
            i++;
            j--;
        }
    }

    return true;
}

int main(){

    string s;

    getline(cin , s);

    if(validPalindrome(s)){

        cout<<"String is a Palindrome!!\n";
    }

    else{
        cout<<"String is not a Palindrome!!\n";
    }

    return 0;
}