# student-capital

## Description

This program helps a student calculate their capital, increased by buying, repairing, and selling laptops during the summer. It determines the maximum possible capital the student can achieve based on their initial capital, the number of available laptops, and their characteristics.

## Requirements

Before running the program, ensure you have the following installed:

- **g++ compiler**: Make sure you have the g++ compiler installed and set up to be used from the command line. Instructions for installation may vary between Windows and Unix-like systems.


## Input

The program takes the following input:

- `K`: Number of laptops available for purchase.
- `N`: Maximum number of laptops the student can buy and repair.
- `C`: Initial capital of the student.
- Array `gains` of size `K`, containing the expected gain from each laptop.
- Array `prices` of size `K`, containing the price of each laptop.

## Output

The program outputs a single line:
- `capital at the end of the summer`: The student's capital after the summer.

## How to Run the Program

1. Compile the program using `g++` compiler:
    ```sh
    g++ -o student_capital student_capital.cpp
    ```

2. Run the compiled program:
    ```sh
    ./student_capital
    ```

3. Enter data in the following format:
    ```
    K N C
    gain1 gain2 ... gainK
    price1 price2 ... priceK
    ```

### Example

Input:
```
5 2 500.5
100 200 295 380 500
200 250 250 300 500
```

Output:
```
capital at the end of the summer: 980.5
```

## Program Logic

1. Read input data.
2. Sort laptops by descending gain.
3. Calculate capital by buying, repairing, and selling laptops until it's feasible (while there's enough money and not exceeding the maximum number of laptops).
4. Output the final capital.
