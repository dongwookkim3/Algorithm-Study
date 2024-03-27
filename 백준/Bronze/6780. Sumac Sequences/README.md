# [Bronze III] Sumac Sequences - 6780 

[문제 링크](https://www.acmicpc.net/problem/6780) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2024년 3월 27일 13:23:32

### 문제 설명

<p>In a sumac sequence, t<sub>1</sub>, t<sub>2</sub>, .., t<sub>m</sub>, each term is an integer greater than or equal 0. Also, each term, starting with the third, is the difference of the preceding two terms (that is, t<sub>n+2</sub> = t<sub>n</sub> − t<sub>n+1 </sub>for n ≥ 1). The sequence terminates at t<sub>m</sub> if t<sub>m−1</sub> < t<sub>m</sub>.</p>

<p>For example, if we have 120 and 71, then the sumac sequence generated is as follows:</p>

<p style="text-align: center;">120, 71, 49, 22, 27.</p>

<p>This is a sumac sequence of length 5.</p>

### 입력 

 <p>The input will be two positive numbers t<sub>1</sub> and t<sub>2</sub>, with 0 < t<sub>2</sub> < t<sub>1</sub> < 10000.</p>

### 출력 

 <p>The output will be the length of the sumac sequence given by the starting numbers t<sub>1</sub> and t<sub>2</sub>.</p>

