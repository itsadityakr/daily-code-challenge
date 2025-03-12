## Day 79 - Problems  

---

## 285. **Online Stock Span** [C++ Code](./_285_Online_Stock_Span.cpp)  

- **File**: _285_Online_Stock_Span.cpp_  
- **Description**:  
  - The problem requires implementing a class `StockSpanner` that computes the stock span of a given stock price.  
  - The stock span for a given day's price is defined as the maximum number of consecutive days (including the current day) for which the price of the stock was less than or equal to the current day's price.  
  - This should be efficiently handled for a stream of prices over time.  

- **Understanding the Problem**:  
  - Imagine you are tracking stock prices daily. For each new day's price, you want to know how many consecutive days (including today) had a price less than or equal to today's price.  
  - Example:  
    ```
    Prices: [100, 80, 60, 70, 60, 75, 85]  
    Output: [1, 1, 1, 2, 1, 4, 6]  
    ```
    - Day 1: Price = 100 → Span = 1 (only today)  
    - Day 2: Price = 80 → Span = 1 (only today)  
    - Day 3: Price = 60 → Span = 1 (only today)  
    - Day 4: Price = 70 → Span = 2 (includes today and previous price 60)  
    - Day 5: Price = 60 → Span = 1 (only today)  
    - Day 6: Price = 75 → Span = 4 (includes today and prices 70, 60, 80)  
    - Day 7: Price = 85 → Span = 6 (includes today and prices 75, 60, 70, 60, 80)  

- **Pesudocode**:
```
Initialize an empty stack to store (price, span) pairs.

Function next(price):
    Set span = 1
    While stack is not empty and stack’s top price <= current price:
        Add top span to current span
        Pop from stack
    Push (price, span) onto stack
    Return span
```

- **Approach**:  
  1. **Use a Stack**: A stack helps keep track of previous prices and their respective spans.  
  2. **Efficiently Calculate Span**: Instead of iterating back through the entire array, use the stack to store span values, so we can sum them efficiently.  
  3. **Stack Pop for Optimization**: If a lower price exists on top of the stack, pop it, adding its span to the current span. This avoids redundant comparisons.  
  4. **Push the New Price**: Once all smaller prices are removed, push the current price along with its calculated span onto the stack.  

- **Key Concepts Explained**:  
  - **Stack Data Structure**: A stack follows a Last-In-First-Out (LIFO) approach, which helps track previous elements efficiently.  
  - **Span Calculation Using Stacks**: Instead of iterating backward, we pop lower prices and accumulate spans in O(1) per operation.  

- **Time Complexity**:  
  - Each element is pushed onto the stack once and popped at most once → **O(n) amortized time complexity**.  
- **Space Complexity**:  
  - In the worst case (strictly decreasing prices), every element gets stored → **O(n) space complexity**.  

---
