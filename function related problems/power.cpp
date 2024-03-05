#include<iostream>
#include<math.h>

using namespace std;

int main(){
   int num = 98565;
    int i =5;

    long int sum =0;

    while( i>0 ){
        int r = num%10;

        sum+=r*pow(10 , i-1);

        num = num/10;
        i--;
    }

    cout<<sum;
}

