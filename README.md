
# Sorting Algorithms & Big O

## Table of Contents

1. [Introduction](#introduction)
2. [Project Overview](#project-overview)
3. [Project Requirements](#project-requirements)
4. [Implemented Algorithms](#implemented-algorithms)
5. [Usage](#usage)
6. [Compilation](#compilation)
7. [Files](#files)
8. [References](#references)

---

## Introduction

Welcome to the Sorting Algorithms & Big O project! This project focuses on implementing and understanding various sorting algorithms in C programming language. The goal is to explore different sorting techniques, analyze their time complexities using Big O notation, and implement them efficiently.

## Project Overview

In this project, we will implement the following sorting algorithms:

1. **Bubble Sort**
2. **Insertion Sort**
3. **Selection Sort**
4. **Quick Sort** (using Lomuto partition scheme)

Each algorithm will be implemented both for arrays and doubly linked lists (where applicable). The project emphasizes understanding the algorithm's mechanics, swapping elements, and its impact on performance.

## Project Requirements

- All sorting algorithms must be implemented in C.
- Each sorting algorithm should be implemented in its own `.c` file and must include the corresponding Big O notations in a separate `.txt` file.
- Implementations must follow the given data structures and function prototypes specified in the `sort.h` header file.
- Code must adhere to the Betty style guidelines.
- The project must include a comprehensive `README.md` file explaining the project, algorithms, how to compile and use the programs, and references used.

## Implemented Algorithms

### 1. Bubble Sort

- **Function Prototype:** `void bubble_sort(int *array, size_t size)`
- **Description:** Sorts an array of integers in ascending order using the Bubble Sort algorithm.
- **Big O Notations:**
  - Best Case: O(n)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)

### 2. Insertion Sort

- **Function Prototype:** `void insertion_sort_list(listint_t **list)`
- **Description:** Sorts a doubly linked list of integers in ascending order using the Insertion Sort algorithm.
- **Big O Notations:**
  - Best Case: O(n)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)

### 3. Selection Sort

- **Function Prototype:** `void selection_sort(int *array, size_t size)`
- **Description:** Sorts an array of integers in ascending order using the Selection Sort algorithm.
- **Big O Notations:**
  - Best Case: O(n^2)
  - Average Case: O(n^2)
  - Worst Case: O(n^2)

### 4. Quick Sort

- **Function Prototype:** `void quick_sort(int *array, size_t size)`
- **Description:** Sorts an array of integers in ascending order using the Quick Sort algorithm with Lomuto partition scheme.
- **Big O Notations:**
  - Best Case: O(n log n)
  - Average Case: O(n log n)
  - Worst Case: O(n^2)

## Usage

To test each sorting algorithm, you can create a `main.c` file similar to the examples provided in each task. The `print_array` and `print_list` functions provided will help you visualize the sorting process. Below is a simple example of how to use the functions:

```c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");

    // Replace with the sorting algorithm function to test
    bubble_sort(array, n);
    // insertion_sort_list(&list); // Example for list sorting

    printf("\n");
    print_array(array, n);

    return (0);
}
```

## Compilation

Compile each sorting algorithm with the provided `print_array.c` and `print_list.c` files using the following command structure:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <algorithm_file.c> <main.c> print_array.c print_list.c -o sort_program
```

Replace `<algorithm_file.c>` with the file containing the sorting algorithm you want to compile (e.g., `0-bubble_sort.c` for Bubble Sort).

## Files

- **sort.h**: Header file containing function prototypes and struct definition.
- **0-bubble_sort.c, 1-insertion_sort_list.c, 2-selection_sort.c, 3-quick_sort.c**: Files containing implementations of sorting algorithms.
- **0-O, 1-O, 2-O, 3-O**: Text files containing Big O notations for each sorting algorithm.
- **print_array.c, print_list.c**: Files providing functions to print arrays and linked lists.
- **main.c (example)**: Example main files provided to test sorting algorithms.

## References

- [Sorting Algorithm Animations](https://www.toptal.com/developers/sorting-algorithms)
- [Big O Notation Explained](https://www.freecodecamp.org/news/big-o-notation-why-it-matters-and-why-it-doesnt-1674cfa8a23c/)
- CS50 Algorithms explanation in detail by David Malan (Link provided in project resources)
