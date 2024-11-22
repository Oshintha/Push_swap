<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Push Swap Algorithm</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 20px;
            background-color: #f4f4f4;
            color: #333;
        }
        h1, h2 {
            color: #2c3e50;
        }
        h3 {
            color: #2980b9;
        }
        p {
            font-size: 16px;
        }
        code {
            background-color: #ecf0f1;
            padding: 5px;
            border-radius: 5px;
            font-size: 14px;
        }
        ul {
            margin-left: 20px;
        }
        .note {
            background-color: #f39c12;
            padding: 10px;
            border-radius: 5px;
            color: white;
        }
        pre {
            background-color: #34495e;
            color: white;
            padding: 10px;
            border-radius: 5px;
            overflow-x: auto;
        }
    </style>
</head>
<body>

<h1>Push Swap Algorithm</h1>

<h2>Overview</h2>
<p>This project implements an algorithm to sort a set of random numbers (positive and negative) without duplicates using a series of stack-based operations. The program receives input either as a set of command-line arguments or as a string containing numbers separated by spaces. After parsing the input, the algorithm sorts the numbers in ascending order and outputs the sequence of operations required to achieve the sorted order.</p>

<h3>The operations supported for sorting are:</h3>
<ul>
    <li><strong>Swap</strong>: Swap two elements on the stack.</li>
    <li><strong>Rotate</strong>: Rotate the stack upwards.</li>
    <li><strong>Reverse Rotate</strong>: Rotate the stack downwards.</li>
    <li><strong>Push</strong>: Push an element from one stack to another.</li>
</ul>

<p>The program is designed to minimize the number of operations required for sorting the numbers, making it both efficient and performant. The goal is to achieve the sorting with the least number of operations, thereby optimizing the algorithm's efficiency.</p>

<h2>Features</h2>
<h3>Input Handling</h3>
<p>The program can handle two types of inputs:</p>
<ul>
    <li><strong>Command-line arguments</strong>: A list of numbers provided as arguments when running the program.</li>
    <li><strong>String input</strong>: A string containing numbers separated by spaces, passed as a single argument.</li>
</ul>

<h3>Sorting Algorithm</h3>
<p>The program sorts the numbers using a combination of stack operations:</p>
<ul>
    <li><strong>Swap</strong>: Swap the positions of two elements.</li>
    <li><strong>Rotate</strong>: Move the first element to the end of the stack.</li>
    <li><strong>Reverse Rotate</strong>: Move the last element to the front of the stack.</li>
    <li><strong>Push</strong>: Move an element from one stack to another.</li>
</ul>

<h3>Efficiency</h3>
<p>The program optimizes the sorting process by minimizing the number of operations required:</p>
<ul>
    <li>For 3 numbers, it uses at most 3 operations.</li>
    <li>For 5 numbers, it uses at most 12 operations.</li>
    <li>For 100 numbers, it uses fewer than 1500 operations.</li>
    <li>For 500 numbers, it uses fewer than 11,500 operations.</li>
</ul>

<h2>Instructions</h2>

<h3>Clone the repository:</h3>
<pre><code>git clone https://github.com/Oshintha/Push_swap.git</code></pre>

<h3>Compile the program:</h3>
<p>To compile the program, navigate to the project directory and run the following command:</p>
<pre><code>make</code></pre>

<h3>Run the program:</h3>
<p>The program can be executed in two ways:</p>
<ul>
    <li><strong>Using command-line arguments:</strong> <br><code>./push_swap 4 10 1 3 2</code></li>
    <li><strong>Using a string of numbers:</strong> <br><code>ARG="4 10 1 3 2"; ./push_swap $ARG</code></li>
</ul>

<h3>Test with the checker:</h3>
<p>To test your program's output with the provided checker, run the following:</p>
<pre><code>ARG="4 10 1 3 2"; ./push_swap $ARG | ./checker_Mac $ARG</code></pre>
<p>If you're on a Mac, you might need to give the checker executable permission using:</p>
<pre><code>chmod +x checker_Mac</code></pre>

<h3>Check the number of operations:</h3>
<p>To see how many operations were used to sort a set of numbers, you can run:</p>
<pre><code>ARG="4 10 1 3 2"; ./push_swap $ARG | wc -l</code></pre>

<h2>Algorithm Explanation</h2>
<p>The sorting algorithm is implemented using stack operations, specifically designed to minimize the number of operations required to sort a given set of numbers. The basic strategy used in the algorithm is a variant of the Selection Sort or Insertion Sort algorithms, where we use the two stacks (a and b) to perform the sorting operations in a way that reduces the total number of operations.</p>

<h3>Steps in the Algorithm:</h3>
<ul>
    <li><strong>Initial Sorting:</strong> Initially, elements are pushed into stack a and sorted incrementally.</li>
    <li><strong>Push and Pop:</strong> The smallest elements are pushed onto stack b and the larger elements are pushed back to stack a.</li>
    <li><strong>Final Ordering:</strong> After sorting the elements on stack b, they are pushed back onto stack a in the correct order.</li>
</ul>

<p>The program uses a combination of:</p>
<ul>
    <li>Swap operations to reorder elements in the stack.</li>
    <li>Rotate operations to move elements to the correct positions in the stack.</li>
    <li>Reverse Rotate operations to adjust the positioning of elements.</li>
    <li>Push operations to move elements between stacks.</li>
</ul>

<h2>Time and Space Complexity</h2>

<h3>Time Complexity:</h3>
<p>The algorithm is designed to have a time complexity of <strong>O(n²)</strong> in the worst case for small inputs, but optimizations are in place for larger inputs, especially for up to 500 elements, where it operates efficiently under <strong>O(n log n)</strong> for many cases. The goal is to minimize the number of operations required for larger inputs.</p>

<h3>Space Complexity:</h3>
<p>The program uses two stacks, so the space complexity is <strong>O(n)</strong>, where <strong>n</strong> is the number of elements being sorted.</p>

<h2>Evaluation Criteria</h2>
<p>The evaluation of the algorithm will be based on the number of operations used to sort the input:</p>
<ul>
    <li>For 3 numbers, the number of operations should be less than or equal to 3.</li>
    <li>For 5 numbers, the number of operations should be less than or equal to 12.</li>
    <li>For 100 numbers, the number of operations should be less than 1500.</li>
    <li>For 500 numbers, the number of operations should be less than 11,500.</li>
</ul>
<p>The fewer the operations, the higher the evaluation score.</p>

<h2>Contributors</h2>
<p><a href="https://github.com/Oshintha">Oshintha Sandaruwan</a></p>

</body>
</html>
