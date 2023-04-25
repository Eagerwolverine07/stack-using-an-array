#include <stdio.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

// push an element onto the stack
void push(int element) {
  if (top == MAX_SIZE - 1) {
    printf("Error: stack is full\n");
    return;
  }
  top++;
  stack[top] = element;
}

// pop an element from the stack
int pop() {
  if (top == -1) {
    printf("Error: stack is empty\n");
    return -1;
  }
  int element = stack[top];
  top--;
  return element;
}

// print the elements of the stack
void print() {
  printf("Stack:");
  for (int i = top; i >= 0; i--) {
    printf(" %d", stack[i]);
  }
  printf("\n");
}

int main() {
  push(5);
  push(3);
  push(8);
  print();
  int element = pop();
  printf("Popped element: %d\n", element);
  print();
  push(2);
  push(9);
  push(1);
  print();
  return 0;
}
