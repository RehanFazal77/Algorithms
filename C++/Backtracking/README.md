-----------------------○Backtraking Algorithm○----------------------
---------------------------------------------------------------------
This algorithm generates all the possible permutations of a given set of numbers. It works by recursively exploring all possible choices for the next element in the permutation. If the current combination is complete, it is added to the result vector. Otherwise, the next element is chosen, the recursive call is made, and the current element is unchosen.

⦿The backtrack() function takes three arguments:
•nums: The set of numbers to permute.
•current: The current permutation.
•result: The vector of all permutations.

➡The function starts by checking if the current permutation is complete. If it is, the permutation is added to the result vector and the function returns. Otherwise, the function iterates through all the elements in nums. For each element, the element is added to the current permutation, the recursive call is made, and the element is removed from the current permutation.

⦿The generatePermutations() function takes one argument:
•nums: The set of numbers to permute.

➡The function first creates a vector of all permutations and then calls the backtrack() function to populate the vector. The function then returns the vector of permutations.
 

        
                                                                                          -Rehan Fazal(git::https://github.com/RehanFazal77)                                                                