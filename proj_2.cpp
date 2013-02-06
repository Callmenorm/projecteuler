#include<iostream>
#include<vector>
using namespace std;


int main(){
  int sum = 0, prev = 2;
  const int upper = 4000000;
  //vector<int> evens;

  int temp;
  prev = 1;
  for(int i = 2; i <= upper; ) {
    if(i % 2 == 0 && i < upper)
      sum += i;
     // evens.push_back(i);
    temp = i + prev;
    prev = i;
    i = temp;
    cout << i  << endl;
  }
  
  cout << sum << endl;
  return 0;
}
