# [Silver IV] Minimum Scalar Product (Large) - 12724 

[문제 링크](https://www.acmicpc.net/problem/12724) 

### 성능 요약

메모리: 2024 KB, 시간: 4 ms

### 분류

그리디 알고리즘, 정렬

### 제출 일자

2024년 3월 11일 01:59:32

### 문제 설명

<p>You are given two vectors v<sub>1</sub>=(x<sub>1</sub>,x<sub>2</sub>,...,x<sub>n</sub>) and v<sub>2</sub>=(y<sub>1</sub>,y<sub>2</sub>,...,y<sub>n</sub>). The scalar product of these vectors is a single number, calculated as x<sub>1</sub>y<sub>1</sub>+x<sub>2</sub>y<sub>2</sub>+...+x<sub>n</sub>y<sub>n</sub>. </p>

<p>Suppose you are allowed to permute the coordinates of each vector as you wish. Choose two permutations such that the scalar product of your two new vectors is the smallest possible, and output that minimum scalar product.</p>

### 입력 

 <p>The first line of the input file contains integer number <strong>T</strong> - the number of test cases. For each test case, the first line contains integer number <strong>n</strong>. The next two lines contain <strong>n</strong>integers each, giving the coordinates of v<sub>1</sub> and v<sub>2</sub> respectively.</p>

<p>Limits</p>

<ul>
	<li><strong>T</strong> = 10</li>
	<li>100 ≤ <strong>n</strong> ≤ 800</li>
	<li>-100000 ≤ <strong>x</strong><sub>i</sub>, <strong>y</strong><sub>i</sub> ≤ 100000</li>
</ul>

### 출력 

 <p>For each test case, output a line</p>

<pre>Case #<strong>X</strong>: <strong>Y</strong></pre>

<p>where <strong>X</strong> is the test case number, starting from 1, and <strong>Y</strong> is the minimum scalar product of all permutations of the two given vectors.</p>

