#include<iostream>
#include<string.h>

using namespace std;

bool isPalindrome(char arr[]){

    int i = 0;
    int j = strlen(arr)-1;

    while( i<=j ){
        if( arr[i++] != arr[j--]){
            return false;
        }
    }

    return true;
}

int main(){
    char str[50];

    cin.getline(str , 50);

    if(isPalindrome(str)){
        cout<<"String is palindrome!!\n";
    }

    else{
        cout<<"String is not a palindrome!!\n";
    }
    return 0;
}