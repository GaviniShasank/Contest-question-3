
Rigged Shooting
---------------
You are presented with an N x N matrix containing sequential numbers ranging from 0 to N*N - 1.This matrix symbolizes a shooting target, and your objective is to aim exclusively at the prime numbers within it.

Additionally, a wind value is provided, which can be either a positive or negative integer. This value indicates the number of columns you are permitted to shift horizontally, either to the left or to the right, in accordance with the wind conditions.

Your task is to find whether you can successfully hit the target or not.

**Input Format**

```
- An integer N, representing the size of the matrix.

- An integer Q, representing the number of Queries.

- An integer Target, representing the target you need to hit and the wind value, which can be positive or negative.

```

**Constraints**

```
- 1 ≤ N ≤ 100

- 1 ≤ QUERIES ≤ 10

- 0 ≤ TARGET < n*n, -10 ≤ WIND ≤ 10

```

**Output Format**

```
Return True if it is possible to hit a target  otherwise, return False.

```

**Sample Input 0**

- 3
- 1
- 2 -1

**Sample Output 0**

False

**Explanation 0**

![image](https://s3.amazonaws.com/hr-assets/0/1725459325-f7a920fa8f-2.png)

-   n = 3: The grid is a 3x3 matrix, representing positions from 0 to 8.
-   q = 1: There is one query.
-   Query: target = 2, wind = -1
-   Yes, since 0 ≤ 1 < 9 (where 9 = n*n).
-   No, SeivesPrime[1] = 0 (1 is not a prime number).
-   Since the prime condition fails, the output for this query is ***False.***

**Sample Input 1**

- 4
- 1
- 5 -2

**Sample Output 1**

True

**Explanation 1**

![image](https://s3.amazonaws.com/hr-assets/0/1725467991-8c1dd27621-3.jpg)
