/**
Print the pattern
P _ _ _ _ _ _M
_ R _ _ _ A _ 
_ _ O _ R _ _
_ _ _ G _ _ _
_ _ O _ R _ _
_ R _ _ _ A _
P _ _ _ _ _ M
**/

#include<iostream>
#include<string>
using namespace std;

int main () {
  string my_string;
  int len;
  cout<<"Enter the string";
  getline(cin, my_string, '\n');
  len = my_string.length();
  if(len%2 == 0 ){
    for(int i = 0; i < len; i++) {

        for(int j = 0; j < len; j++) {

            if( i == j || j == len-i){
              cout<<my_string[j];
            } else {
              cout<<"_";
            }
        }
       cout<<endl;
    }

  }
return 0;
}
