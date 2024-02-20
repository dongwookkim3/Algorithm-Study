# [Bronze I] Paradox With Averages - 27836 

[문제 링크](https://www.acmicpc.net/problem/27836) 

### 성능 요약

메모리: 4096 KB, 시간: 48 ms

### 분류

사칙연산, 브루트포스 알고리즘, 구현, 수학

### 제출 일자

2024년 2월 20일 21:59:59

### 문제 설명

<p>One well-known joke goes as follows: If a bad Computer Science student drops out of college and goes to a different college to study Economics instead, he will increase the average intelligence on both colleges.</p>

<p>In this problem we will investigate the maths behind this joke.</p>

<p>Given the list of student IQs for each of the two colleges, find the number of students of Computer Science that can make the joke true – that is, compute the size of the set { S | S is a student of Computer Science, and if he went to study Economics, both average IQs would increase }.</p>

### 입력 

 <p>The first line of the input file contains an integer <b>T</b> specifying the number of test cases. Each test case is preceded by a blank line.</p>

<p>Each test case looks as follows: The first line two positive integers <b>N<sub>CS</sub></b> and <b>N<sub>E</sub></b> – the number of students of Computer Science and Economics, respectively. The number of Computer Science students will be at least 2.</p>

<p>The following lines contain a total of <b>N<sub>CS</sub>+N<sub>E</sub></b> whitespace-separated non-negative integers giving the IQs of all the students. The first <b>N<sub>CS</sub></b> students mentioned in the input are Computer Science students, the remaining ones study Economics.</p>

### 출력 

 <p>For each test case output a single line with a single integer – the number of Computer Science students that would cause the funny event to happen.</p>

