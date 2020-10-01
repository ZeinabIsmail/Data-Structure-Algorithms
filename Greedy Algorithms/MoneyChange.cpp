#include <iostream>

int get_change(int m) {
  int num = 0;
  while (m>0){
	  while(m>=10){
		  num++;
		  m = m-10;
	  }
     while(m>=5){
	 num++;
	 m = m-5;
	 }
	if(m!=0){ num++;
     m--;}
}

  return num;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
