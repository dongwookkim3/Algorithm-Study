# [Bronze II] Happy Number - 14954 

[문제 링크](https://www.acmicpc.net/problem/14954) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학, 시뮬레이션

### 제출 일자

2024년 3월 2일 03:29:51

### 문제 설명

<p>Consider the following function <em>f</em> defined for any natural number <em>n</em>:</p>

<blockquote>
<p><em>f</em>(<em>n</em>) is the number obtained by summing up the squares of the digits of <em>n</em> in decimal (or base-ten).</p>
</blockquote>

<p>If <em>n</em> = 19, for example, then <em>f</em>(19) = 82 because 1<sup>2</sup> + 9<sup>2</sup> = 82.</p>

<p>Repeatedly applying this function <em>f</em>, some natural numbers eventually become 1. Such numbers are called <em>happy</em> <em>numbers</em>. For example, 19 is a happy number, because repeatedly applying function <em>f</em> to 19 results in:</p>

<ul>
	<li><em>f</em>(19) = 1<sup>2</sup> + 9<sup>2</sup> = 82</li>
	<li><em>f</em>(82) = 8<sup>2</sup> + 2<sup>2</sup> = 68</li>
	<li><em>f</em>(68) = 6<sup>2</sup> + 8<sup>2</sup> = 100</li>
	<li><em>f</em>(100) = 1<sup>2</sup> + 0<sup>2</sup> + 0<sup>2</sup> = 1</li>
</ul>

<p>However, not all natural numbers are happy. You could try 5 and you will see that 5 is not a happy number. If <em>n</em> is not a happy number, it has been proved by mathematicians that repeatedly applying function <em>f</em> to <em>n</em> reaches the following cycle:</p>

<blockquote>
<p>4 → 16 → 37 → 58 → 89 → 145 → 42 → 20 → 4.</p>
</blockquote>

<p>Write a program that decides if a given natural number <em>n</em> is a happy number or not.</p>

### 입력 

 <p>Your program is to read from standard input. The input consists of a single line that contains an integer, <em>n</em> (1 ≤ <em>n</em> ≤ 1,000,000,000)</p>

### 출력 

 <p>Your program is to write to standard output. Print exactly one line. If the given number <em>n</em> is a happy number, print out <code>HAPPY</code>; otherwise, print out <code>UNHAPPY</code>.</p>

