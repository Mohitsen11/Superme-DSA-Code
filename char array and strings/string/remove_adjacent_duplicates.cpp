#include<iostream>
#include<string>

using namespace std;

void removeDuplicates(string a){

    int len = a.length();

    int i = 0;

    while( i<len-1){
        if(a[i] == a[i+1]){
            a.erase(i , 2);

            len = len -2;
            i=0;
        }
        
        else{
            i++;
        }
    }
    
    cout<<a<<"\n";
}

void removeDuplicate1(string s ){

    string ans ;

    int k = 0;
    ans.push_back(s[k]);

    for(int i=0; i<s.length()-1 ; i++){

        if( (k>=0) && (ans[k] == s[i+1])){
            ans.pop_back();
            k--;
        }

        else{
            ans.push_back(s[i+1]);
            k++;
        }
    }

    cout<<ans<<"\n";
}

string removeDuplicate2(string s){

    string ans = "";

    int i =0;

    while( i < s.length()){

        if( ans.length() > 0){
            if( ans[ans.length()-1] == s[i]){
                ans.pop_back();
            }

            else{
                ans.push_back(s[i]);
            }
        }

        else{
            ans.push_back(s[i]);
        }

        i++;
    }

    return ans;
}
int main(){

    string s;

    getline(cin , s);

    // removeDuplicates(s);

    // removeDuplicate1(s);

    string ans1 = removeDuplicate2(s);

    cout<<ans1<<"\n";

    return 0;
}