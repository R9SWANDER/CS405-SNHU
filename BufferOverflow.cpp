// BufferOverflow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>

int main()
{
  std::cout << "Buffer Overflow Example" << std::endl;

  // only variable type was changed and if branch added
  // Reece Neuenschwander

  const std::string account_number = "CharlieBrown42";
  std::string user_input; // Storage variable changed to string data type to prevent overflow
  std::cout << "Enter a value: ";
  std::cin >> user_input;

  // If branch added to enable size enforcement functionality
  if (user_input.size() > 20) {
	  std::cout << "Error: Input Greater than 20 Characters - Input Shortened to 20 Characters" << std::endl;
	  user_input = user_input.substr(0, 20);
  }

  std::cout << "You entered: " << user_input << std::endl;
  std::cout << "Account Number = " << account_number << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
