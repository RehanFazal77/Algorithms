-----------------------○Sliding Window Algoritm○----------------------
---------------------------------------------------------------------
The sliding window algorithm is used to efficiently process arrays or sequences by maintaining a "window" of elements and updating it as it slides through the array. It allows us to solve problems that involve finding optimal subarrays or subsequences by avoiding redundant computations.

⦿In this example, we implement the sliding window algorithm to find the maximum sum of a subarray of size k within a given array. The algorithm works as follows:

•We initialize windowSum and maxSum to 0.
•We calculate the sum of the first window of size k by iterating from index 0 to k - 1 and adding the corresponding elements of the array.
•We then start a loop from index k and slide the window through the array.
•In each iteration, we add the current element to windowSum and subtract the element at the start of the window (i.e., nums[i - k]) to update the sum.
•We update maxSum by taking the maximum value between the current maxSum and windowSum.
•After the loop finishes, we return maxSum, which represents the maximum sum of a subarray of size k.

⦿In the main function, we provide an example usage of the algorithm. 
We have an array nums and want to find the maximum sum of a subarray of size k = 3. 
The result is printed to the console.


                                                                                  -Rehan Fazal(git::https://github.com/RehanFazal77)     