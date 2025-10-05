# Sorting Strategy Design Pattern Implementation

This project demonstrates the implementation of the Strategy Design Pattern using different sorting algorithms.

## Project Structure

```
sorting_application/
├── src/
│   ├── strategy.h          # Strategy interface definition
│   ├── concrete_strategies.cpp  # Concrete sorting implementations
│   ├── context.cpp         # Context class implementation
│   └── main.cpp           # Main application file
├── README.md
└── explanation.md         # Detailed pattern explanation
```

## Overview

This implementation showcases how the Strategy Pattern can be used to make different sorting algorithms interchangeable at runtime. Users can select from multiple sorting algorithms:
- Bubble Sort
- Insertion Sort
- Selection Sort
- Merge Sort
- Quick Sort

## Prerequisites

- C++ Compiler (GCC recommended)
- Visual Studio Code (optional)
- C/C++ extension for VS Code (optional)

## How to Build and Run

1. **Compile the program**
```bash
g++ main.cpp -o sorting_app
```

2. **Run the application**
```bash
./sorting_app
```

## Usage

1. Enter the length of the array
2. Input the array elements
3. Choose a sorting algorithm:
   - Press 1 for Bubble Sort
   - Press 2 for Insertion Sort
   - Press 3 for Selection Sort
   - Press 4 for Merge Sort
   - Press 5 for Quick Sort
   - Press 0 to exit

## Design Pattern Details

### Components

1. **Strategy Interface (`SortingStrategy`)**
   - Defines the common interface for all sorting algorithms

2. **Context (`SortContext`)**
   - Maintains reference to the chosen strategy
   - Delegates sorting operation to the strategy

3. **Concrete Strategies**
   - Individual implementations of different sorting algorithms

## Benefits

- Runtime algorithm selection
- Easy to add new sorting algorithms
- Encapsulated sorting implementations
- Clean separation of concerns

## Contributing

Feel free to contribute by:
1. Forking the repository
2. Creating a new branch
3. Making your changes
4. Submitting a pull request

## License

This project is open source and available under the MIT License.