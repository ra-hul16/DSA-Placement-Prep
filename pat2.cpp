// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
  for (int i=0;i<5;i++){
    for(int j=0;j<i+1;j++){
      cout<<"*";
    }
    cout<<endl;
    
  }
}
