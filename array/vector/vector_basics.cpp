#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int> arr){

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){

    //basic vector initialization
    vector<int> arr(5); //vector with size 5 and all 5 elements have value 0

    printArray(arr);

    vector<int> brr(5 , 101); //vector with size 5 and all 5 elements have value 101

    printArray(brr);

    vector<int> crr{1,2,3,4}; // vector with 4 elements with values 1,2,3,4

    printArray(crr);

    cout<<"Size of vector arr : "<<arr.size()<<"\n";
    cout<<"Size of vector brr : "<<brr.size()<<"\n";
    cout<<"Size of vector crr : "<<crr.size()<<"\n";

    cout<<"Capacity of evctor arr : "<<arr.capacity()<<"\n";
    cout<<"Capacity of evctor brr : "<<brr.capacity()<<"\n";
    cout<<"Capacity of evctor crr : "<<crr.capacity()<<"\n";

    cout<<"Is vector arr empty ? : "<<boolalpha<<arr.empty()<<"\n";
    cout<<"Is vector brr empty ? : "<<boolalpha<<brr.empty()<<"\n";
    cout<<"Is vector crr empty ? : "<<boolalpha<<crr.empty()<<"\n";

    arr.push_back(1);
    brr.push_back(102);
    crr.push_back(5);

    printArray(arr);
    printArray(brr);
    printArray(crr);

    arr.pop_back();
    brr.pop_back();
    crr.pop_back();

    printArray(arr);
    printArray(brr);
    printArray(crr);
}