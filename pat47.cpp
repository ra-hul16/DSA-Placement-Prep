#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    //Growing Phase
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a;
            a++;
            if(j<i){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    //Shrinking Phase
    int start=a-n;   //here now a=11 and to repeat the 7 8 9 10 row, we use 11-4=7
    for(int i=0;i<n;i++){
        int k= start;
        for(int j=0;j<=n-i-1;j++){
            cout<<k;
            k++;
            if(j<n-i-1){
                cout<<"*";
            }
        }
        start-=n-i-1;
        cout<<endl;
    }
} 