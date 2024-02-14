# [Bronze IV] Judging Moose - 15025 

[문제 링크](https://www.acmicpc.net/problem/15025) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 수학

### 제출 일자

2024년 2월 14일 12:51:55

### 문제 설명

<p>When determining the age of a bull moose, the number of tines (sharp points), extending from the main antlers, can be used. An older bull moose tends to have more tines than a younger moose. However, just counting the number of tines can be misleading, as a moose can break off the tines, for example when fighting with other moose. Therefore, a point system is used when describing the antlers of a bull moose.</p>

<p>The point system works like this: If the number of tines on the left side and the right side match, the moose is said to have the even sum of the number of points. So, “an even 6-point moose”, would have three tines on each side. If the moose has a different number of tines on the left and right side, the moose is said to have twice the highest number of tines, but it is odd. So “an odd 10-point moose” would have 5 tines on one side, and 4 or less tines on the other side.</p>

<p>Can you figure out how many points a moose has, given the number of tines on the left and right side?</p>

### 입력 

 <p>The input contains a single line with two integers ℓ and r, where 0 ≤ ℓ ≤ 20 is the number of tines on the left, and 0 ≤ r ≤ 20 is the number of tines on the right.</p>

### 출력 

 <p>Output a single line describing the moose. For even pointed moose, output “Even x” where x is the points of the moose. For odd pointed moose, output “Odd x” where x is the points of the moose. If the moose has no tines, output “Not a moose”</p>

