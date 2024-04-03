#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int a=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=0;
            break;
        }
    }
    if(a==0){
        cout<<n<<" is not a prime number";
    }
    else{
        cout<<n<<" is a prime number";
    }
    return 0;
}