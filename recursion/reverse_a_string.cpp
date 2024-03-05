#include<iostream>

using namespace std;

void reverseString( string& str , int s , int e){

    //base case
    if( s >= e){
        return ;
    }

    // 1 case sambhal lo

    swap(str[s] , str[e]);

    //baaki recursion sambhal lega

    reverseString(str, s+1 , e-1);
}

int main(){

    string str = "love";

    int s = 0;
    int e = str.length()-1;

    reverseString(str , s ,e);

    cout<<"String after Reversing : "<<str<<"\n";

    return 0;
}