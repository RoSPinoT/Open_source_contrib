#include <iostream>
using namespace std;
int main(){
    char op;
    int number1,number2;
    cout<<" enter the first number: "<<endl;
    cin>>number1;
    cout<<" enter the oprator "<<endl;
    cin>>op;
    cout<<" enter the second number: "<<endl;
    cin>>number2;
    cout<<"result: "<<endl;
      switch(op)
      {
          case '+' :
          cout<<number1+number2;
          break;
          case '-' :
          cout<<number1-number2;
          break;
          case '*' :
          cout<<number1*number2;
          break;
          case '/' :
          cout<<number1/number2;
          break;

          default:
            cout<<"select oprator form following + / - * ";
            break;
      }

















return 0;}
