#include<iostream>
#include<string>

using namespace std;

// int main(){

//     int w;
//     cin>>w;

//     if( w%2 == 0){

//         if( w == 2){
//             cout<<"NO\n";
//         }

//         else{
//             cout<<"YES\n";
//         }
//     }

//     else{
//         cout<<"NO\n";
//     }

//     return 0;
// }

// int main(){

//     int n;

//     cin>>n;

//     int sumX = 0;
//     int sumY = 0;
//     int sumZ = 0;

//     while( n -- ){

//         int x,y,z;

//         cin>>x>>y>>x;

//         sumX += x;
//         sumY += y;
//         sumZ += z;

//     }

//     if( sumX + sumY + sumZ == 0){
//         cout<<"YES\n";
//     }

//     else{
//         cout<<"NO\n";
//     }

//     return 0;
// }

int main(){

    int n;

    cin>>n;

    while(n--){

        string str;

        cin>>str;

        if( str.length() >= 10){

            int numOfChar = str.length()-2;
            string value = to_string(numOfChar);

            str.replace(1 , numOfChar , value);
        }

        cout<<str<<"\n";

    }

    return 0;
}