#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter array size : " <<endl;
    cin >> n;

    int A[n] ={0,1,2,3,4,8,11,43,71,13};

    for(int x:A){
        cout<<x<<endl;
    }
}