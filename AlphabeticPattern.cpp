#include <iostream>
using namespace std;
void NumberPattern(int n){
    int a = 65;
    for(int i =1; i<=n; i++){
           for(int j = 1; j<=i; j++){
               cout<<char(a + j-1)<<" ";
               
           }
           
           cout<<endl;
    }
}

int main() {
    int n =10;
     
    cout<<"Enter Size Of Pattern"<<endl;
    cin>>n;
    cout<<"\n\n\n";
    NumberPattern(n);
    return 0;
}
