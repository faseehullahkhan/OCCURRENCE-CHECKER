# Random Uppercase Letter Occurrence Counter

This C++ program generates a sequence of 100 random uppercase letters and counts the occurrence of each letter in the sequence, printing the count for each letter.

## How to Use

1. Compile the code using a C++ compiler.
2. Run the executable.
3. The program will generate a sequence of random uppercase letters and display the count of each letter in the sequence.

## Code Description

- The program utilizes the `rand()` function to generate random numbers and the `srand()` function to seed the random number generator based on the current time.
- It then iterates over each letter of the alphabet, counts how many times each letter appears in the sequence, and prints the count for each letter.

## Note

- The program assumes that the `srand()` function seeds the random number generator with sufficient entropy, ensuring different sequences of random letters each time the program is run.

Feel free to modify and use this program according to your needs.
