// last occurrence of a char in a given string

#include<iostream>

using namespace std;

int lastOccurRTL( string& str , int i , char& x){
    
    //base case 
    if( i < 0){
        return -1;
    }
    
    //1 case sambhal long
    if( str[i] == x){
        return i;
    }
    
    // baaki recursion sambhal lega
   return lastOccurRTL(str , i-1, x);
    
}

int main(){
    
    string str = "acbcddedcfcfg";
    
    int i = str.length()-1;
    
    char x = 'c';
    
    int lastOccur = lastOccurRTL(str, i, x);
    
    if( lastOccurRTL ){
        cout<<"Last occurrence of the char at index : "<<lastOccur<<"\n";
    }
    
    else{
        cout<<"Char is not present!!\n";
    }
    
    return 0;
}