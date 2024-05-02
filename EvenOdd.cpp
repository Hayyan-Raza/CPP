// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void Even(int n){
    if(n % 2 == 0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}



int main(){
    int n;
    
    cout<<"Enter any Number to check wether its EVEN or ODD"<<endl;
    cin>>n;
    Even(n);
    
    return 0;
}
