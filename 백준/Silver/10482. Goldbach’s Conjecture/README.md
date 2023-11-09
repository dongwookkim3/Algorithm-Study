# [Silver II] Goldbach’s Conjecture - 10482 

[문제 링크](https://www.acmicpc.net/problem/10482) 

### 성능 요약

메모리: 2020 KB, 시간: 624 ms

### 분류

수학, 정수론, 소수 판정, 에라토스테네스의 체

### 제출 일자

2023년 11월 10일 00:57:33

### 문제 설명

<p>The goal of this program is to find all unique ways to represent a given even number as the sum of two prime numbers. A prime number is an integer greater than 1 that is evenly divisible by only itself and 1. The first few prime numbers are 2, 3, 5, 7, 11,. . . The German mathematician Christian Goldbach (1690-1764) conjectured that every even number greater than 2 can be represented by the sum of two prime numbers. (This conjecture has never been proved nor has a counterexample ever been found. As such, you may assume it is true for the cases considered in this problem.) There may be several ways to represent a given even number by the sum of primes. For example, the even number 26 may be represented as 3 + 23, 7 + 19, or 13 + 13.</p>

### 입력 

 <p>Input starts with an integer n (1 ≤ n ≤ 100) indicating the number of cases. The following n lines each contain a test case of a single even number x (4 ≤ x ≤ 32000).</p>

### 출력 

 <p>For each test case x, give the number of unique ways that x can be represented as a sum of two primes. Then list the sums (one sum per line) in increasing order of the first addend. The first addend must always be less than or equal to the second to avoid duplicates. Print a blank line between each pair of test cases.</p>

