#include <iostream>
using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (key == list[i])
            return i; // Found
    }
    return -1; // Not found
}
