#include<iostream>
#include<vector>

using namespace std;

bool isPossiblePage( vector<int> book , int m , int sol){

    int pageSum = 0;
    int c = 1;

    for(int i=0; i<book.size(); i++){

        if( book[i] > sol){
            return false;
        }

        if( pageSum + book[i] > sol){
            c++;
            pageSum = book[i];
            if( c > m){
                return false;
            }
        }

        else{
            pageSum += book[i];
        }
    }

    return true;
} 

int binarySearch(vector<int> book , int s , int e , int studentCount){

    int ans = -1;

 while ( s<=e){

    int mid = s+(e-s)/2;

    if( isPossiblePage(book , studentCount , mid)){
        ans = mid;
        e = mid-1;
    }

    else {
        s = mid +1;
    }

 }

 return ans;

}

int findMaxPagesMinInOtherPermutation(vector<int> book , int studentCount){

    // create a search space 
    int start = 0;
    int end = 0;

    for(auto i : book){
        end +=i;
    }

    // accumulate(book , book+book.size() , 0); for getting the total pages 

    return binarySearch(book , start , end, studentCount);
}

int main(){

    vector<int> book{12,34,67,90};

    int studentCount = 2;

    int minValueInMaxPages = findMaxPagesMinInOtherPermutation(book,studentCount);

    if( minValueInMaxPages == -1){
        cout<<"Assignment is not possible!!\n";
    }

    else{
        cout<<"Max pages which can be alloacted to a student is : "<<minValueInMaxPages<<"\n";
    }

    return 0;
}


#include<iostream>
#include<vector>
#include <numeric>

using namespace std;

bool isPossiblePage(vector<int> a , int students, int sol){
    
    int pageSum =0;
    int c =1;
    
    for(int i=0; i<a.size(); i++){
        
        // age no of pages jydaa ho sol se toh 
        // return false kr do
        
        if( a[i] > sol){
            return false;
        }   
        
        // agr pageSum + a[i] jyda hua toh use case me agle student ko book allocate kro
        //sath hi ye bhi check kro ki agla student , studentCount ke ander he ya nhi
        // agr nhi h toh return false kr do kyuki ye sol possible nhi h mtlb
        
        if(pageSum+a[i] > sol){
            c++;
            
            pageSum = a[i];
            
            if( c> students){
                return false;
            }
        }
        
        else{
            //sb thik h book allocate chalu rkho
            pageSum += a[i];
        }
    }
    
    //sb sahi rha to return true kr do
    return true;
}

int binarySerarch(vector<int> a , int s , int e  , int students){
    
    int ans = -1;
    
    while( s <= e){
        int mid = s+(e-s)/2;
        
        if(isPossiblePage(a,students,mid)){
            ans = mid;
            e =mid -1;
        }
        
        else{
         s = mid+1;   
        }
        
    }
    
    return ans ;
}

int findPages( vector<int> a , int students){
    
    // creating search space 
    
    int size = a.size();
    int s = 0;
    int e = 0;
    
    for(auto i: a){
        e += i;
    }
    
    return binarySerarch(a, s , e, students);
    
}

int main(){
    vector<int> a{3,2,2,4,1,4};
    
    int studentCount = 3;
    
    int minPages = findPages(a, studentCount);
    
    if( minPages == -1 ){
        cout<<"Assignment is not possible!!\n";
    }
    
    else{
        cout<<"Assignment has maxi pages : "<<minPages<<"\n";
    }
    
    return 0;
}
