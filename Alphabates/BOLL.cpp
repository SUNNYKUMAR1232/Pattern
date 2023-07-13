#include <bits/stdc++.h>
using namespace std;
void B(int n)
{

            for (int i = 0; i < 2 * n; i++)
            {
                        if (i == 0)
                        {
                                    for (int j = 0; j < n; j++)
                                    {
                                                if (j == (n - 1) || j == 0)
                                                {
                                                            cout << "  ";
                                                }
                                                else
                                                {
                                                            cout << "* ";
                                                }
                                    }
                        }
                        else if (i < n)
                        {
                                    for (int j = 0; j < n; j++)
                                    {
                                                if ((j == 0) || (j == n - 1))
                                                {
                                                            cout << "* ";
                                                }
                                                else
                                                {
                                                            cout << "  ";
                                                }
                                    }
                        }
                        else if (i == n)
                        {
                                    for (int j = 0; j < n; j++)
                                    {
                                                if (j == (n - 1))
                                                {
                                                            cout << "  ";
                                                }
                                                else
                                                {
                                                            cout << "* ";
                                                }
                                    }
                        }
                        else if (i > n && i != (2 * n - 1))
                        {
                                    for (int j = 0; j < (n); j++)
                                    {
                                                if ((j == 0) || (j == n - 1))
                                                {
                                                            cout << "* ";
                                                }
                                                else
                                                {
                                                            cout << "  ";
                                                }
                                    }
                        }
                        else if (i == 2 * n - 1)
                        {
                                    for (int j = 0; j < n; j++)
                                    {
                                                if (j == (n - 1) || j == 0)
                                                {
                                                            cout << "  ";
                                                }
                                                else
                                                {
                                                            cout << "* ";
                                                }
                                    }
                        }
                        cout << endl;
            }
}

void O(int n)
{
            for (int i = 0; i < n; i++)
            {
                        if (i == 0 || i == (n - 1))
                        {
                                    for (int j = 0; j < n - 2; j++)
                                    {
                                                if (j <= 5 && j >= 2)
                                                {
                                                            cout << "* ";
                                                }
                                                else
                                                            cout << "  ";
                                    }
                                    cout << "  ";
                        }
                        else
                        {
                                    for (int j = 0; j < n; j++)
                                    {

                                                if (i > 1 && i < 6)
                                                {

                                                            if (j == 0 || j == (n - 1))
                                                            {

                                                                        cout << "* ";
                                                            }
                                                            else
                                                                        cout << "  ";
                                                }
                                                else
                                                            cout << " ";
                                    }
                        }

                        cout << endl;
            }
}

void L(int n)
{
            for (int i = 0; i < n; i++)
            {
                        if (i < (n - 1))
                        {
                                    cout << "*";
                        }
                        else
                        {
                                    for (int j = 0; j <= n / 2 + 1; j++)
                                    {
                                                cout << "* ";
                                    }
                        }
                        cout << endl;
            }
}
void BOLL(int n){
            
}

int main()
{
#ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
#endif
            int n;
            cin >> n;
             
}