
# Stack using an Array

A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle. That is, the last element added to the stack will be the first one to be removed. A stack can be implemented using an array as the underlying data structure.

## How it works

A stack can be visualized as a container of elements. The elements are added and removed from the top of the stack. To implement a stack using an array, we can use the following operations:

1. **push()** - Adds an element to the top of the stack
2. **pop()** - Removes the element from the top of the stack
3. **peek()** - Returns the element at the top of the stack without removing it
4. **isEmpty()** - Returns true if the stack is empty, else false

```

In this implementation, we use an array named stack to store the elements of the stack. We also use a variable top to keep track of the index of the top element. Initially, top is set to -1, which indicates that the stack is empty.

The push() function adds an element to the top of the stack. If the stack is full, it prints an error message "Stack Overflow".

The pop() function removes the element from the top of the stack and returns it. If the stack is empty, it prints an error message "Stack Underflow" and returns -1.

The peek() function returns the element at the top of the stack without removing it. If the stack is empty, it prints an error message "Stack is Empty" and returns -1.

The isEmpty() function returns true if the stack is empty, else false.

## Conclusion

Implementing a stack using an array is a simple and efficient way to store elements in a LIFO manner. The array-based implementation provides constant-time access to the top element and allows us to add or remove elements in O(1) time. However, it has a fixed size and can overflow if the number of elements exceeds the size of the array.
