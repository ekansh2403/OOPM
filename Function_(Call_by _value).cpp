#include <iostream>
using namespace std;
double Simple_interest(float a, float b, float c){
    double SI;
    SI=(a*b*c)/100;
    return SI;
}
int main(){
 //************CREATING A SIMPLE FUNCTION**************
  float p,r,t,Intereset;   //Here p= Principle amount
                      //  r=Rate of interest
                        //t=Time period
  cout<<"Enter Principle amount:";
  cin>>p;
  
  cout<<"Enter Rate of Interest:";
  cin>>r;
  
  cout<<"Enter Time Period:";
  cin>>t;
 Intereset= Simple_interest(p,r,t);
  cout<<"Your simple interest will be:"<<Intereset;
   
  return 0;
                        
  
}
 
   
   
   
 
