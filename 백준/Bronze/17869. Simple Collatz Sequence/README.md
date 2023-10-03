# [Bronze III] Simple Collatz Sequence - 17869 

[문제 링크](https://www.acmicpc.net/problem/17869) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 문제 설명

<p>The Simple Collatz Sequence (SCS) starting at an integer n, is defined by the formula:</p>

<p>S(k) = (k/2 if k is even, else (k+1))</p>

<p>The sequence is then n, S(n), S(S(n)), … until the value first reaches 1.</p>

<p>For example, starting at 11, we have:</p>

<p>11 -> 12 -> 6 -> 3 -> 4 -> 2 ->1</p>

<p>The sequence always ends at 1. (Fun Fact: The Hard Collatz Sequence sends odd k to 3*k+1. It is unknown whether that sequence always ends at 1.)</p>

<p>Let A(n) = number of steps in the SCS starting at n. For example, A(11) = 6. Write a program which computes A(n) for a given input n.</p>

### 입력 

 <p>Input consists of a single line which contains a positive decimal integer, n, which starts the sequence. n will fit in a 32-bit unsigned integer.</p>

### 출력 

 <p>The output consists of a single line that contains the value of A(n), the number of steps in the SCS starting at n.</p>

