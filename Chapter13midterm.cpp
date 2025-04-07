#include <iostream>
#include <fstream>
#include <string>

int main() {
  std::string filename;
  std::cout << "Enter the name of file: ";
  std::getline(std::cin, filename);

  std::ifstream file(filename);
  if (!file.is_open()) {
    std::cerr << "Error opening file: " << filename << std::endl;
    return 1;
  }

  int char_count = 0;
  char ch;
  while (file.get(ch)) {
    char_count++;
  }

  std::cout << "Number of characters in the file: " << char_count << std::endl;

  file.close();
  return 0;
}