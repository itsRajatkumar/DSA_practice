#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=1;
    for(int i=0;i<n;i++){
        for(int j = 0; j < n-i; j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<k++;
        }
        cout<<endl;
    }
    return 0;
}