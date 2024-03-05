#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

vector<bool> Sieve( int N){

    vector<bool> sieve(N+1 , true);

    sieve[0] = sieve[1] = false;

    for( int i=2; i*i<=N; i++){

        if( sieve[i]){
            int j = i*i;

            while( j<=N){
                sieve[j] = false;

                j += i;
            }
        }
    }

    return sieve;
}

vector<bool> segSieve( int L , int R){

    vector<bool> sieve = Sieve(sqrt(R));
    vector<bool> segSieve(R-L+1 , true);

    vector<int> basePrime;

    for(int i=2; i<sieve.size(); i++){
        if(sieve[i]){
            basePrime.push_back(i);
        }
    }

    if(L == 0 || L == 1){
        segSieve[L] = false;
    }

    for( auto prime : basePrime){

        int first_mul = (L / prime) * prime;

        if( first_mul < L){
            first_mul += prime;
        }

        int j = max( first_mul , prime * prime);

        while( j<=R){

            segSieve[j-L] = false;

            j += prime;
        }
    }

    return segSieve;
}

int main(){

    int L = 110;
    int R = 120;

    vector<bool> ss = segSieve(L,R);

    for(int i=0; i<ss.size(); i++){
        if( ss[i]){
            cout<<L+i<<" ";
        }
    }

    return 0;
}