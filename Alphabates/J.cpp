#include <bits/stdc++.h>
using namespace std;

void J(int n)
{
            for (int i = 0; i < n; i++)
            {
                         if(i==0){
                                    for(int j=0; j<n; j++){
                                                if(j>(n/2)-3 && j<(n/2)+3){

                                                cout<<"* ";
                                                }
                                                else
                                                cout << "  ";
                                    }
                         }

                         if(i<n/2 && i!=0){
                                    for (int j = 0; j < n; j++){
                                               
                                                
                                                if (j == n / 2)
                                                {
                                                            cout << "* ";
                                                }else cout<<"  ";
                                    }

                         }
                         if(i>=n/2 && i!=(n-1)){
                                    for (int j = 0; j < n; j++){
                                                if(j==0 || j==n/2){
                                                            cout<<"* ";
                                                }else cout<<"  ";
                                    }
                         }

                        if ( i == (n - 1))
                        {
                                    for (int j = 0; j < n ; j++)
                                    {  if( j<n/2 && j!=0){

                                                cout << "* ";
                                    }
                                    else if (j == 0){
                                                cout<<"  ";
                                    }
                                    }
                        }

                       
                        cout << endl;
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
            J(n);
}