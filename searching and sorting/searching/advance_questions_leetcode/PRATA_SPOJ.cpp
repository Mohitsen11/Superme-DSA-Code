#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int isPossibleTime(vector<int> cooks , int nP , int maxTime){

    int currP = 0;

    for(int i=0; i<cooks.size(); i++){

        int rank = cooks[i] , j = 1;

        int timeTaken = 0;

        while( true){

            if( timeTaken + rank * j <= maxTime){
                ++currP;
                timeTaken += rank*j;
                ++j;
            }

            else{
                break;
            }
        }

        if( currP >= nP){
            return true;
        }
    }

    return false;
}

int minTimeToCompleteOrder(vector<int> cooks , int nP){

    int s = 0;
    int highestRank = *max_element(cooks.begin() , cooks.end());

    int e = highestRank * ( nP * (nP + 1))/2;

    int ans = -1;

    while (s<=e)
    {
        int mid = s+(e-s)/2;

        if(isPossibleTime(cooks,nP,mid)){
            ans = mid;
            e = mid-1;
        }
        
        else{
            s = mid+1;
        }
    }

    return ans ;
    
}

int main(){

    int t;

    cin>>t;

    while(t--){
        int nP , nC;

        cin>>nP>>nC;

        vector<int> cooks;

        int ranks;

        while(nC--){
            cin>>ranks;

            cooks.push_back(ranks);
        }
    cout<<minTimeToCompleteOrder(cooks , nP)<<"\n";
    }


    return 0;
}