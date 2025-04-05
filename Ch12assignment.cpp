#include <iostream>
#include <algorithm> // for std::max
 #include <string>

using namespace std;

// Function template to find the maximum element in an array
template <typename T>
T findMax(const T arr[], int size) {
    if (size <= 0) {
        
        return T(); 
    }

    T maxElement = arr[0]; 
    for (int i = 1; i < size; ++i) {
        maxElement = std::max(maxElement, arr[i]);
    }
    return maxElement;
}

int main() {
    int intArray[] = {1, 23, 2, 17, 3};
    int intMax = findMax(intArray, 5);
    std::cout << "Max int: " << intMax << std::endl;

    double doubleArray[] = {2.5, 1.1, 4.7, 3.9};
    double doubleMax = findMax(doubleArray, 4);
    cout << "Max double: " << doubleMax << std::endl;

    std::string stringArray[] = {"apple", "banana", "bookbag"};
    std::string stringMax = findMax(stringArray, 3);
    std::cout << "Max string: " << stringMax << std::endl;



    return 0;
}