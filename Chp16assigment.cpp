#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept> // For std::invalid_argument
using namespace std;

// Converts a hex number as a string to a decimal
int hex2Dec(const string& hex);

// Converts a hex character to a decimal value
int hexCharToDecimal(char ch);

int main()
{
    // Prompt the user to enter a hex number as a string
    cout << "Enter a hex number: ";
    string hex;
    cin >> hex;

    try {
        cout << "The decimal value for hex number " << hex << " is: " << hex2Dec(hex) << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

int hex2Dec(const string& hex)
{
    int decimalValue = 0;

    for (unsigned i = 0; i < hex.size(); i++) {
        char ch = hex[i];
        if (!isxdigit(ch)) { // Check if the character is a valid hex digit
            throw invalid_argument("Invalid hex string: contains non-hexadecimal characters.");
        }
        decimalValue = decimalValue * 16 + hexCharToDecimal(ch);
    }

    return decimalValue;
}

int hexCharToDecimal(char ch)
{
    ch = toupper(ch); // Convert to uppercase
    if (ch >= 'A' && ch <= 'F')
        return 10 + (ch - 'A');
    else
        return ch - '0'; // Convert to decimal value
}
