#include<iostream>
#include<string>

using namespace std;

   string intToRoman(int num) {
        //create romanSymbol table

    string romanSymbol[] = {"M" , "CM", "D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    // create value table for romanSymbol
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

    string ans = "";

    for(int i=0; i<13; i++){

        while(num >= values[i]){
            ans += romanSymbol[i];
            num -= values[i];
        }
    }

    return ans;
    }

int main(){

    int num = 12;

    string ans = intToRoman(num);

    cout<<"Roman numeral is : "<<ans<<"\n";

    return 0;
}