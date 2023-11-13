# [Bronze II] Sum Game - 14686 

[문제 링크](https://www.acmicpc.net/problem/14686) 

### 성능 요약

메모리: 2680 KB, 시간: 40 ms

### 분류

사칙연산, 수학, 누적 합

### 제출 일자

2023년 11월 14일 08:09:31

### 문제 설명

<p>Annie has two favourite baseball teams: the Swifts and the Semaphores. She has followed them throughout the season, which is now over. The season lasted for N days. Both teams played exactly one game on each day.</p>

<p>For each day, Annie recorded the number of runs scored by the Swifts on that day. She also recorded this information for the Semaphores.</p>

<p>She would like you to determine the largest integer K such that K ≤ N and the Swifts and the Semaphores had scored the same total number of runs K days after the start of the season. The total number of runs scored by a team after K days is the sum of the number of runs scored by the team in all games before or on the K-th day.</p>

<p>For example, if the Swifts and the Semaphores have the same total number of runs at the end of the season, then you should output N. If the Swifts and the Semaphores never had the same number of runs after K games, for any value of K ≤ N, then output 0.</p>

### 입력 

 <p>The first line of input will contain an integer N (1 ≤ N ≤ 100 000). The second line will contain N space-separated non-negative integers representing the number of runs scored by the Swifts on each day, in order. The third line will contain N space-separated non-negative integers representing the number of runs scored by the Semaphores on each day, in order. You may assume that each team scored at most 20 runs in any single game.</p>

<p>For 7 of the 15 points available, N ≤ 1000.</p>

### 출력 

 <p>Output the largest integer K such that K ≤ N and the Swifts and the Semaphores have the same total number of runs after K days.</p>

