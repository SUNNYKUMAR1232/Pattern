#include<bits/stdc++.h>
using namespace std;
void M(int n){
            for(int i=0; i<n; i++){
                        if(i<=n/2){
                                for(int j=0 ; j<=n ; j++){
                                   if(j==(i) || j==0 ){
                                    cout<<"* ";
                                   }else {
                                    if(j==(n-i)|| j==(n)){
                                                cout<<"* ";
                                    }else cout<<"  ";
                                   }
                                }
                        }



                        if(i>n/2){
                                    for(int j=0;j<=n; j++){
                                                if(j==0||j==(n)){
                                                            cout<<"* ";
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
            M(n);
            
}