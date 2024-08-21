# Standard Template Library (STL) Study Guide

Welcome to the STL study guide. This guide provides a structured approach to studying the various components of the Standard Template Library in C++. Below is the sequence in which you should study each component, with detailed notes and examples provided for each.

## Table of Contents

1. [STL Overview](#1-stl-overview)
2. [Pair](#2-pair)
3. [Vectors](#3-vectors)
4. [List](#4-list)
5. [Deque (dq)](#5-deque-dq)
6. [Stack](#6-stack)
7. [Queue](#7-queue)
8. [Priority Queue](#8-priority-queue)
9. [Set](#9-set)
10. [Multiset](#10-multiset)
11. [Unordered Set](#11-unordered-set)
12. [Map](#12-map)
13. [Multimap](#13-multimap)
14. [Unordered Map](#14-unordered-map)

---

Sure, here's a brief overview of each component of the STL along with their syntax:

### 1. STL Overview
   - **Definition:** The Standard Template Library (STL) is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures.
   - **Syntax:** `#include <algorithm>`, `#include <vector>`, etc.


### 2. Pair
**Definition:** 
A `pair` is a container defined in `<utility>` that can hold two objects of different types together as a single unit.

**Syntax:**
```cpp
#include <utility>

std::pair<T1, T2> myPair;
```

### 3. Vectors
**Definition:** 
Vectors are dynamic arrays that can grow and shrink in size and are implemented in `<vector>`. They provide fast access to elements and dynamic resizing.

**Syntax:**
```cpp
#include <vector>

std::vector<T> myVector;
```

### 4. List
**Definition:** 
Lists are doubly linked lists that allow fast insertions and deletions anywhere in the list, implemented in `<list>`.

**Syntax:**
```cpp
#include <list>

std::list<T> myList;
```

### 5. Deque
**Definition:** 
Deque (double-ended queue) is a dynamic array-like container that allows fast insertion and deletion at both ends. Implemented in `<deque>`.

**Syntax:**
```cpp
#include <deque>

std::deque<T> myDeque;
```

### 6. Stack
**Definition:** 
Stack is a container adapter that provides a LIFO (Last In, First Out) data structure. Implemented in `<stack>`.

**Syntax:**
```cpp
#include <stack>

std::stack<T> myStack;
```

### 7. Queue
**Definition:** 
Queue is a container adapter that provides a FIFO (First In, First Out) data structure. Implemented in `<queue>`.

**Syntax:**
```cpp
#include <queue>

std::queue<T> myQueue;
```

### 8. Priority Queue
**Definition:** 
Priority Queue is a container adapter that provides a way to manage a priority-based queue. Implemented in `<queue>`.

**Syntax:**
```cpp
#include <queue>

std::priority_queue<T> myPriorityQueue;
```

### 9. Set
**Definition:** 
Set is an associative container that contains a sorted set of unique objects of type `Key`. Implemented in `<set>`.

**Syntax:**
```cpp
#include <set>

std::set<T> mySet;
```

### 10. Multiset
**Definition:** 
Multiset is an associative container that allows multiple elements with equivalent keys. Implemented in `<set>`.

**Syntax:**
```cpp
#include <set>

std::multiset<T> myMultiset;
```

### 11. Unordered Set
**Definition:** 
Unordered Set is an associative container that contains a set of unique objects of type `Key`, hashed for fast lookup. Implemented in `<unordered_set>`.

**Syntax:**
```cpp
#include <unordered_set>

std::unordered_set<T> myUnorderedSet;
```

### 12. Map
**Definition:** 
Map is an associative container that stores elements formed by a combination of a key and a mapped value. Implemented in `<map>`.

**Syntax:**
```cpp
#include <map>

std::map<Key, T> myMap;
```

### 13. Multimap
**Definition:** 
Multimap is an associative container that allows multiple elements with equivalent keys. Implemented in `<map>`.

**Syntax:**
```cpp
#include <map>

std::multimap<Key, T> myMultimap;
```
### 14. Unordered Map
**Definition:** 
An unordered_multimap is an associative container that allows multiple elements with equivalent keys, and stores them in an unordered fashion. Implemented in `<unordered_map>`.

**Syntax:**
```cpp
#include <unordered_map>

std::unordered_multimap<Key, T> myUnorderedMultimap;
```

These definitions and syntax should give you a clear overview of each component in the STL.

-by Aditya Kumar