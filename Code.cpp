#include <iostream>
using namespace std;

 
int
main () 
{
  
int number, originalNumber, remainder, result = 0;
  
 
cout << "Enter a three digit integer but less than 500 : ";
  
cin >> number;
  
originalNumber = number;
  
 
while (originalNumber != 0)
    
    {
      
remainder = originalNumber % 10;
      
result += remainder * remainder * remainder;
      
originalNumber /= 10;
    
  }
  
 
if (result == number)
    
cout << number << "\n is an Armstrong number.";
  
  else
    
cout << number << "\n is not an Armstrong number.";
  
return 0;

}


