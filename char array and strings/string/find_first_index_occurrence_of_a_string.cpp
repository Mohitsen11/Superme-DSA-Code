#include<iostream>
#include<string>

using namespace std;

int findFirstIndexOfOccur( string s, string t){

    // using sliding window concept

    int n = s.size();
    int m = t.size();

    int j;
    for(int i=0; i<=(n-m); i++){   // O(n-m+1)
        for(j=0; j<m; j++){ // O(m)
            if( t[j] != s[i+j]){
                break;
            }
        }
        if( j == m){
            return i;
        }
    }// O(n*m - m^2 + m) overall choose upperbound O(n*m)

    return -1;
}

int main(){

    string s , t;

    cin>>s>>t;

    int ans = findFirstIndexOfOccur(s,t);

    if(ans == -1){
        cout<<"No Occurrence present in the given string!\n";
    }

    else{
        cout<<"First occurrence at index : "<<ans<<"\n";
    }

    return 0;
}