#include<iostream>
#include<vector>
#include<set>

using namespace std;

vector<int> commonElement(vector<int> a, vector<int> b , vector<int> c){
    
     int i,j,k;
    i=j=k=0;

    set<int> st;
    vector<int> ans;

    while(i<a.size() && j<b.size() && k<c.size()){
        if( a[i] == b[j] && b[j]==c[k]){
            st.insert(a[i]);
            i++; 
             j++; 
              k++;
        }

        else if( a[i] < b[j]){
            i++;
        }

        else if( b[j] < c[k]){
            j++;
        }

        else{
            k++;
        }
    }

    for(auto i : st){
        ans.push_back(i);
    }
    return ans;
}


int main(){

    vector<int> a{1,1,4,10,20,45,80};
    vector<int> b{5,20,34,67,80,90};
    vector<int> c{10,15,20,50,50,65,80};

   vector<int> element = commonElement(a,b,c);

   for(int i=0; i<element.size(); i++){
    cout<<element[i]<<" ";
   }

   return 0;

}