--------------------------○Top K Elements○--------------------------
---------------------------------------------------------------------
In this example, we use a min-heap implemented using the priority_queue container from the C++ Standard Library. The algorithm maintains a min-heap of size k, where the top of the heap always contains the kth largest element seen so far. We iterate through the input vector of numbers and add each number to the min-heap. If the size of the min-heap exceeds k, we remove the smallest element from the heap. Finally, we extract the top-k elements from the min-heap and return them in descending order.


⦿When you run this program, it will output the top-k elements from the input vector. 
In the given example, it will output: Top 3 elements: 9 8 7.