#include <iostream>
#include <vector>
#include <string>

int main() {

  std::string input = "turpentine and turtles";
  std::vector<char> vowels;
  std::vector<char> result;
  
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
  
  for (int i = 0; i < input.size(); i++)
  {
    for (int x = 0; x < vowels.size(); x++)
      if (input[i] == vowels[x])
      	result.push_back(vowels[x]);
  }
  
  for (int y = 0; y < result.size(); y++)
  	std::cout << result[y];
  // Whale, whale, whale.
  // What have we got here?

}