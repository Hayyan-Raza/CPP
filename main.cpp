/*
void HollowSquare(){
    int row, column;
  cin >> row >> column;
  for (int i=1; i<=row; i++)
  {
    for(int j=1; j<=column; j++)
    {
       if (i==1 || i==row || j==1 || j==column)
          cout << " * " ;
       else 
         cout << "   " ;
    } 
    cout << endl;  
  }   
}


void Pattern(int n){
    for(int i =1; i<=n; i++){
           for(int j = 1; j<=n-i; j++){
               cout<<" ";
           }
           for(int j=1; j<=2*i-1;j++){
               cout<<"*";
           }
           cout<<endl;
    }
}

void NumberPattern(int n){
    for(int i =1; i<=n; i++){
           for(int j = 1; j<=n-i; j++){
               cout<<" ";
           }
           for(int j=1; j<=2*i-1;j++){
               cout<<j;
           }
           cout<<endl;
    }
}

void AlphabetPattern(int n){
    int a = 65;
    for(int i =1; i<=n; i++){
           for(int j = 1; j<=i; j++){
               cout<<char(a + j-1)<<" ";
               
           }
           
           cout<<endl;
    }
}
*/
