# [Bronze III] Chessboard - 13240 

[문제 링크](https://www.acmicpc.net/problem/13240) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 2월 22일 04:02:02

### 문제 설명

<p>Write a program that prints a chessboard with N rows and M columns with the following rules:</p>

<ul>
	<li>The top left cell must be an asterisk (*)</li>
	<li>Any cell touching (left, right, up or down) a cell with an asterisk must be a dot (.)</li>
	<li>Any cell touching (left, right, up or down) a cell with a dot must be an asterisk.</li>
</ul>

<p>A chessboard of 8 rows and 8 columns printed using these rules would be:</p>

<pre>*.*.*.*.
.*.*.*.*
*.*.*.*.
.*.*.*.*
*.*.*.*.
.*.*.*.*
*.*.*.*.
.*.*.*.*
</pre>

### 입력 

 <p>A single line with two integers N and M separated by spaces. The number N will represent the number of rows and M the number of columns. N and M will be between 1 and 10.</p>

### 출력 

 <p>Print N lines each containing M characters with the chessboard pattern.</p>

