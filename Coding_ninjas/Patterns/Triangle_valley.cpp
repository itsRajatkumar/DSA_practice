#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k = 1;
        for(int j = 1; j <= i; j++){
            cout<<k++;
        }
        k--;
        for(int j = 2*n-2*i; j>0; j--){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<k--;
        }

        cout<<endl;
    }
    return 0;
}