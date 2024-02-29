# [Bronze II] Count <s>Down</s> Up 2020 - 20224 

[문제 링크](https://www.acmicpc.net/problem/20224) 

### 성능 요약

메모리: 2020 KB, 시간: 12 ms

### 분류

구현

### 제출 일자

2024년 2월 29일 11:22:54

### 문제 설명

<p>The countdown to the Olympic and Paralympic Games Tokyo 2020 continues until summer 2021. That aside, you are asked to count up the occurrences of the four integers 2, 0, 2, and 0 appearing consecutively in this order in given lists of integers.</p>

### 입력 

 <p>The input consists of multiple datasets, each in the following format.</p>

<blockquote><i>n</i> <i>d</i><sub>1</sub> … <i>d</i><sub><i>n</i></sub></blockquote>

<p>Each of the datasets consists of two lines. The first line has an integer <i>n</i> (4 ≤ <i>n</i> ≤ 1000), which is the number of integers listed in the second line. The second line contains <i>n</i> integers <i>d</i><sub>1</sub>, …, <i>d<sub>n</sub></i> separated by spaces. Here, all of <i>d</i><sub>1</sub> to <i>d<sub>n</sub></i> are between 0 and 9, inclusive.</p>

<p>The end of the input is indicated by a line containing a zero.</p>

<p>The number of datasets does not exceed 100.</p>

### 출력 

 <p>For each of the datasets, output one line containing the number of times the four integers <code>2</code>, <code>0</code>, <code>2</code>, and <code>0</code> appear consecutively in this order in the list of integers in its second line. Overlapping occurrences are separately counted. “<code>2 0 2 0 2 0 2 0</code>”, for example, is said to have three occurrences, rather than two.</p>

