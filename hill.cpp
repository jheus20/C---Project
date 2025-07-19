// Calculator!
#include <iostream>
using namespace std;

int main() {

  double n1, n2, sum;
  char nugge;

  cout << "Enter first number: ";
  cin >> n1;
 
  cout << "Enter second number: ";
  cin >> n2;

  cout << "Please choose an operation (+, -, *, /): ";
  cin >> nugge;

  switch (nugge) {
    case '+':
      sum = n1 + n2;
      break;

      case '-':
      sum = n1 - n2;
      break;

      case '*':
      sum = n1 * n2;
      break;

      case '/':
      sum = n1 / n2;
      break;

      default:
      cout << "Kinginamo walang ganyan dito!!" << endl;

      return 0;
  



  } cout << "The result is: " << sum << endl;



  return 0; 

   
}
