#include <iostream>
#include <algorithm>
#include <string>

bool isPalindrome(const std::string& str)
{
   std::string temp(str);
   std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
   return temp == std::string(temp.rbegin(), temp.rend());
}

int main()
{
  std::string word;
  std::cout << "Enter the String \n";
  std::getline(std::cin, word);

  if(isPalindrome(word))
    std::cout << "The string " << word << " is palindrome \n";
  else
  std::cout << "The string " << word << " is not palindrome \n";
  return 0;
}
