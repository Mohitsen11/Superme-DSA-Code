#include<iostream>
#include<string.h>

using namespace std;

void convertToUppercase( char arr[]){

    int i = 0;
    while (arr[i] != '\0'){
        if( (int)arr[i] >= 97 && (int)arr[i] <= 122 ){
            arr[i] -= 32;
        }
        i++;
    }

    cout<<arr<<"\n";
}

void convertToLowercase( char arr[]){
    
    int i=0;

    while( arr[i] !='\0'){

        if( (int)arr[i] >= 65 && (int)arr[i] <= 92){
            arr[i] += 32;
        }
        i++;
    }

    cout<<arr<<"\n";
}

int main(){

    char name[] = "Mohit";

    // strupr(name);
    // cout<<name;
    // strlwr(name);
    // cout<<name;


    convertToUppercase(name);

    convertToLowercase(name);

    return 0;
}