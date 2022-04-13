#include<iostream>
using namespace std;
int main(){

int a,b;
char num;

cout << " WRITE THE VALUE OF YOUR FIRST NUMBER " << endl;
cin >> a;

cout << " WRITE THE VALUE OF YOUR SECOND NUMBER " << endl;
cin >> b;

cout << " WRITE THE OPERATION YOU WANT TO PERFORM " << endl;
cin >> num;

switch(num){

case '+' : 
  cout << " RESULT : " << (a+b) << endl;
  break;

case '-' :  
  cout << " RESULT : " << (a-b) << endl;
  break;
  
case '*' :  
  cout << " RESULT : " << (a*b) << endl;
  break;

case '/' :  
  cout << " RESULT : " << (a/b) << endl;
  break;

case '%' :
  cout << " RESULT : " << (a%b) << endl;
  break;

default :
cout << " ERROR " << endl;

}
    return 0;
}