#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            if(col<=n-row+1)
                cout<<"*";
            else
                cout<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
}