#include <iostream>
using namespace std;

// hollow square
int main(){
  int rc;
  cin>>rc;
  int cc;
  cin>>cc;

  for(int r=0; r<rc; r++){
    if(r==0 || r==rc-1){
      for(int c=0; c<cc; c++){
        cout<<"* ";
      }
    }
    else{
      cout<<"* ";
      for(int i=0; i<cc-2; i++){
        cout<<"  ";
      }
      cout<<"* ";
    }
    cout<<endl;
    
  }
}