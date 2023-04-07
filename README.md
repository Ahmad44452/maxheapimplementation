**<h1 align="center">Max Heap Implementation in C++</h1>**

## **How to Build**

<p>To build this code, you will need a C++ compiler installed on your system. You can use any C++ compiler that supports C++11 or higher. Once you have a compiler installed, follow these steps:</p>

1. Clone the repository or download the source code.
2. Navigate to the directory where the source code is located.
3. Run the command `g++ -o maxHeap maxHeap.cpp` to compile the code.

## **How to Run**

<p>After you have built the code, you can use the following command to execute main funciton of the program:</p>

`./maxHeap`

## **What Does the Code Do**

<p>This code implements a max heap data structure in C++. A max heap is a binary tree where the value of each node is greater than or equal to the values of its children nodes. The MaxHeap class has three main methods:</p>

- **insert():** Adds a new value to the heap and maintains the heap property by swapping the new value with its parent if necessary.
- **extractMax():** Removes the maximum value from the heap, which is always the root node, and then restores the heap property by calling the heapify() method on the root node.
- **heapify():** takes an index as an argument and recursively moves down the tree, swapping the current node with its largest child node if necessary.

<p>The main() function creates a new instance of the MaxHeap class, inserts ten values into the heap, and then extracts all the values from the heap and prints them to the console.</p>

## **Code Structure**

The code consists of a single C++ file called main.cpp. The file contains a MaxHeap class with three methods: `insert()`, `extractMax()`, and `heapify()`.

The `main()` function creates an instance of the MaxHeap class, inserts ten values into the heap, and then extracts all the values from the heap and prints them to the console.
