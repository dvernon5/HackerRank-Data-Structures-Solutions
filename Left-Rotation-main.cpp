#include <iostream>

using namespace std;

int main(void)
{
    // User input a number to shift to the left
    int leftShift;
    cin  >> leftShift;
    
    // User input to enter a maximum size of an array
    int arraySize;
    cin  >> arraySize;
    
    // Array of arraySize
    int array[arraySize];
    
    // User input to fill in the array using numbers.
    for (int i = 0; i < arraySize; i++)
    {
        cin  >> array[i];
    }

    // leftShift the array leftShift times
    for (int i = 0; i < leftShift; i++)
    {
        int j, first;
        
        // Stores the first element of the array
        first = array[0];
        
        for (j = 0; j < arraySize - 1; j++)
        {
            array[j] = array[j + 1];
        }
        
        // First element of array will be added to the end
        array[j] = first;
    }
    
    cout << endl;

    // Display the shifted array
    for (int i = 0; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
    
    return 0;
}
