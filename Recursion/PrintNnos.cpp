#include<iostream>
using namespace std;

class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        //Your code here
        if(N==0) 
            return;
        printNos(N-1);
        cout<<N<<" ";
    }
};
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        Solution ob;
        ob.printNos(N);
        cout<<"\n";
    }
    return 0;
}