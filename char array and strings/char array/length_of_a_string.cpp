#include<iostream>
#include<string.h>

using namespace std;

int getLength(char arr[]){

    int len = 0;
    int i = 0;

    while( arr[i] != '\0'){
        len++;
        i++;
    }

    return len;
}

int main(){

    char name[100];

    cin>>name;

    int length = getLength(name);

    cout<<"Length of the string is : "<<length<<"\n";

    return 0;
}