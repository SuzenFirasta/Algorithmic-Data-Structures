# Week 2: GCD Algorithms

## Overview

In Week 2, we delve into different algorithms for calculating the Greatest Common Divisor (GCD) of two numbers. GCD is a critical concept in number theory, and understanding various methods to compute it is essential for efficiently solving problems in mathematics and computer science.

### Contents

- **Consecutive Integer Checking Algorithm (CICA)**
  - `Consecutive_integer_checking.cpp`
- **Euclid’s Algorithm**
  - `Euclids_Algo.cpp`
- **Middle School Procedure Using Prime Factorization**
  - `middleSchool.cpp`
  - `middleSchool2.cpp`
  - `middleSchool3.cpp`

---

## 1. Consecutive Integer Checking Algorithm (CICA)

### File: `Consecutive_integer_checking.cpp`

**Concept**:
The Consecutive Integer Checking Algorithm (CICA) involves iterating from the minimum of the two numbers down to 1, checking if each number divides both inputs evenly. The first number that meets this condition is the GCD.

**Key Points**:
- **Time Complexity**: O(min(m, n))
- **Efficiency**: The algorithm is simple but can be inefficient for large numbers due to its linear nature.

**Implementation**:
```cpp
int gcd_cica(int m, int n) {
    int i;
    for (i = min(m, n); i >= 1; i--) {
        if (m % i == 0 && n % i == 0) {
            return i;
        }
    }
    return 1;
}
```

### Example Usage:
```cpp
int main() {
    int m, n;
    cout << "Enter the first number: ";
    cin >> m;
    cout << "Enter the second number: ";
    cin >> n;
    cout << "GCD through Consecutive Integer Checking Algorithm of " << m << " and " << n << " is: " << gcd_cica(m, n);
    return 0;
}
```

---

## 2. Euclid’s Algorithm

### File: `Euclids_Algo.cpp`

**Concept**:
Euclid's algorithm is based on the principle that the GCD of two numbers also divides their difference. The algorithm works by repeatedly replacing the larger number by the remainder of the division of the two numbers, until one of them becomes zero. The other number at this point is the GCD.

**Key Points**:
- **Time Complexity**: O(log(min(m, n)))
- **Efficiency**: Euclid's algorithm is significantly faster and more efficient compared to CICA, especially for large numbers.

**Implementation**:
```cpp
int gcd(int m, int n) {
    int r;
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}
```

### Example Usage:
```cpp
int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b);
    return 0;
}
```

---

## 3. Middle School Procedure Using Prime Factorization

### Files: 
- `middleSchool.cpp`
- `middleSchool2.cpp`
- `middleSchool3.cpp`

**Concept**:
The Middle School Procedure for finding the GCD involves prime factorization of both numbers. The GCD is then computed by multiplying the common prime factors. This method mimics the way GCD is taught in middle school.

**Key Points**:
- **Time Complexity**: This method can be more time-consuming due to the process of finding prime factors.
- **Use Cases**: While not the most efficient, this method is conceptually intuitive and easy to understand.

**Implementation**:
- **Prime Factorization**: 
  The number is continuously divided by the smallest possible prime number until it becomes 1.
  
  ```cpp
  vector<int> primeFactors(int n) {
      vector<int> factors;
      while (n % 2 == 0) {
          factors.push_back(2);
          n = n / 2;
      }
      for (int i = 3; i <= sqrt(n); i = i + 2) {
          while (n % i == 0) {
              factors.push_back(i);
              n = n / i;
          }
      }
      if (n > 2) {
          factors.push_back(n);
      }
      return factors;
  }
  ```

- **GCD Calculation**:
  After factorizing both numbers, the common factors are multiplied to get the GCD.
  
  ```cpp
  int gcd(int a, int b) {
      vector<int> factorsA = primeFactors(a);
      vector<int> factorsB = primeFactors(b);
      int i = 0, j = 0, result = 1;
      while (i < factorsA.size() && j < factorsB.size()) {
          if (factorsA[i] == factorsB[j]) {
              result *= factorsA[i];
              i++;
              j++;
          } else if (factorsA[i] < factorsB[j]) {
              i++;
          } else {
              j++;
          }
      }
      return result;
  }
  ```

### Example Usage:
```cpp
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << result << endl;
    return 0;
}
```

---

## Conclusion

This week’s lab provided a comprehensive understanding of different GCD algorithms, ranging from the basic but less efficient Consecutive Integer Checking Algorithm to the highly efficient Euclid's Algorithm, and the intuitive Middle School Procedure. Each method has its own strengths and weaknesses, making them suitable for different scenarios.
