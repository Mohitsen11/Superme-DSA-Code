#include<iostream>
#include<vector>

using namespace std;

int findOddOccurredElementUsingBinarySearch(vector<int> a){

    int s = 0;
    int e = a.size()-1;

    int mid = s+(e-s)/2;

    while(s <= e){
        //when array has single element 
        if( s == e){
            return s;
        }

        // when mid is even
        if( mid %2 == 0){

            if( a[mid]  == a[mid+1]){
                 //mid(even index) and mid+1(odd index) are equal
                //mid is in left part 
                // so search in right part

                s = mid+2;
            }

            else{
                //mid(even index) and mid+1(odd index) are not equal

                // mid ( even indexed value can be ans or it can be in right part)
                //search in left part but not from mid - 1 
                 e = mid;
            }
        }

        // when mid is odd
        else {
            
            if( a[mid-1] == a[mid]){
                //mid is in left part
                //search in right part

                s = mid+1;
            }

            else{
                e = mid-1;
            }
        }

        mid = s+(e-s)/2;
    }

    return -1;
}

int main(){

    vector<int> a{1,1,2,2,3,3,4,4,3,6,6,4,4};

    int oddOccurElement = findOddOccurredElementUsingBinarySearch(a);

    if( oddOccurElement == -1){
        cout<<"No element is occurred odd time!!\n";
    }

    else{
        cout<<"Odd occurring element is "<<a[oddOccurElement]<<" at "<<oddOccurElement<<" index\n";
      
    }

    return 0;

}