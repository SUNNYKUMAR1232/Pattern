#include<bits/stdc++.h>
using namespace std;

void A(int n){
    int m=n/2;
    for(int i=0; i<n; i++){
        for ( int j = 0; j<n-i+1; j++)
        {
            cout<<" ";
        }
        if((i<m)||(i>m)){
        for ( int j = 0; j<2*i+1; j++)
        {    
            
            if((j==0)||(j==(2*i))){
                cout<<"*";
            }else{
                cout<<" ";
            } 
        }
        }
        if(i==m){
             for ( int j = 0; j<2*i+1; j++)
        { 
            cout<<"*";
        }
        }
        for ( int j = 0; j<n-i+1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int n;
cin>>n;
A(n);
}