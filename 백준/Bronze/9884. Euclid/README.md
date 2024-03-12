# [Bronze I] Euclid - 9884 

[문제 링크](https://www.acmicpc.net/problem/9884) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

유클리드 호제법, 구현, 수학, 정수론

### 제출 일자

2024년 3월 13일 08:23:06

### 문제 설명

<p>The famous Euclidean algorithm is found in Book VII of the Elements. The Elements was written in 300 B.C. by the Greek mathematician Euclid. It is rumored that King Ptolemy, having looked through the Elements, hopefully asked Euclid if there were not a shorter way to geometry, to which Euclid sternly answered: “In geometry there is no royal road!” Probably we should not blame the King for looking for short cuts, for there are thirteen books in the Elements ! The books consist mainly of the mathematical knowledge amassed by Euclid, and possibly some discoveries of his own. The great achievement of Euclid is the beautifully systematic presentation of material as an organic whole. The Elements remained a standard work for over two thousand years.</p>

<p>The original Euclidean algorithm uses subtraction to find the greatest common divisor (gcd) of two positive integers A and B. It is based on the observation that a common divisor of A and B is also a common divisor of the integers min(A, B) and max(A, B) − min(A, B). Thus the gcd of A and B can be found as</p>

<ol>
	<li>If A = B then the gcd is B and the algorithm ends.</li>
	<li>Replace A by max(A, B) − min(A, B), B by min(A, B). Go to Step 1.</li>
</ol>

<p>With the original Euclidean algorithm or otherwise, find the gcd of two positive integers.</p>

<p>Let A = 24, B = 15. The original Euclidean algorithm computes</p>

<ol>
	<li>A = 24 − 15 = 9, B = 15</li>
	<li>A = 15 − 9 = 6, B = 9</li>
	<li>A = 9 − 6 = 3, B = 6</li>
	<li>A = 6 − 3 = 3, B = 3</li>
</ol>

<p>That is, gcd(24, 15) = 3.</p>

### 입력 

 <p>The input contains one line. The line contains two positive integers (each not larger than 32767) separated by spaces.</p>

### 출력 

 <p>The output contains one integer which is the gcd of the two given positive integers.</p>

