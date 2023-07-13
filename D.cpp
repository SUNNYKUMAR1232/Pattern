#include <bits/stdc++.h>
using namespace std;


void D(int n){
            for(int i=0; i<n; i++){
                        if(i==0||i==(n-1)){
                                    for (int j = 0; j < n; j++)
                                    {
                                    if(j==(n-1)|| j==(n-2)){
                                                cout<<" ";
                                    }else cout<<"* ";
                                    }

                        }else{
                            for(int j=0; j<n; j++){
                                   if(j==0 || j==(n-1)){
                                    cout<<"*";
                                   }else{
                                    cout<<"  ";
                                   }
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
         cin>>n;
          D(n);
}