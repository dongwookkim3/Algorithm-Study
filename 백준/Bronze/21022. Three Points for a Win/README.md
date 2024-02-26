# [Bronze III] Three Points for a Win - 21022 

[문제 링크](https://www.acmicpc.net/problem/21022) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2024년 2월 27일 00:58:54

### 문제 설명

<p>Three points for a win is a common point system used in competitions such as football (soccer) leagues or group tournaments. In this system, a team is awarded 3 points if they win a match, 1 point for a draw, and 0 points if they lose. Finally, the team with the most points wins the league.</p>

<p>Supposed BINUS’ football team joins a league and has played N matches. At the i<sup>th</sup> match, BINUS’ team scores A<sub>i</sub> vs B<sub>i</sub> against their opponent. If A<sub>i</sub> > B<sub>i</sub>, then BINUS’ team wins the i<sup>th</sup> match; if A<sub>i</sub> < B<sub>i</sub>, then BINUS’ team loses the match; otherwise, if A<sub>i</sub> = B<sub>i</sub>, then it’s a draw. Given the score of each match, your task is to determine the total points accumulated by BINUS’ team.</p>

<p>For example, let N = 4 where A<sub>1..4</sub> = {3, 0, 2, 4} and B<sub>1..4</sub> = {1, 1, 2, 3}.</p>

<ul>
	<li>At the first match, BINUS’ team wins by 3 vs 1.</li>
	<li>At the second match, BINUS’ team loses by 0 vs 1.</li>
	<li>The third match is a draw (both have the same score of 2).</li>
	<li>At the fourth match, BINUS’ team wins by 4 vs 3.</li>
</ul>

<p>Therefore, the total points accumulated by BINUS’ team in this example is: 3 + 0 + 1 + 3 = 7.</p>

### 입력 

 <p>Input begins with a line containing an integer: N (1 ≤ N ≤ 100) representing the number of matches. The next line contains N integers: A<sub>i</sub> (0 ≤ A<sub>i</sub> ≤ 10) representing the score of BINUS’ team. The next line contains N integers: B<sub>i</sub> (0 ≤ B<sub>i</sub> ≤ 10) representing the score of BINUS’ opponent team.</p>

### 출력 

 <p>Output in a line an integer representing the total points accumulated by BINUS’ team.</p>

