#include<iostream>
#include<vector>
#include<string>

using namespace std;

// bool isVowel( char x ){

//     //change it to lowercase
//     if( x>=65 && x<=92){
//         x = x - 'A' + 'a';
//     }

//     bool flag = 0;

//     vector<char> vowel{'a', 'e', 'i', 'o', 'u'};

//     for( auto i : vowel){

//         if( x == i){
//             flag = 1;
//         }
//     }

//     if( flag == 1){
//         return true;
//     }

//     return false;
// }


bool isVowel( char x){
    x = tolower(x);

    return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u';
}

void reverseAllVowels( string s){

    // two pointer approach

    int i = 0;
    int j = s.length()-1;

    while( i<j ){

        if( isVowel(s[i]) && isVowel(s[j])){
            swap( s[i++] , s[j--]);
        }

        else if( !isVowel(s[i])){
            i++;
        }

        else{
            j--;
        }
    }

    cout<<"String after vowel reversing :\n";

    cout<<s<<"\n";
}

int main(){

    string s;

    cin>>s;

    reverseAllVowels(s);

    return 0;
}