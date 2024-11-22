Push Swap Algorithm
Overview
This project implements an algorithm to sort a set of random numbers (positive and negative) without duplicates using a series of stack-based operations. The program receives input either as a set of command-line arguments or as a string containing numbers separated by spaces. After parsing the input, the algorithm sorts the numbers in ascending order and outputs the sequence of operations required to achieve the sorted order.

The operations supported for sorting are:

Swap (swap two elements on the stack)
Rotate (rotate the stack upwards)
Reverse Rotate (rotate the stack downwards)
Push (push an element from one stack to another)
The program is designed to minimize the number of operations required for sorting the numbers, making it both efficient and performant. The goal is to achieve the sorting with the least number of operations, thereby optimizing the algorithm's efficiency.

Features
Input Handling: The program can handle two types of inputs:

Command-line arguments: A list of numbers provided as arguments when running the program.
String input: A string containing numbers separated by spaces, passed as a single argument.
Sorting Algorithm: The program sorts the numbers using a combination of stack operations:

Swap: Swap the positions of two elements.
Rotate: Move the first element to the end of the stack.
Reverse Rotate: Move the last element to the front of the stack.
Push: Move an element from one stack to another.
Efficiency: The program optimizes the sorting process by minimizing the number of operations required:

For 3 numbers, it uses at most 3 operations.
For 5 numbers, it uses at most 12 operations.
For 100 numbers, it uses fewer than 1500 operations.
For 500 numbers, it uses fewer than 11,500 operations.
Instructions
Clone the repository:

bash
Copy code
git clone (https://github.com/Oshintha/Push_swap.git)
Compile the program: To compile the program, navigate to the project directory and run the following command:

bash
Copy code
make
Run the program: The program can be executed in two ways:

Using command-line arguments:
bash
Copy code
./push_swap 4 10 1 3 2
Using a string of numbers:
bash
Copy code
ARG="4 10 1 3 2"; ./push_swap $ARG
Test with the checker: To test your program's output with the provided checker, run the following:

bash
Copy code
ARG="4 10 1 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
If you're on a Mac, you might need to give the checker executable permission using:

bash
Copy code
chmod +x checker_Mac
Check the number of operations: To see how many operations were used to sort a set of numbers, you can run:

bash
Copy code
ARG="4 10 1 3 2"; ./push_swap $ARG | wc -l
Algorithm Explanation
The sorting algorithm is implemented using stack operations, specifically designed to minimize the number of operations required to sort a given set of numbers. The basic strategy used in the algorithm is a variant of the Selection Sort or Insertion Sort algorithms, where we use the two stacks (a and b) to perform the sorting operations in a way that reduces the total number of operations.

Initial Sorting: Initially, elements are pushed into stack a and sorted incrementally.
Push and Pop: The smallest elements are pushed onto stack b and the larger elements are pushed back to a.
Final Ordering: After sorting the elements on stack b, they are pushed back onto stack a in the correct order.
The program uses a combination of:

Swap operations to reorder elements in the stack.
Rotate operations to move elements to the correct positions in the stack.
Reverse Rotate operations to adjust the positioning of elements.
Push operations to move elements between stacks.
Time and Space Complexity
Time Complexity: The algorithm is designed to have a time complexity of O(n²) in the worst case for small inputs, but optimizations are in place for larger inputs, especially for up to 500 elements, where it operates efficiently under O(n log n) for many cases. The goal is to minimize the number of operations required for larger inputs.

Space Complexity: The program uses two stacks, so the space complexity is O(n), where n is the number of elements being sorted.

Evaluation Criteria
The evaluation of the algorithm will be based on the number of operations used to sort the input:

For 3 numbers, the number of operations should be less than or equal to 3.
For 5 numbers, the number of operations should be less than or equal to 12.
For 100 numbers, the number of operations should be less than 1500.
For 500 numbers, the number of operations should be less than 11,500.
The fewer the operations, the higher the evaluation score.

Contributors
Oshintha Sandaruwan
