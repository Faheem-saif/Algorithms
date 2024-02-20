#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[] ={45,56,34,34,53,49,38,35,450,454,4};
   bool flag=false;
   int index;
  for (int i = 0; i <=sizeof arr; i++)
  {
    if(arr[i]==n){
        flag=true;
        index=i;
        break;
    }
 
  

}
 if(flag=true){
    cout<<"Number Found at :"<<index<<endl;
  }
  else{
    cout<<"Value Not Found"<<endl;
  }
  }

