# [Bronze III] Shifty Sum - 14682 

[문제 링크](https://www.acmicpc.net/problem/14682) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2024년 2월 22일 03:56:15

### 문제 설명

<p>Suppose we have a number like 12. Let’s define shifting a number to mean adding a zero at the end. For example, if we shift that number once, we get the number 120. If we shift the number again we get the number 1200. We can shift the number as many times as we want.</p>

<p>In this problem you will be calculating a shifty sum, which is the sum of a number and the numbers we get by shifting. Specifically, you will be given the starting number N and a non-negative integer k. You must add together N and all the numbers you get by shifting a total of k times.</p>

<p>For example, the shifty sum when N is 12 and k is 1 is: 12 + 120 = 132. As another example, the shifty sum when N is 12 and k is 3 is 12 + 120 + 1200 + 12000 = 13332.</p>

### 입력 

 <p>The first line of input contains the number N (1 ≤ N ≤ 10000). The second line of input contains k, the number of times to shift N (0 ≤ k ≤ 5).</p>

### 출력 

 <p>Output the integer which is the shifty sum of N by k.</p>

