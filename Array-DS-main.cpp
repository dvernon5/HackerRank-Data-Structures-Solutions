#include <iostream>

using namespace std;

int main(void)
{
    
    //User input for the maximum number in an array.
    int number;
    cin  >> number;
    
    // An Array of n size.
    int array[number];
    
    // User input numbers into the array.
    for (int i = 0; i < number; i++)
    {
        cin  >> array[i];
    }
    
    // Reversing an array.
    for (int i = 0; i < number / 2; i++)
    {
        int temp = array[i];
        array[i] = array[number - i - 1];
        array[number - i - 1] = temp;
    }
    
    
    
    // Display the result of a reverse array.
    for (int i = 0; i < number; i++)
    {
        cout << array[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
