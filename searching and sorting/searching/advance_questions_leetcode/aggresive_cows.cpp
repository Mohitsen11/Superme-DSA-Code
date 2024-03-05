#include<iostream>
#include<vector>

using namespace std;

bool isPossible(vector<int> a , int cows , int minDis){

    int c = 1;
    int pos = a[0];

    for(int i =1 ; i<a.size(); i++){
        if( a[i] - pos >= minDis){
            c++;
            pos = a[i];
        }
            if( c == cows){
                return true;
            }
        
    }

    return false;

}

int binarySearch(vector<int> a , int s , int e , int cows){

    int ans = -1;
    while( s <= e){
        int mid = s+(e-s)/2;

        if( isPossible(a,cows ,mid)){
            ans = mid;
            s = mid+1;
        }

        else{
            e = mid-1;
        }
    }

    return ans;
}

int solution(vector<int> a , int cows){

    //create search space

    int size = a.size();

    int s = 0;
    int e = a[size-1] - a[0];

    return binarySearch(a,s,e,cows);
}

int main(){

    vector<int> a{1,2,4,8,9};

    int aggressiveCows = 3;

    int maxiDisBetweenTwoCows = solution(a,aggressiveCows);

    if( maxiDisBetweenTwoCows == -1){

        cout<<"Not possible to assign!!\n";
    }

    else {
        cout<<"Max distance will be : "<<maxiDisBetweenTwoCows<<"\n";
    }

    return 0;
}