#include<iostream>
#include<string>

using namespace std;

// bool isValidAnagram( string s , string t){

//     // brute force approach t.c - O(nlogn)

//     //sort the strings
//     sort(s.begin() , s.end());
//     sort(t.begin() , t.end());

//     if( s== t){
//         return true;
//     }

//     return false;

// }

//Counting approach

bool validAnagram(string s , string t){

    //  t.c. - o(n+m)

    //create a int array for storing the freq of chars

    int freqTable[256] = {0};

    for(int i=0; i<s.size(); i++){
        freqTable[s[i]]++;
    }//O(n)

    for(int i=0; i<t.size(); i++){
        freqTable[t[i]]--;
    }//O(m)

    //check for freqTable

    for(int i=0; i<256; i++){
        if( freqTable[i] != 0){
            return false;
        }
    }

    return true;
}
int main(){
    string s , t;

    cin>>s>>t;

    if(validAnagram(s,t)){
        cout<<"It is a valid anagram\n";
    }

    else{
        cout<<"It is not a valid anaagram\n";
    }

    return 0;
}