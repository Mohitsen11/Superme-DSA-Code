// #include<iostream>
// #include<vector>
// #include<string>
// #include<map>
// #include<array>
#include<bits/stdc++.h>


using namespace std;

// vector<vector<string> > groupAnagram( vector<string> strs){

//     // creation of map

//     //time complexity is : O(N*KlogK)

//     // using sorting method
//     map<string , vector<string>> mp;

//     // traverse the given array of strings strs
//     for(auto str : strs){ // O(N) for for loop
//         string s = str;
//         sort(s.begin() , s.end()); // O(KlogK) for sort
//         mp[s].push_back(str);
//     }

//     // now create a vectot<vector<string> > to store the key's value 

//     vector<vector<string> > ans;

//     for(auto it=mp.begin(); it!=mp.end() ; it++){

//         ans.push_back(it->second);
//     }

//     return ans;
// }

// method -2 hashMap

std::array<int , 256> hash2(string s){

    std::array<int , 256> hash1 = {0};

    for(int i=0; i<s.size(); i++){
        hash1[s[i]]++;
    }

    return hash1;
}

vector<vector<string> > groupAnagram( vector<string> strs){

    // creation of map

    //time complexity is : O(N)

    // using sorting method
    map<string , vector<string>> mp;

    // traverse the given array of strings strs
    for(auto str : strs){ // O(N) for for loop
        mp[hash2(str)].push_back(str);
    }

    // now create a vectot<vector<string> > to store the key's value 

    vector<vector<string> > ans;

    for(auto it=mp.begin(); it!=mp.end() ; it++){

        ans.push_back(it->second);
    }

    return ans;
}

int main(){

    vector<string> strs{"eat" , "tea" , "tan" ,"nat" , "bat" , "ate"};

    vector<vector<string> >ans = groupAnagram(strs);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}