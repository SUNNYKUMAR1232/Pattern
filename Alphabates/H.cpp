#include <bits/stdc++.h>
using namespace std;

void H( int n){
            for(int i=0; i<n ; i++){
                        for(int j=0 ; j<n ; j++){
                       if(j==0 || j==(n-1)|| i==n/2){
                        cout<<"* ";
                       }
                       else if(i!=n/2) cout << "  ";
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
            H(n);
}