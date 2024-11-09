# Array and Matrix Problem Solutions 

This repository contains solutions and implementations for various array and matrix problems, covering both 1D and 2D arrays. Each file represents a specific problem or operation with a brief description and relevant explanations. This collection is part of my learning journey, focusing on mastering arrays and matrices through problem-solving and efficient algorithms.

---

## 📋 Table of Contents

1. **1D Array Problems**
   - [**arrays**](#arrays)
   - [**subarray**](#subarray)
   - [**findDup**](#finddup)
   - [**buy&sell**](#buysell)
   - [**convert1dto2darray**](#convert1dto2darray)
   - [**rainwatertrap**](#rainwatertrap)
   - [**sorting**](#sorting)
   
2. **2D Array Problems**
   - [**2darrays**](#2darrays)
   - [**spiralmatrix**](#spiralmatrix)
   - [**diagonal**](#diagonal)
   - [**searchinsorted**](#searchinsorted)
   - [**rotateby90**](#rotateby90)
   - [**findfromrotatedarray**](#findfromrotatedarray)


---

### 1D Array Problems

#### **arrays**
This file contains fundamental operations and examples involving 1D arrays, including initialization, traversal, insertion, and deletion. It serves as a foundation for understanding basic array manipulations, preparing for more complex problems.

#### **subarray**
Focuses on subarray problems, such as:
- **Maximum Subarray Sum:** Using Kadane's Algorithm to find the maximum sum of a contiguous subarray.
- **Maximum Product Subarray:** Calculating the largest product of contiguous elements, handling both positive and negative numbers.

These problems are essential for understanding dynamic programming and sliding window techniques.

#### **findDup**
Implements efficient algorithms to find duplicates in an array, including:
- **Sorting-based approach:** Sort the array and check adjacent elements.


#### **buy&sell**
This file addresses the **Best Time to Buy and Sell Stock** problem. It uses an optimal approach to determine the maximum profit that can be achieved by buying and selling stock on different days. This involves keeping track of the minimum price and calculating the maximum profit in a single traversal.

#### **convert1dto2darray**
Contains methods to convert a 1D array into a 2D matrix, useful when restructuring data for matrix-based operations. Conversion techniques include:
- Simple reshaping by row and column count.
- Padding if the total elements don’t perfectly fit the 2D format.

#### **rainwatertrap**
Solves the **Trapping Rain Water** problem, which calculates the water trapped between elevations represented by an array. Techniques include:
- **Two-pointer approach:** For optimal O(n) time complexity by keeping track of maximum heights on both sides.


#### **sorting**
Includes sorting algorithms frequently used in array manipulation:
- **selection Sort, countting sort, Insertion Sort, and Bubble Sort:** Different algorithms with varying time complexities, suitable for different array sizes.
- **In-place sorting techniques:** Sorting without additional memory usage, relevant for large datasets.


---

### 2D Array Problems

#### **2darrays**
This file explores the basics of 2D arrays, covering topics such as:
- **Initialization and Traversal:** Understanding row and column structure for nested loops.
- **Row-wise and Column-wise Access:** Techniques to efficiently access specific parts of a matrix.

#### **spiralmatrix**
Solves the **Spiral Order Matrix Traversal** problem, where elements are accessed in a spiral (clockwise) order starting from the top-left corner. This problem is helpful for mastering matrix boundaries and loop controls.

#### **diagonal**
Implements diagonal traversal of a matrix, which is useful in image processing and data representation. The file includes:
- Traversing from top-left to bottom-right.
- Handling cases where the matrix is not square.

#### **searchinsorted**
Focuses on efficient search algorithms in a **2D sorted matrix**. Includes:
- **Binary Search-based Search:** When each row and column are sorted, you can apply binary search to find elements in logarithmic time.
  
#### **rotateby90**
Implements matrix rotation, where a 2D array is rotated by 90 degrees clockwise. This involves:
- **Transpose of the Matrix:** Interchanging rows and columns.
- **Reverse Columns:** Reversing elements of each row or column based on the direction of rotation.

#### **findfromrotatedarray**
Covers searching in a **rotated sorted array**. This is particularly useful for rotated arrays in 1D, employing a modified binary search approach that handles the pivoted structure of the array.

