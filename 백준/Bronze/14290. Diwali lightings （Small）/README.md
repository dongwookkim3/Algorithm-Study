# [Bronze II] Diwali lightings (Small) - 14290 

[문제 링크](https://www.acmicpc.net/problem/14290) 

### 성능 요약

메모리: 2024 KB, 시간: 840 ms

### 분류

브루트포스 알고리즘, 구현, 문자열

### 제출 일자

2024년 2월 29일 01:44:12

### 문제 설명

<p>Diwali is the festival of lights. To celebrate it, people decorate their houses with multi-color lights and burst crackers. Everyone loves Diwali, and so does Pari. Pari is very fond of lights, and has transfinite powers, so she buys an infinite number of red and blue light bulbs. As a programmer, she also loves patterns, so she arranges her lights by infinitely repeating a given finite pattern <b>S</b>.</p>

<p>For example, if <b>S</b> is <code>BBRB</code>, the infinite sequence Pari builds would be <code>BBRBBBRBBBRB...</code></p>

<p>Blue is Pari's favorite color, so she wants to know the number of blue bulbs between the <b>I</b>th bulb and <b>J</b>th bulb, inclusive, in the infinite sequence she built (lights are numbered with consecutive integers starting from 1). In the sequence above, the indices would be numbered as follows:</p>

<pre>B  B  R  B  B  B  R  B  B  B  R  B...
1  2  3  4  5  6  7  8  9  10 11 12
</pre>

<p>So, for example, there are 4 blue lights between the 4th and 8th positions, but only 2 between the 10th and 12th.</p>

<p>Since the sequence can be very long, she wrote a program to do the count for her. Can you do the same?</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <b>T</b>. <b>T</b> test cases follow.</p>

<p>First line of each test case consists of a string S, denoting the initial finite pattern.</p>

<p>Second line of each test case consists of two space separated integers <b>I</b> and <b>J</b>, defined above.</p>

### 출력 

 <p>For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is number of blue bulbs between the <strong>I</strong>th bulb and <strong>J</strong>th bulb of Pari's infinite sequence, inclusive.</p>

