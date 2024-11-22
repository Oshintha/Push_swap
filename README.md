# Push Swap Algorithm

## Overview
This project implements an algorithm to sort a set of random numbers (positive and negative) without duplicates using a series of stack-based operations. The program receives input either as a set of command-line arguments or as a string containing numbers separated by spaces. After parsing the input, the algorithm sorts the numbers in ascending order and outputs the sequence of operations required to achieve the sorted order.

The operations supported for sorting are:
- **Swap**: Swap two elements on the stack.
- **Rotate**: Rotate the stack upwards.
- **Reverse Rotate**: Rotate the stack downwards.
- **Push**: Push an element from one stack to another.

The program is designed to minimize the number of operations required for sorting the numbers, making it both efficient and performant. The goal is to achieve the sorting with the least number of operations, thereby optimizing the algorithm's efficiency.

---

## Features

### Input Handling
The program can handle two types of inputs:
1. **Command-line arguments**: A list of numbers provided as arguments when running the program.
2. **String input**: A string containing numbers separated by spaces, passed as a single argument.

### Sorting Algorithm
The program sorts the numbers using a combination of stack operations:
- **Swap**: Swap the positions of two elements.
- **Rotate**: Move the first element to the end of the stack.
- **Reverse Rotate**: Move the last element to the front of the stack.
- **Push**: Move an element from one stack to another.

### Efficiency
The program optimizes the sorting process by minimizing the number of operations required:
- **3 numbers**: At most 3 operations.
- **5 numbers**: At most 12 operations.
- **100 numbers**: Fewer than 1500 operations.
- **500 numbers**: Fewer than 11,500 operations.

---

## Instructions

### Clone the repository:
```bash
git clone https://github.com/Oshintha/Push_swap.git
````
Compile the program:
To compile the program, navigate to the project directory and run the following command:

bash
Copy code
make
Run the program:
The program can be executed in two ways:

Using command-line arguments:
bash
Copy code
./push_swap 4 10 1 3 2
Using a string of numbers:
bash
Copy code
ARG="4 10 1 3 2"; ./push_swap $ARG
Test with the checker:
To test your program's output with the provided checker, run the following:

bash
Copy code
ARG="4 10 1 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
If you're on a Mac, you might need to give the checker executable permission using:

bash
Copy code
chmod +x checker_Mac
Check the number of operations:
To see how many operations were used to sort a set of numbers, you can run:

bash
Copy code
ARG="4 10 1 3 2"; ./push_swap $ARG | wc -l

Contributors
Oshintha Sandaruwan
