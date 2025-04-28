#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    int N[SIZE], B[SIZE], MERGE_ARRAY[SIZE * 2];
    int mergedSize = 0;

    // Input for array N
    cout << "Enter 5 elements of array N: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> N[i];
    }

    // Input for array B
    cout << "Enter 5 elements of array B: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> B[i];
    }

    // Copy unique elements of N into MERGE_ARRAY
    for (int i = 0; i < SIZE; i++)
    {
        bool exists = false;
        for (int j = 0; j < mergedSize; j++)
        {
            if (N[i] == MERGE_ARRAY[j])
            {
                exists = true;
                break;
            }
        }
        if (!exists)
        {
            MERGE_ARRAY[mergedSize++] = N[i];
        }
    }

    // Merge unique elements from B into MERGE_ARRAY
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

    // Display arrays
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
