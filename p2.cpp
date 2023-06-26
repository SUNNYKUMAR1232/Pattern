#include <bits/stdc++.h>
using namespace std;

void Pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    // Time Complexity: O(n^2)}
}

void Pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i <= n + 1 - j; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
}
void Pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    // Time Complexity: O(n^2)
}
void Pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
// Pyramid Pattern
// Method 1
void Pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int m = 2 * n - 1;
        for (int j = 0; j <= m; j++)
        {
            if (j <= ((m - 1) / 2 - i) && (j >= ((m - 1) / 2 + i)))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
//`Method 2
void Pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Print Spaces before stars
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print Stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // Print Spaces after stars
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void Pattern10(int n)
{
     for (int i = 0; i < n; i++)
    {
        // Print Spaces before stars
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Print Stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // Print Spaces after stars
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            if ((j < i) || (j >= n * 2 - i - 1))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

// +++++++++++++++++++++++++++++++
void Pattern11(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<i;j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-2*i-1;j++){
            cout<<"*";
        }
        for(int j=0; j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}

void Pattern12(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<i;j++){
            cout<<" ";
        }
        for(int j=0; j<2*n-2*i-1;j++){
            cout<<"*";
        }
        for(int j=0; j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

// +++++++++++++++++++++++++++++++
void Pattern13(int n){
    for(int i=0; i<2*n-1;i++){
        if(i<n){
            for (int j = 0; j <=i; j++){
                cout<<"* ";
            }
            for ( int j=0; j<n-i-1; j++){
                cout<<" ";
            } 
        }else if(i>=n){
            for ( int j=0; j<2*n-i-1; j++){
                cout<<"* ";
            } 
            for (int j = 0; j <i-n; j++){
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}

// +++++++++++++++++++++++++++++++
void Pattern15(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0&&(j<=i)){
                if(j%2==0){
                    cout<<"1 ";
                }else if(j%2!=0){
                    cout<<"0 ";
                }
               
            }else if(i%2!=0&&(j<=i)){
                if(j%2==0){
                    cout<<"0 ";
                }else if(j%2!=0){
                    cout<<"1 ";
                }
            }
        }
        cout<<endl;
    }
};
void Pattern16(int n){
    int start=1;
    for(int i; i<n; i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0; j<=i; j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
}
}
void Pattern17(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            int m=i-j+1;
            cout<<m<<" ";
        }
        /* for(int j=i; j>=1; j--){
            cout<<j<<" ";
        } */
        cout<<endl;
    }
}
void Pattern18(int n){
    int start=1;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<start<<" ";
            start=1+start;
        }
        cout<<endl;
    }
}
void Pattern19(int n){
    string arr[26] ={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
}
void Pattern20(int n){
    string arr[26] ={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
        for(int i=n; i>=1; i--){
            for(int j=0; j<i; j++){
                cout<<arr[j];
            }
            cout<<endl;
        }
}
void Pattern21(int n){
    string arr[26] ={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<arr[i];
            }
            cout<<endl;
        }
}
void Pattern22(int n){
    string arr[26] ={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if(j<=n){
             cout <<arr[j];    
            }else if(j>n) {
              cout <<arr[j-n-1];   
            }
           
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void Pattern23(int n){
    string arr[26] ={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                cout<<arr[n-j-1]<<" ";
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
    for(n; n<=12; n++){
        Pattern22(n);
        cout<<endl;
    }
    
    return 0;
}