# Hash Tables

This project is part of the Holberton School low-level programming curriculum.  
It focuses on understanding and implementing **hash tables** in C using the
chaining collision handling method.

---

## 📚 Learning Objectives

By the end of this project, you should be able to explain:

### 🔹 What is a hash function?
A hash function is a function that takes a key and maps it to an index in a fixed-size array.

### 🔹 What makes a good hash function?
- It distributes keys uniformly.
- It avoids collisions as much as possible.
- It is fast to compute.

### 🔹 What is a hash table?
A data structure that stores key/value pairs using:
- a hash function
- an array
- linked lists for collisions (chaining)

### 🔹 What is a collision?
When two different keys generate the same index in the array.

### 🔹 How to handle collisions?
In this project:  
✔ **Chaining** (using linked lists)

Other methods include:
- Open addressing
- Double hashing

### 🔹 Advantages of hash tables
- Very fast lookup: average **O(1)**
- Efficient insertion and deletion
- Useful for associative data (key/value)

### 🔹 Drawbacks
- Collisions may reduce performance
- Requires good hash function
- Uses more memory

### 🔹 Common use cases
- Dictionaries (like Python dicts)
- Symbol tables
- Caches
- Database indexing

---

## 📁 Data Structures Used

```c
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

