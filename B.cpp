#include<bits/stdc++.h>
using namespace std;

void B(int n){
    
    for(int i=0; i<2*n; i++){
    if(i==0){
        for(int j=0; j<n; j++){
         if(j==(n-1)||j==0){
            cout<<"  ";
        } else{
          cout<<"* ";
        }
        }
    }else if(i<n){
         for(int j=0; j<n; j++){
            if((j==0) || (j==n-1)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
         }
    }else if(i==n){
         for(int j=0; j<n; j++){
         if(j==(n-1)){
            cout<<"  ";
        } else{
          cout<<"* ";
        }
        }
    }else if(i>n && i!=(2*n-1)){
         for(int j=0; j<(n); j++){
            if((j==0) || (j==n-1)){
                cout<<"* ";
            }else {
                cout<<"  ";
            }  
    }
    }else if(i==2*n-1){
          for(int j=0; j<n; j++){
         if(j==(n-1)||j==0){
            cout<<"  ";
        } else{
          cout<<"* ";
        }
        }
    }
    cout<<endl;
    }
}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int n;
cin>>n;
B(n);

}