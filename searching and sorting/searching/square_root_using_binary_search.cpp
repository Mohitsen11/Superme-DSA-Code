#include<iostream>

using namespace std;

double precision(int ans , int target){

    // for precision

    double step = 0.1;

    double finalAns = ans;

    int precision;
    cout<<"Enter the number of floating digits in precision :\n";
    cin>>precision;

    for(int i=1; i<=precision; i++){
        for(double j=finalAns; j*j<=target; j+=step){
            finalAns = j;
        }

        step/=10;
    }

    return finalAns;
}

double findSqreRoot(int n){

    int s = 0;
    int e = n;

    int mid = s+ (e-s)/2;

    int ans = 0;

    while( s<=e){
        if( mid*mid == n){
            return mid;
        }

        else if( mid*mid > n){
            e = mid-1;
        }

        else{
            ans = mid;
            s = mid+1;
        }

        mid = s+(e-s)/2;
    }

    return precision(ans,n);
}

int main(){

    int n;
    cin>>n;

    double squareRoot = findSqreRoot(n);

    cout<<"Square root of num "<<n<<" is : "<<squareRoot<<"\n";

    return 0;
}