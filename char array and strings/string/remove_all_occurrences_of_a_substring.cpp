#include<iostream>
#include<string>

using namespace std;

void removeAllOccu(string s , string part){

    int pos = s.find(part);

    while(pos != string::npos){

        s.erase(pos , part.length());

        pos = s.find(part);
    }

    cout<<s<<"\n";
}

int main(){

    string s , part;

    getline(cin , s);
    getline(cin , part);

    removeAllOccu(s , part);

    return 0;
}