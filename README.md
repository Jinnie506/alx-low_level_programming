# Description
The simplest definition I can give for Big-O notation is this:
Big-O notation is a relative representation of the complexity of an algorithm.
There are some important and deliberately chosen words in that sentence:
relative: you can only compare apples to apples. You can't compare an algorithm to do arithmetic multiplication to an algorithm that sorts a list of integers. But a comparison of two algorithms to do arithmetic operations (one multiplication, one addition) will tell you something meaningful; representation: Big-O (in its simplest form) reduces the comparison between algorithms to a single variable. That variable is chosen based on observations or assumptions. For example, sorting algorithms are typically compared based on comparison operations (comparing two nodes to determine their relative ordering). This assumes that comparison is expensive. But what if the comparison is cheap but swapping is expensive? It changes the comparison; and complexity: if it takes me one second to sort 10,000 elements, how long will it take me to sort one million? Complexity in this instance is a relative measure to something else.
* At least four different sorting algorithms
  * [Bubble sort]
  * [Insertion sort]
  * [Selection sort]
  * [Quick sort]
### :file_folder: Files 

##|File|Description
---|---|---
1|[README.md](./README.md)|Readme.
2|[0-bubble_sort.c](./0-bubble_sort.c)|Bubble Sort Algorithm 
3|[0-O](./0-O)|Big O notations of the time complexity of the Bubble Sort Algorithm
4|[1-insertion_sort_list.c](./1-insertion_sort_list.c)|Insertion Sort Algorithm
5|[1-O](./1-O)|Big O notations of the time complexity of the Insertion Sort Algorithm
6|[2-selection_sort.c](./2-selection_sort.c)|Selection Sort Algorithm
7|[2-O](./2-O)|Big O notations of the time complexity of the Selection Sort Algorithm
8|[3-quick_sort.c](./3-quick_sort.c)|Quick Sort Algorithm
9|[3-O](./3-O)|Big O notations of the time complexity of the Quick Sort Algorithm

# Authors:
* Oyeyemi korede
* Ifeoma Ojini
