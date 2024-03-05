#include<iostream>

using namespace std;

bool keyPresence( string& str , int& i , char& key){
    
    //base case
    if ( i >= str.length()){
        return false;
    }
    
    // check if key matches
    
    if( key == str[i]){
        return true;
    }
    
    //rr
    
    return keyPresence(str , ++i, key);
    
}

int main(){
    string str = "lovebabbar";
    
    int  i = 0;
    
    char key = 'a';
    
    // bool flag = 0;
    
    bool flag = keyPresence(str , i , key);
    
    if( flag ){
        cout<<"key is present in the given string!!\n";
    }
    
    else{
        cout<<"Key is not present in the given array!!!\n";
    }
    return 0;
    
}