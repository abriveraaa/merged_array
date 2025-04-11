# Merge Arrays

---
- [Program Name: Merge Unique Arrays](#program-name-merge-unique-arrays)
  - [User Documentation](#user-documentation)
    - [Overview](#overview)
    - [How to Use the Program](#how-to-use-the-program)
      - [Example Usage:](#example-usage)
        - [Input:](#input)
        - [Output:](#output)
      - [Notes:](#notes)
  - [Program Documentation](#program-documentation)
    - [Program Title: Merging Two Arrays](#program-title-merging-two-arrays)
      - [Problem:](#problem)
      - [Programming Language:](#programming-language)
      - [Author:](#author)
      - [Version:](#version)
      - [Program Flowchart](#program-flowchart)
      - [Program Structure:](#program-structure)
      - [Code Breakdown:](#code-breakdown)
        - [1. Required Headers:](#1-required-headers)
        - [2. User Input for Arrays N and B:](#2-user-input-for-arrays-n-and-b)
        - [3. Copying Elements of N to MERGE\_ARRAY:](#3-copying-elements-of-n-to-merge_array)
        - [4. Adding Unique Elements from B:](#4-adding-unique-elements-from-b)
        - [5. Displaying the Arrays:](#5-displaying-the-arrays)
      - [Example Run:](#example-run)
        - [Input:](#input-1)
        - [Output:](#output-1)
      - [Enhancements and Notes:](#enhancements-and-notes)

---

## User Documentation

### Overview

This program allows the user to input two sets of five integers each, stores them in arrays N and B, merges them while ensuring uniqueness, and displays the results.

### How to Use the Program

1. **Run the Program:** Execute the compiled program named **Merged_Array**.

2. **Input Values:**

   - The program will prompt you to enter 5 integers for Array N.

   - Then, you will enter another 5 integers for Array B.

3. **Processing:**

   - The program merges Array N and Array B, ensuring no duplicates.

4. **Output Display:**

   - Array N and Array B will be displayed.

   - The merged array (MERGE_ARRAY) will also be displayed.

#### Example Usage:

##### Input:

```
Enter 5 integers for array N: 1 2 3 4 5
Enter 5 integers for array B: 3 4 5 6 7
```

##### Output:

```
Array N:  1 2 3 4 5
Array B: 3 4 5 6 7
Merged Unique Array: 1 2 3 4 5 6 7
```

#### Notes:

1. Only integer values should be entered.

2. Duplicate values will be removed automatically in the merged array.

3. No sorting is applied to the final merged array.

---

## Program Documentation

### Program Title: Merging Two Arrays

#### Problem:

Write a program that will input 5 integers in an array N and another 5 integers in an array B. After which merge the two arrays in one array called MERGE_ARRAY such that all the values are unique (that is, no integer should appear twice). Display the three arrays.

#### Programming Language:

```cpp
C++ Programming
```

#### Author:

```
Ariel Rivera
```

#### Version:

```
================================================================
Author             Date            Description          Version
----------------------------------------------------------------
Ariel Rivera       2025-03-23      Initial Build        1.0.0
================================================================
```

---

#### Program Flowchart

Working...

---

#### Program Structure:

1. **Declaration:**
   **Constant Declaration:**

   - `MAX_SIZE = 100`: Defines the maximum array size to ensure sufficient storage space for merging.

   **Variable Declaration:**

   - `N[5]`: Stores the first set of five integers.
   - `B[5]`: Stores the second set of five integers.
   - `MERGE_ARRAY[MAX_SIZE]`: Stores the merged array.
   - `mergedSize`: Keeps track of the number of elements in the merged array.

1. **User Input:**

   - The user is prompted to enter five integers for array `N`.
   - The user is then prompted to enter five integers for array `B`.
   - **No Error Validation added**. User must refrain from entering out-of-bound data from the array. **_Can be enhancement feature_**

1. **Process:**

   - All elements of `N` are copied into `MERGE_ARRAY`.
   - Each element of `B` is checked to ensure it does not already exist in `MERGE_ARRAY` before adding it.

1. **Output:**

   - The program prints the original `N` and `B` arrays.
   - The program then prints the `MERGE_ARRAY` containing only unique elements from both `N` and `B`.

1. **Error Handling:**
   - Prevents array overflows by checking `mergedSize` does not exceed `MAX_SIZE`.

---

#### Code Breakdown:

##### 1. Required Headers:

```cpp
#include <iostream>

using namespace std;
```

- using `iostream` library to handle input/output program.
- using `namespace std` to allow the developer to use standard library features (like `cout`, `cin`, and `endl`) without having to prefix them with `std::`.

##### 2. User Input for Arrays N and B:

```cpp
// asking the user to input 5 elements of array n
cout << "Enter 5 elements of array N: ";
for (int i = 0; i < 5; i++) {
   cin >> N[i];
}

// asking the user to input 5 elements of array b
cout << "Enter 5 elements of array B: ";
for (int i = 0; i < 5; i++) {
   cin >> B[i];
}
```

- The program will ask the user to input `5` elements on both array.

##### 3. Copying Elements of N to MERGE_ARRAY:

```cpp
for (int i = 0; i < 5; i++) {
    MERGE_ARRAY[mergedSize++] = N[i];
}
```

- Assuming Elements of `N` are original data, which are directly copied to `MERGE_ARRAY`.

##### 4. Adding Unique Elements from B:

```cpp
for (int i = 0; i < 5; i++) {
    bool exists = false;
    for (int j = 0; j < mergedSize; j++) {
        if (B[i] == MERGE_ARRAY[j]) {
            exists = true;
            break;
        }
    }
    if (!exists) {
        if (mergedSize < MAX_SIZE) {
            MERGE_ARRAY[mergedSize++] = B[i];
        } else {
            cout << "Error: Merged array size exceeded maximum limit." << endl;
            break;
        }
    }
}
```

- Ensures that no duplicate elements are added.
- Checks for overflow of `MERGE_ARRAY` to prevent out-of-bounds errors.

##### 5. Displaying the Arrays:

```cpp
cout << "Array N: ";
for (int i = 0; i < 5; i++) {
    cout << N[i] << " ";
}
cout << endl;
```

- The original and merged arrays are displayed to the user.

---

#### Example Run:

##### Input:

```
Enter 5 elements of array N: 1 2 3 4 5
Enter 5 elements of array B: 3 4 5 6 7
```

##### Output:

```
Array N: 1 2 3 4 5
Array B: 3 4 5 6 7

Merged Unique Array: 1 2 3 4 5 6 7
```

---

#### Enhancements and Notes:

- The program ensures that `MERGE_ARRAY` does not contain duplicate values.
- **Future enhancements** could include sorting the merged array or allowing dynamic input sizes instead of fixed 5-element arrays.
- **Future enhancements** could include error handling when user input out-of-bound data in an array.
