# [Silver V] Minimum Scalar Product (Small) - 12723 

[문제 링크](https://www.acmicpc.net/problem/12723) 

### 성능 요약

메모리: 2024 KB, 시간: 48 ms

### 분류

브루트포스 알고리즘, 그리디 알고리즘, 수학, 정렬

### 제출 일자

2024년 3월 11일 01:59:12

### 문제 설명

<p>You are given two vectors v<sub>1</sub>=(x<sub>1</sub>,x<sub>2</sub>,...,x<sub>n</sub>) and v<sub>2</sub>=(y<sub>1</sub>,y<sub>2</sub>,...,y<sub>n</sub>). The scalar product of these vectors is a single number, calculated as x<sub>1</sub>y<sub>1</sub>+x<sub>2</sub>y<sub>2</sub>+...+x<sub>n</sub>y<sub>n</sub>. </p>

<p>Suppose you are allowed to permute the coordinates of each vector as you wish. Choose two permutations such that the scalar product of your two new vectors is the smallest possible, and output that minimum scalar product.</p>

### 입력 

 <p>The first line of the input file contains integer number <strong>T</strong> - the number of test cases. For each test case, the first line contains integer number <strong>n</strong>. The next two lines contain <strong>n</strong>integers each, giving the coordinates of v<sub>1</sub> and v<sub>2</sub> respectively.</p>

<p>Limits</p>

<ul>
	<li><strong>T</strong> = 1000</li>
	<li>1 ≤ <strong>n</strong> ≤ 8</li>
	<li>-1000 ≤ <strong>x</strong><sub>i</sub>, <strong>y</strong><sub>i</sub> ≤ 1000</li>
</ul>

### 출력 

 <p>For each test case, output a line</p>

<pre>Case #<strong>X</strong>: <strong>Y</strong></pre>

<p>where <strong>X</strong> is the test case number, starting from 1, and <strong>Y</strong> is the minimum scalar product of all permutations of the two given vectors.</p>

