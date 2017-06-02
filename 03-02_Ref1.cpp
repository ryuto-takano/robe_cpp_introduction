#include <iostream>
using namespace std;

void WesternToShouwa(int& x){ //typeの後ろの&は参照変数。実引数を操作できる
  if(1926 <= x && x <= 1989){
    x -= 1925;
  } else {
    x = 0;
  }
}

void Shouwa(){
  int year;

  cout << "西暦を入力 > " << flush;
  cin >> year;

  WesternToShouwa(year);
    if(year != 0){
      cout << "昭和 " << year << " 年" << endl;
    } else {
      cout << "not 昭和" << endl;
    }
} 


int main(){
  Shouwa();
  Shouwa();
}
