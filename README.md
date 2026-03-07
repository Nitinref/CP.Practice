<div align="center">

```
 ██████╗██████╗       ██████╗ ██████╗  █████╗  ██████╗████████╗██╗ ██████╗███████╗
██╔════╝██╔══██╗     ██╔══██╗██╔══██╗██╔══██╗██╔════╝╚══██╔══╝██║██╔════╝██╔════╝
██║     ██████╔╝     ██████╔╝██████╔╝███████║██║        ██║   ██║██║     █████╗  
██║     ██╔═══╝      ██╔═══╝ ██╔══██╗██╔══██║██║        ██║   ██║██║     ██╔══╝  
╚██████╗██║          ██║     ██║  ██║██║  ██║╚██████╗   ██║   ██║╚██████╗███████╗
 ╚═════╝╚═╝          ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝   ╚═╝   ╚═╝ ╚═════╝╚══════╝
```

# 🏆 cp-practice

**A structured C++ competitive programming practice repository**

[![C++](https://img.shields.io/badge/Language-C%2B%2B17-blue?style=flat-square&logo=cplusplus)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Codeforces%20|%20LeetCode%20|%20AtCoder-orange?style=flat-square)](https://codeforces.com/)
[![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)](LICENSE)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen?style=flat-square)](CONTRIBUTING.md)

</div>

---

## 📌 About

This repository is a personal collection of competitive programming solutions, templates, and notes written in **C++17**. It covers a wide range of topics — from beginner-friendly problems to advanced algorithmic challenges — organized by topic and difficulty for easy reference and revision.

> _"The more problems you solve, the fewer problems you have."_

---

## 🗂️ Repository Structure

```
cp-practice/
│
├── 📁 templates/
│   ├── basic_template.cpp       # Standard CP boilerplate
│   ├── segment_tree.cpp
│   ├── fenwick_tree.cpp
│   └── ...
│
├── 📁 data-structures/
│   ├── stack/
│   ├── queue/
│   ├── linked-list/
│   ├── trees/
│   └── graphs/
│
├── 📁 algorithms/
│   ├── sorting/
│   ├── searching/
│   ├── dynamic-programming/
│   ├── greedy/
│   ├── divide-and-conquer/
│   ├── backtracking/
│   └── number-theory/
│
├── 📁 platforms/
│   ├── codeforces/
│   ├── leetcode/
│   ├── atcoder/
│   ├── codechef/
│   └── spoj/
│
├── 📁 contests/
│   └── YYYY-MM-DD-contest-name/
│
└── 📁 notes/
    ├── complexity-cheatsheet.md
    ├── stl-tricks.md
    └── math-formulas.md
```

---

## 🚀 Quick Start

### Prerequisites

- **Compiler**: `g++` (GCC 9+) or `clang++`
- **Standard**: C++17
- **OS**: Linux / macOS / Windows (WSL recommended)

### Compile & Run

```bash
# Clone the repo
git clone https://github.com/<your-username>/cp-practice.git
cd cp-practice

# Compile a solution
g++ -std=c++17 -O2 -o solution solution.cpp

# Run with input
./solution < input.txt

# Run with output comparison
./solution < input.txt > my_output.txt
diff my_output.txt expected_output.txt
```

### Compile Flags (Recommended)

```bash
# For debugging
g++ -std=c++17 -Wall -Wextra -Wshadow -DDEBUG -g -o solution solution.cpp

# For submission (optimized)
g++ -std=c++17 -O2 -o solution solution.cpp
```

---

## 📋 Standard Template

```cpp
#include <bits/stdc++.h>
using namespace std;

#define int         long long
#define pb          push_back
#define all(x)      (x).begin(), (x).end()
#define sz(x)       (int)(x).size()
#define yes         cout << "YES\n"
#define no          cout << "NO\n"

const int MOD  = 1e9 + 7;
const int INF  = 1e18;

void solve() {
    // your solution here
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;           // remove if single test case
    while (t--) solve();

    return 0;
}
```

---

## 📚 Topics Covered

| Category | Topics |
|---|---|
| **Data Structures** | Arrays, Strings, Stack, Queue, Deque, Set, Map, Heap, Trie, Segment Tree, Fenwick Tree, DSU |
| **Graph Algorithms** | BFS, DFS, Dijkstra, Bellman-Ford, Floyd-Warshall, Prim's, Kruskal's, Topological Sort, SCC |
| **Dynamic Programming** | Knapsack, LCS, LIS, Matrix Chain, Bitmask DP, Tree DP, Digit DP |
| **Math** | GCD/LCM, Modular Arithmetic, Sieve of Eratosthenes, Fast Exponentiation, Combinatorics, FFT |
| **String Algorithms** | KMP, Z-Algorithm, Rabin-Karp, Suffix Array, Manacher's |
| **Greedy** | Interval Scheduling, Activity Selection, Huffman Coding |
| **Searching & Sorting** | Binary Search, Two Pointers, Merge Sort, Counting Sort |
| **Geometry** | Convex Hull, Line Intersection, Point-in-Polygon |

---

## 🌐 Platforms

| Platform | Profile / Link |
|---|---|
| 🟦 Codeforces | [your-handle](https://codeforces.com/profile/Nitinref) |
| 🟨 LeetCode | [your-handle](https://leetcode.com/your-handle/) |
| 🟩 AtCoder | [your-handle](https://atcoder.jp/users/your-handle) |
| 🟧 CodeChef | [your-handle](https://www.codechef.com/users/your-handle) |

---

## 📈 Progress Tracker

| Difficulty | Solved |
|---|---|
| 🟢 Easy | ![](https://img.shields.io/badge/-0-brightgreen?style=flat-square) |
| 🟡 Medium | ![](https://img.shields.io/badge/-0-yellow?style=flat-square) |
| 🔴 Hard | ![](https://img.shields.io/badge/-0-red?style=flat-square) |

> Update the badge numbers as you progress!

---

## 🛠️ Useful STL Snippets

<details>
<summary><b>Click to expand</b></summary>

```cpp
// Sort in descending order
sort(all(v), greater<int>());

// Priority Queue (min-heap)
priority_queue<int, vector<int>, greater<int>> pq;

// Frequency map
map<int, int> freq;
for (auto x : v) freq[x]++;

// Lower / Upper bound
auto it = lower_bound(all(v), target);  // first >= target
auto it = upper_bound(all(v), target);  // first > target

// Next permutation
do {
    // process permutation
} while (next_permutation(all(v)));

// __gcd and __lcm
int g = __gcd(a, b);
int l = (a / g) * b;  // safe lcm

// Fast power (modular)
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}
```

</details>

---

## 🤝 Contributing

Contributions, suggestions, and bug fixes are welcome!

1. Fork this repo
2. Create a new branch: `git checkout -b feature/add-solution`
3. Commit your changes: `git commit -m "Add solution for Problem XYZ"`
4. Push to the branch: `git push origin feature/add-solution`
5. Open a Pull Request

Please make sure your code:
- Compiles with `g++ -std=c++17`
- Is well-commented for non-trivial logic
- Includes the problem link in a comment at the top

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---

<div align="center">

Made with ❤️ and lots of ☕ | Happy Coding! 🚀

⭐ **Star this repo if you find it helpful!** ⭐

</div>

