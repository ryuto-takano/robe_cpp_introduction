#include <iostream>
using namespace std;

void ShowCode(char ch){
  cout << "「 " << ch << " 」" << "の文字コードは " << (int)(unsigned char)ch << "です" << endl; 
}

int main(){
  char inputs;
  ShowCode('A');
  ShowCode('a');
  cout << "input :" << flush;
  cin >> inputs;
  ShowCode(inputs);
}
