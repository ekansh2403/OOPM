#include <iostream>
using namespace std;
int main(){
  char operators;
  cout<<"Enter the operator(+,-,*,/,%):"<<endl;
  cin>>operators;

  double num1,num2;
  cout<<"Enter two numbers:";
  cin>>num1>>num2;
  
 switch(operators){
   case '+' : 
   cout<<"The sum of your numbers is:"<<(num1+num2);
   break;
   case '-':
   cout<<"The substraction of your numbers is:"<<(num1-num2);
   break;
   case '*':
   cout<<"The multipication of your numbers is:"<<(num1*num2);
   break;
   case '/':
   cout<<"The division of your numbers is:"<<(num1/num2);
   break;
  
   }
   
   
   
   return 0;
   
 
}
