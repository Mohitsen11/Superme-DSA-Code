#include<iostream>
#include<vector>

using namespace std;

vector<bool> Sieve(int N){

    // create a vector Bool

    vector<bool> sieve(N+1 , true);

    // 0 & 1 are not Prime numbers

    sieve[0] = sieve[1] = false;

    for( int i=2; i*i<=N; i++){ // outer loop optimized by doing i*i<=N instead of i<=N

        if( sieve[i] == true){
            int j = i*i;  // inner loop optimized by doing i*i instead of i*2

            while( j<=N){
                sieve[j] = false;

                j += i;
            }
        }
    }

    return sieve;
}

int main(){

    int N = 25;

    vector<bool> sieve = Sieve(N);

    for(int i=2; i<sieve.size(); i++){
        if( sieve[i]){
            cout<<i<<" ";
        }
    }

    return 0;
}