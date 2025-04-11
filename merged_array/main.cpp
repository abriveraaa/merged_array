#include <iostream>

using namespace std;

// Function to get a valid integer input
int getValidInput()
{

    while (true) // looping on checking if the input is valid
    {
        int num;
        cin >> num;
        if (cin.fail())
        {
            cin.clear();            // Clear error flag
            cin.ignore(1000, '\n'); // Discard invalid input
            cout << "Invalid input! Please enter an integer: ";
        }
        else
        {
            return num;
        }
    }
}

int main()
{
    const int SIZE = 5;
    int N[SIZE], B[SIZE], MERGE_ARRAY[SIZE * 2];
    int mergedSize = 0;

    // Input validation for array N
    cout << "Enter 5 elements of array N: ";
    for (int i = 0; i < SIZE; i++)
    {
        N[i] = getValidInput();
    }

    // Input validation for array B
    cout << "Enter 5 elements of array B: ";
    for (int i = 0; i < SIZE; i++)
    {
        B[i] = getValidInput();
    }

    // Copy N to MERGE_ARRAY
    for (int i = 0; i < SIZE; i++)
    {
        MERGE_ARRAY[mergedSize++] = N[i];
    }

    // Merge unique elements from B
    for (int i = 0; i < SIZE; i++)
    {
        bool exists = false;
        for (int j = 0; j < mergedSize; j++)
        {
            if (B[i] == MERGE_ARRAY[j])
            {
                exists = true;
                break;
            }
        }
        if (!exists)
        {
            MERGE_ARRAY[mergedSize++] = B[i];
        }
    }

    // Display results
    cout << "\nArray N: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << N[i] << " ";
    }

    cout << "\nArray B: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << B[i] << " ";
    }

    cout << "\nMerged Unique Array: ";
    for (int i = 0; i < mergedSize; i++)
    {
        cout << MERGE_ARRAY[i] << " ";
    }

    cout << endl;
    return 0;
}

