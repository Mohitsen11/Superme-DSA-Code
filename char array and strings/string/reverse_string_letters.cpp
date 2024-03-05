#include<iostream>
#include<string>

using namespace std;

void reverseLetter(string s){

    //using two pointers approach

    int i=0;
    int j = s.size()-1;

    while(i<j){
        //check if both the chars are alphabets then swap them
        if( isalpha(s[i]) && isalpha(s[j])){
            swap(s[i++] , s[j--]);
        }

        // one of them is not a alphabet
        else if(!isalpha(s[i])){
            i++;
        }

        else{
            j--;
        }
    }

    cout<<s<<"\n";
}

int main(){

    string s;

    cin>>s;

    reverseLetter(s);

    return 0;
}