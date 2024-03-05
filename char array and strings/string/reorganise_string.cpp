#include<iostream>
#include<string>
#include<limits.h>

using namespace std;

string reorganiseString( string s ){

    //first create a hashMap to store the count of the char

    int hash[26] = {0};

    //so we will map lowercase letter (a - z) to (0 - 25)

    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    for(int i=0; i<s.size() ; i++){
        cout<<hash[i]<<" ";
    }
    // now find the most/max frequent char 

    // create variable to store the max frequent count and max frequent char
    int max_freq = INT_MIN;
    char max_freq_char;

    for(int i=0; i<26; i++){
        if( max_freq < hash[i]){
            max_freq = hash[i];
            max_freq_char = i + 'a';
        }
    }

    cout<<max_freq<<" "<<max_freq_char<<"\n";

    // placing the max frequent char in one go
    int index = 0;

    while( max_freq > 0 && index < s.size()){
        s[index] = max_freq_char;
        index += 2;
        max_freq--;
    }

    hash[max_freq_char - 'a'] = 0;

    cout<<max_freq<<"\n";

    if( max_freq != 0){
        return "";
    }

    // now we are going to place the rest of the char

    for( int i=0; i<26; i++){
        while(hash[i] > 0){
            index = index >= s.size() ? 1 : index;
            s[index] = i + 'a';
            index += 2;
            hash[i]--; 
        }
    }

    return s;

}


int main(){

    string s;

    cin>>s;

    string ans = reorganiseString(s);

    if( ans == ""){
        cout<<"Reorganisation is not possible!\n";
    }

    else{
        cout<<"Reorganised string is : "<<ans<<"\n";
    }

    return 0;
}