#include<iostream>
#include<string>

using namespace std;

bool isIsomorphicString(string s , string t){

    // we will use mapping concept

    int hashMap[256] = {0}; // for maaping the string s chars to string t chars

    bool istCharMapped[256] = {0}; // for checking whether string t chars is mapped or not

    // for loop to traverse string s for mappin it
    for(int i=0; i<s.length(); i++){

        //check both the cases
        // 1st is string S's chars is mapped with another char already 
        //2nd whether char of string t is mapped or not

        if( hashMap[s[i]] == 0 && istCharMapped[t[i]] == 0){

            //map the chars with string t chars

            hashMap[s[i]] = t[i];

            // mark the mapped char of string t
            istCharMapped[t[i]] = true;
        }
    } 

    // now mapping is done 

    //but we need to cross check the hashMap table that mapped chars can make string t

    for(int i=0; i<s.length(); i++){
        if( (char)hashMap[s[i]] != t[i]){
            return false;
        }
    }

    return true;
}

int main(){

    //we will use hashmap technique

    string s , t;

    cin>>s>>t;

    if(isIsomorphicString(s,t)){
        cout<<"Strings are Isomorphic!!\n";
    }

    else{
        cout<<"Strings are not Isomorphic!!\n";
    }

    return 0;
}