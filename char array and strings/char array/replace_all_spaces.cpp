#include<iostream>
#include<string.h>

using namespace std;

void replaceAllSpaces(char arr[]){

    int i = 0;

    while( arr[i] != '\0'){

        if( arr[i] == ' '){
            arr[i] = '@';
        }
        i++;
    }

    cout<<arr<<"\n";
}

int main(){

    char name[100];
    cin.getline(name , 100);
    replaceAllSpaces(name);

    return 0;
}