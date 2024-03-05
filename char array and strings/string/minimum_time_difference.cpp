#include<iostream>
#include<vector>
#include<string>
#include<limits.h>
#include<math.h>

using namespace std;

int minMinutesDiff(vector<string> s){

    vector<int> minutes;

    for(int i=0; i<s.size(); i++){

        string curr = s[i];

        int hours = stoi(curr.substr(0,2));
        int minute = stoi(curr.substr(3,2));

        int totalMinutes = hours*60 + minute;

        minutes.push_back(totalMinutes);
    }

    //sort the minutes array
    sort(minutes.begin() , minutes.end());

    // now find the min minutes difference
    int mini = INT_MAX;
    for(int i=0; i<minutes.size()-1; i++){

        int diff = minutes[i+1] - minutes[i];

        mini = min(mini , diff);
    }

    int lastDiff1 = (minutes[0] + 1440 - minutes[minutes.size()-1]);
    int lastDiff2 = ( minutes[minutes.size()-1] - minutes[0]);
    int lastDiff = min(lastDiff1 , lastDiff2);
    mini = min(mini , lastDiff);

    return mini;
}

int main(){

    vector<string> s{"23:15" , "12:23" , "00;12" , "18:02"};

    int ans = minMinutesDiff(s);

    cout<<"Min difference of minute is : "<<ans<<"\n";

    return 0;
}