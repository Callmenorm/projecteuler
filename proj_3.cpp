#include <iostream>

using namespace std;

const long big = 600851475143;

bool isPrime(long prime){
  long factor = prime/2 - 1;
  cout << factor << "\n";
  if(prime % 2 == 0)
    return false;
  else{
    while(factor>1){
      if(prime % factor == 0)
        return false;
      factor -= 2;
    }
    return true;
  }
}

int main(){
  long maxPrime = 3;
//  isPrime unit tests
  cout << "is 3 prime? " << isPrime(3) << "\n";
  cout << "is 4 prime? " << isPrime(4) << "\n";
  cout << "is 181 prime? " << isPrime(181) <<"\n";
  cout << "is 11 prime? " << isPrime(11) << "\n";
  cout << "is 419 prime? " << isPrime(419) << "\n";
  cout << "is 423 prime? " << isPrime(423) << "\n";
/*  cout << "is 68718952447 prime? " << isPrime(68718952447) << "\n";
  cout << "is 200560490131 prime? " << isPrime(200560490131) << "\n";
  cout << "is 20056049013333 prime? " << isPrime(200560490133) << "\n";
*/

  cout << "is big a prime? " << isPrime(big) << "\n";
  long factor = big/2;
  --factor;


  return 0;
}
