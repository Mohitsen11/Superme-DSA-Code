#include<iostream>
#include<cstring>

using namespace std;

int main(){

    int student[] = { 1,2 ,3 ,4,5};

    memset( student , -1 , sizeof(student));

    for(int i=0; i<sizeof(student)/sizeof(student[0]); i++){
        cout<<student[i]<<" ";
    }

    return 0;
}