## Euclidean Algorithm

---

### **What is GCD?**

**GCD** stands for **Greatest Common Divisor**. It is the **biggest number** that can divide two numbers **without leaving a remainder**.

#### Example:
- Take two numbers: **12** and **18**.
- The numbers that divide **12** are: 1, 2, 3, 4, 6, 12.
- The numbers that divide **18** are: 1, 2, 3, 6, 9, 18.
- The **common numbers** that divide both are: 1, 2, 3, 6.
- The **biggest common number** is **6**.

So, **GCD(12, 18) = 6**.

---

### **Euclidean Algorithm (Basic Version)**

The Euclidean Algorithm is a **quick way** to find the GCD of two numbers. It works by **repeatedly dividing** the bigger number by the smaller number and replacing the bigger number with the smaller number and the smaller number with the **remainder** until the remainder is **0**. The last non-zero remainder is the GCD.

#### When to use it:
- Use it when you need to find the GCD of two numbers quickly.

#### Example:
Find the GCD of **56** and **98**.

1. Divide **98** by **56**:  
   - **98 ÷ 56 = 1** with a remainder of **42**.
2. Replace **98** with **56** and **56** with **42**.  
   - Divide **56** by **42**:  
     - **56 ÷ 42 = 1** with a remainder of **14**.
3. Replace **56** with **42** and **42** with **14**.  
   - Divide **42** by **14**:  
     - **42 ÷ 14 = 3** with a remainder of **0**.
4. Since the remainder is **0**, the GCD is the last non-zero remainder, which is **14**.

#### C++ Code:
```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int a = 98, b = 56;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
```

---

### **Extended Euclidean Algorithm**

The Extended Euclidean Algorithm does **two things**:
1. It finds the GCD of two numbers (just like the basic Euclidean Algorithm).
2. It also finds two numbers (**x** and **y**) such that:  
   \[
   a \cdot x + b \cdot y = \text{GCD}(a, b)
   \]

#### What is a **coefficient**?
- A **coefficient** is a number that is multiplied by a variable.  
  For example, in the equation \( 2x + 3y = 5 \), the numbers **2** and **3** are coefficients of \( x \) and \( y \).

In the equation \( a \cdot x + b \cdot y = \text{GCD}(a, b) \), the numbers **x** and **y** are the coefficients.

#### When to use it:
- Use it when you need to find the GCD **and** the coefficients (**x** and **y**), especially in problems involving **modular arithmetic** (like finding modular inverses) or solving equations where you need integer solutions.

#### Example:
Find the GCD of **56** and **98**, and also find **x** and **y**.

1. Use the Euclidean Algorithm to find the GCD (which is **14**).
2. Now, backtrack to find **x** and **y**:
   - Start with the equation:  
     \[
     14 = 56 - 1 \cdot 42
     \]
   - From the previous step, we know:  
     \[
     42 = 98 - 1 \cdot 56
     \]
   - Substitute **42** into the first equation:  
     \[
     14 = 56 - 1 \cdot (98 - 1 \cdot 56) = 2 \cdot 56 - 1 \cdot 98
     \]
   - So, **x = 2** and **y = -1**.

#### C++ Code:
```cpp
#include <iostream>
using namespace std;

int extendedGCD(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int gcd = extendedGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return gcd;
}

int main() {
    int a = 98, b = 56;
    int x, y;
    int gcd = extendedGCD(a, b, x, y);
    cout << "GCD of " << a << " and " << b << " is " << gcd << endl;
    cout << "Coefficients x and y are: " << x << " and " << y << endl;
    return 0;
}
```

---

### **Key Points:**
1. **GCD**: The largest number that divides two numbers without leaving a remainder.
2. **Euclidean Algorithm**: A quick way to find the GCD of two numbers.
3. **Extended Euclidean Algorithm**: Finds the GCD and also the coefficients (**x** and **y**) that satisfy the equation \( a \cdot x + b \cdot y = \text{GCD}(a, b) \).

#### When to use:
- Use the **Euclidean Algorithm** when you just need the GCD.
- Use the **Extended Euclidean Algorithm** when you need the GCD **and** the coefficients (**x** and **y**), especially in problems involving modular arithmetic or solving equations.

---