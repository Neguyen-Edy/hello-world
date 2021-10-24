# hello-world

#include <iostream>
using namespace std;
  
int main() {
  
  string output = "";
  
  for (int i = 0; i < 101; ++i) {
      if (i % 3 == 0 && i % 5 == 0) {
         output += "FizzBuzz";
      }
      if (i % 3 == 0) {
        output += "Fizz";
      }
      if (i % 5 == 0) {
        output += "Buzz";
      }
  }
  
return 0;
}
                       
