# [Bronze III] A Game Called Mind - 25850 

[문제 링크](https://www.acmicpc.net/problem/25850) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 시뮬레이션, 정렬

### 제출 일자

2024년 3월 1일 06:25:58

### 문제 설명

<p>This problem deals with a simplified version of a game called “Mind”. In this game, a group tries to cooperatively solve a problem. Assume:</p>

<ul>
	<li>There are 2-6 players (called A, B, C, D, E, F).</li>
	<li>Each player has 1-9 cards in sorted order.</li>
	<li>Each card value is between 10 and 99 (inclusive).</li>
	<li>There are no duplicate values, i.e., a card (number) is in at most one hand</li>
</ul>

<p>The objective of the game is for all the players to put all the cards down in sorted order (in the real game, players do not see their own cards, hence the name for the game – Mind). Given the cards in each hand, you are to provide the order for the players to place their cards down.</p>

### 입력 

 <p>The first input line contains an integer, p (2 ≤ p ≤ 6), indicating the number of players. Each of the following p input lines provides the cards for one player. Each line starts with an integer, c (1 ≤ c ≤ 9), indicating the number of cards for that player; the count is followed by the cards in sorted order (each card between 10 and 99, inclusive).</p>

### 출력 

 <p>Print the order for the players to place down the cards so that the cards are in order.</p>

