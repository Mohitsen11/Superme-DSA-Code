#include<iostream>
#include<string.h>

using namespace std;

int getLength(char arr[]){
    int len = 0;
    int i=0;

    while( arr[i] != '\0'){
        len++;
        i++;
    }

    return len;
}

int main(){

    char name[] = "mohit";

    int i = 0;
    int j = getLength(name)-1;

    while( i<=j ){
        swap(name[i++] , name[j--]);
    }

    cout<<name;

    return 0;
}