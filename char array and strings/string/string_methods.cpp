#include<iostream>
#include<string>

using namespace std;

int main(){

    string str;

    getline( cin , str);

    // cout<<str;
    // string methods

    // finding string length
    cout<<"String length : "<<str.length()<<"\n";

    //checking is string empty?
    cout<<"String is empty ? : "<<str.empty()<<"\n";

    //pushing a character in the string
    str.push_back('a');

    cout<<str<<"\n";

    //popping the last character from the string 
    str.pop_back();

    cout<<str<<"\n";

    //part of the string
    cout<<str.substr(1, 4)<<"\n";

    //string compare
    string a = "mohit";
    string b = "mohit";

    cout<<"String a and String b are equal : "<<a.compare(b)<<"\n";

    // find a word in a string

    string sentence = "India is a beautiful country";
    string target = "kasie";

    
    if(sentence.find(target) == string::npos){
        cout<<"Not found!\n";
    }

    else{
        cout<<"Found the word!!\n";
    }


    // replace the string with a other string

    string message = "My name is japan";
    string naam = "Mohit";

    message.replace(11 , 5 , naam);

    cout<<message<<"\n";

    //use erase to remove a particular word form the string 

    message.erase(0 , 3);

    cout<<message<<"\n"; 
    return 0;
}