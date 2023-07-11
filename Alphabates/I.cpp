#include <bits/stdc++.h>
using namespace std;

void I(int n){
            for (int i = 0; i < n; i++){
                        
                         if(i==0 || i==(n-1)){
                                    for (int j = 0; j < n/2; j++){
                                                cout<<"* ";
                                    }
                        } 

                        if(i!=0 && i!=(n-1)){
                         for (int j = 0; j < n/2; j++)
                        {
                                    if (j == n / 4)
                                    {
                                                cout << "* ";
                                    }
                                    else
                                                cout << "  ";
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
            I(n);
}