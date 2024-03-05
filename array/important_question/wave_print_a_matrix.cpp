#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int> > v{
        {1,4,6,7},
        {2,8,9,3},
        {4,3,5,1}
    };

    int row = v.size();
    int col = v[0].size();

    for(int c=0; c<col; c++){
        for(int r=0; r<row; r++){
            
            if( c%2 != 0){
                cout<<v[row-r-1][c]<<" ";
            }
            
            else{
                cout<<v[r][c]<<" ";
            }
        }

    }

    return 0;
}