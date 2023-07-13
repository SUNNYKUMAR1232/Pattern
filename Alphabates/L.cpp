#include<bits/stdc++.h>
using namespace std;

void L(int n){
            for(int i=0; i<n ; i++){
                        if(i<(n-1)){
                                   cout<<"*";
                        }else{
                                    for(int j=0; j<=n/2+1; j++ ){
                                       cout<<"* ";
                                    }
                        }
                        cout<<endl;
            }
}


int main()
{
             #ifndef ONLINE_JUDGE
                freopen("input.txt", "r", stdin);
                freopen("output.txt", "w", stdout);
            #endif 
            int n;
            cin >> n;
            L(n);
            
}