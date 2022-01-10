#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    for(int i=0;i<=n+1;i++){
        res=res^i;
    }
    cout<<res;
}