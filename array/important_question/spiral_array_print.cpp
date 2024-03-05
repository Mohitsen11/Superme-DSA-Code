#include<iostream>
#include<vector>

using namespace std;

vector<int> spiralPrint(vector<vector<int> > v){

    vector<int> ans;

    int row = v.size();
    int col = v[0].size();
    int total_elements = row*col;

    int startingRow = 0;
    int endingCol = col-1;
    int endingRow = row-1;
    int startingCol =0;

    int count =0;
    while(count < total_elements){

        // printing first row
        for(int i=startingCol; i<=endingCol && count<total_elements; i++){
            // cout<<v[startingRow][i]<<" ";
            ans.push_back(v[startingRow][i]);
            count++;
        }
        startingRow++;

        // printing ending col
        for(int i=startingRow; i<=endingRow && count<total_elements; i++){
            // cout<<v[i][endingCol]<<" ";
            ans.push_back(v[i][endingCol]);
            count++;
        }
        endingCol--;

        //printing ending row
        for(int i=endingCol; i>=startingCol && count<total_elements; i--){
            // cout<<v[endingRow][i]<<" ";
            ans.push_back(v[endingRow][i]);
            count++;
        }

        endingRow--;

        //printing first col
        for(int i=endingRow; i>=startingRow && count<total_elements; i--){
            // cout<<v[i][startingCol]<<" ";
            ans.push_back(v[i][startingCol]);
            count++;
        }

        startingCol++;
    }

    return ans;
}

int main(){

    vector<vector<int> > v{
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24}
    };

    vector<int> res = spiralPrint(v);

    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }

    return 0;
}