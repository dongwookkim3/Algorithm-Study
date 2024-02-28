# [Bronze III] JavaScript - 23343 

[문제 링크](https://www.acmicpc.net/problem/23343) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학, 문자열

### 제출 일자

2024년 2월 29일 08:05:30

### 문제 설명

<p>JavaScript is one of the most important computer languages now. It is high-level and multiparadigm. It supports functional and imperative programming styles. However, the ICPC World Finals does not offer JavaScript for problem solving.</p>

<p>JavaScript is considered as a weakly typed language. It sometimes implicitly converts values of one type into another type. For example, the minus operator (<code>-</code>) does not have any meaning on strings; it is defined to operate on numbers. When the minus operator is applied on two strings, JavaScript will convert the operands from strings into numbers and then apply the minus operation. That is why <code>"2" + "2" - "2"</code> evaluates to <code>20</code> in JavaScript. Moreover, JavaScript converts a string into <code>NaN</code> (Not-a-Number) if the string does not represent a number. If any operand of a minus operation is NaN, then the result of the operation must be <code>NaN</code>. For example, <code>"a" + "2"</code> is <code>NaN</code>.</p>

<p>Given two strings <code>x</code> and <code>y</code>, please write a program to compute the result of <code>x - y</code> in JavaScript.</p>

### 입력 

 <p>There is only one line containing two space-separated non-empty strings <code>x</code> and <code>y</code>.</p>

### 출력 

 <p>Print the result of the minus operation (<code>x - y</code>) on one Line. If the result is an integer, please print it without the decimal point. If the result is not a number, please print <code>NaN</code>.</p>

