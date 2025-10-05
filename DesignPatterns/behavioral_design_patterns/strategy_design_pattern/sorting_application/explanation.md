# Strategy Design Pattern

## Overview
The Strategy Design Pattern is a behavioral design pattern that enables selecting an algorithm's implementation at runtime. It defines a family of algorithms, encapsulates each one, and makes them interchangeable within that family.

It is cruicial for developing flexible, maintainable and modular code, especially when multiple algorithms might be applicable to solve the problem.

## Implementation Details

### Core Components

1. **Strategy Interface (`SortingStrategy`)**
   - Defines a common interface for all concrete sorting strategies
   - Contains a pure virtual function `sort()` that concrete classes must implement
   ```cpp
   class SortingStrategy {
       public:
           virtual void sort(std::vector<int>& arr) = 0;
   };
   ```

2. **Context (`SortContext`)**
   - Maintains a reference to the strategy object
   - Provides method to set/change strategy at runtime
   - Delegates the algorithm execution to the strategy object
   ```cpp
   class SortContext {
       private:
           SortingStrategy* strategy;
       public:
           void setStrategy(SortingStrategy* strategy);
           void executeStrategy(std::vector<int>& arr);
   };
   ```

3. **Concrete Strategies**
   - Implement the algorithm defined in strategy interface
   - In this case, we have:
     - BubbleSort
     - InsertionSort
     - SelectionSort
     - MergeSort
     - QuickSort

## Benefits

1. **Runtime Algorithm Selection**
   - Allows changing sorting algorithms dynamically without modifying client code
   - Provides flexibility in choosing different sorting strategies based on input or requirements

2. **Encapsulation**
   - Each sorting algorithm is encapsulated in its own class
   - Makes the code more maintainable and easier to extend

3. **Single Responsibility Principle**
   - Each strategy class has one responsibility - implementing a specific sorting algorithm
   - Context class manages strategy selection and execution

4. **Open/Closed Principle**
   - New sorting strategies can be added without modifying existing code
   - Simply create a new class implementing the `SortingStrategy` interface

## Usage Example

```cpp
// Create context and strategies
SortContext context;
BubbleSort bubbleSort;

// Set strategy
context.setStrategy(&bubbleSort);

// Execute strategy
vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
context.executeStrategy(arr);
```

## When to Use

1. When you need different variants of an algorithm
2. When you have a family of similar algorithms
3. When an algorithm uses data that clients shouldn't know about
4. When a class defines many behaviors that appear as multiple conditional statements

## Real-world Applications

1. **Payment Processing Systems**
   - Different payment strategies (Credit Card, PayPal, Stripe, Cryptocurrency)
   - Each payment method implements a common payment interface
   - Applications can switch payment methods without changing core checkout logic

2. **Image Compression**
   - Different compression algorithms for various use cases
   - JPEG for photos
   - PNG for graphics
   - GIF for animations
   - System can switch compression strategy based on image type

3. **Navigation Apps**
   - Different routing strategies (Car, Walking, Public Transit, Bicycle)
   - Each mode implements a common routing interface
   - Users can switch transport modes without affecting the core navigation system


## Considerations

1. **Memory Overhead**
   - Each strategy is a separate class
   - May increase memory usage for simple algorithms

2. **Communication Overhead**
   - Strategy and context communicate through interface
   - May add slight performance overhead

3. **Strategy Selection**
   - Client must be aware of different strategies
   - Need to choose appropriate strategy based on requirements