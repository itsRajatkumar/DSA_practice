#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j = 1; j < n-i; j++){
            cout<<" ";
        }
        for(int j = i, k=0; k < i; j++,k++){
            cout<<j;
        }
        for(int j = 2*i-2; j > i-1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}