#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    // Maximun number to have in an array.
    int num1 = 6;
    int num2 = 6;
    
    //Multidimesional Array of n * n
    int array[num1][num2];
    
    // User input to fill in the array.
    for (int i = 0; i < num1; i++)
    {
        for (int j = 0; j < num2; j++)
        {
            cin  >> array[i][j];
        }
    }
    
    // Assigning the first value of the sum of hourglass in the array to the variable max.
    int max = array[0][0] + array[0][1] + array[0][2] + array[1][1] + array[2][0] + array[2][1] + array[2][2];

    for (int i = 0; i < num1 - 2; i++)
    {
        for (int j = 0; j < num2 - 2; j++)
        {
            // To determine the maximum number of the sum of the hourglass.
            if (array[i][j] + array[i][j + 1] + array[i][j + 2] + array[i + 1][j + 1] + array[i + 2][j] + array[i + 2][j + 1] + array[i + 2][j + 2] > max)
            {
                max = array[i][j] + array[i][j + 1] + array[i][j + 2] + array[i + 1][j + 1] + array[i + 2][j] + array[i + 2][j + 1] + array[i + 2][j + 2];
            }
        }
    }
    
    // Display the maximum number in the hourglass array.
    cout << "Maximum number = " << max << endl;
    
    return 0;
} // End of main
