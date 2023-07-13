#include <bits/stdc++.h>
using namespace std;
void G(int n){
            for(int i=0; i<=n/2; i++){
                        if(i==0 || i<(n/2)){
                                    cout<<"*";
                        }

                        if(i==0){
                                    for(int j=0; j<n; j++){
                                       if(j>n/2 && j<(n-1)){
                                                cout<<"* ";
                                       }else cout<<"  ";
                                    }
                        }
                        if(i>(0) && i<(n/2)){
                                    for (int j = 0; j < n; j++){
                                                if(j==(n/2) || j==(n-1)){
                                                            cout<<"* ";
                                                }else cout<<"  ";
                                    }
                        }
                        if(i==(n/2)){
                                    for (int j = 0; j < n; j++){
                                                if((j>0 && j<n/2)|| j==(n-1)){
                                                            cout<<" *";
                                                }else cout<<"  ";
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
            G(n);
}