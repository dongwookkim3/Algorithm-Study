# [Bronze I] Federation Favorites - 10181 

[문제 링크](https://www.acmicpc.net/problem/10181) 

### 성능 요약

메모리: 1128 KB, 시간: 0 ms

### 분류

수학

### 제출 일자

2023년 12월 1일 00:24:12

### 문제 설명

<p>En route to Rigel 7, Chief Engineer Geordi Laforge and Data were discussing favorite numbers. Geordi exclaimed he preferred Narcissistic Numbers: those numbers whose value is the same as the sum of the digits of that number, where each digit is raised to the power of the number of digits in the number.</p>

<p>Data agreed that Narcissistic Numbers were interesting, but not as good as his favorite: Perfect Numbers. Geordi had never heard of a Perfect Number, so Data elaborated, “A positive integer is said to be Perfect if it is equal to the sum of its positive divisors less than itself. For example, 6 is Perfect because 6 = 1 + 2 + 3.”</p>

<p>Geordi began thinking about an algorithm to determine if a number was Perfect, but did not have the raw computing ability of Data. He needs a program to determine if a given number is Perfect.</p>

<p>Help Geordi write that program.</p>

### 입력 

 <p>Input consists of a single entry per line. Each line contains a single positive integer n, where 2 < n < 100000 for each case. A line containing -1 denotes the end of input and should not be processed.</p>

### 출력 

 <p>For each case, determine whether or not the number is Perfect. If the number is Perfect, display the sum of its positive divisors less than itself. The ordering of the terms of the sum must be in ascending order. If a number is not Perfect, print “<NUM> is NOT perfect.” where <NUM> is the number in question. There must be a single space between any words, symbols, or numbers in all output, with the exception of the period at the end of the sentence when a number is not perfect.</p>

