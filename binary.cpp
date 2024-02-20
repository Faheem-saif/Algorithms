#include<iostream>
using namespace std;


int addition(int a,int b){

    cout<<"The Add of giiven will be"<<a+b<<endl;


}
  void Table<T>(int a[]){
  for(int value=0;value<=sizeof a ;value++){

     for(int i=1 ;i<=10;i++){

         cout<<a[value]<<" * "<<i<<"="<<a[value]*i<<endl;
     }
  }
}

int main(){

  int  a[]={3,4,5,6,7,8,9,7,4};

Table<int>(a);



}
