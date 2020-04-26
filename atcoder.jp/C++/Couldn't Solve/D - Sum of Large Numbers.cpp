/*
We have N + 1 integers: 10 100 , 10 100 + 1 , ..., 10 100 + N .
We will choose K or more of these integers. 
Find the number of possible values of the sum of the chosen numbers, modulo ( 10 9 + 7 ).
*/


/*
D:Sum of Large Numbers
Since 10100 is a very large number, the sum of M numbers is almost M × 10100. Since the
contribution of the “fraction” is small enough, two sets with different numbers of items have not
the same sum in common.
Therefore, it is sufficient to find the answer where the number of chosen numbers are K, K +
1, ..., N + 1 and sum them up.
When choosing M numbers, the sum is minimum when the smallest M numbers are chosen,
and the sum is maximum when the largest M numbers are chosen. Actually every value between
the minimum and the maximum can be constructed. (You can see that by imagining increasing
the chosen numbers little by little, starting from the minimum)
All that left is finding maximum - minimum. In this calculation M × 10100 is cancelled out,
so you can ignore 10100 in the first place. This value can be calculated in an O(1) time with
the methods like using the formula of calculating sums, precalculate the cumulative sums, or
successively updating the sums like sliding windows.
Hence, the answer can be found in a total of O(1) time for each of O(N) cases, so the original
problem could be solved in a total of O(N) time.
Bonus: this problem can also be solved in a total of O(1) time.
*/
