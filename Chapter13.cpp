#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string filename = "numbers.txt";
    ifstream inputFile(filename);
    
    if (!inputFile) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }
    
    vector<int> numbers;
    int num;
    
    // Read integers from file
    while (inputFile >> num) {
        numbers.push_back(num);
    }
    inputFile.close();
    
    // Sort the integers
    sort(numbers.begin(), numbers.end());
    
    // Write sorted numbers back to the file
    ofstream outputFile(filename);
    if (!outputFile) {
        cerr << "Error: Unable to open file for writing." << endl;
        return 1;
    }
    
    for (const int& n : numbers) {
        outputFile << n << " ";
    }
    outputFile.close();
    
    cout << "Numbers have been sorted and written back to the file." << endl;
    return 0;
}
