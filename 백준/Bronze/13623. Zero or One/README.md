# [Bronze IV] Zero or One - 13623 

[문제 링크](https://www.acmicpc.net/problem/13623) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 2월 12일 09:11:31

### 문제 설명

<p>Everyone probably knows the game Zero or One (in some regions in Brazil also known as Two or One), used to determine a winner among three or more players. For those unfamiliar, the game works as follows. Each player chooses a value between zero or one; prompted by a command (usually one of the contestants announces “Zero or... One!”), all participants show the value chosen using a hand: if the value chosen is one, the contestant shows a hand with an extended index finger; if the value chosen is zero, the contestant shows a hand with all fingers closed. The winner is the one who has chosen a value different from all others. If there is no player with a value different from all others (e.g. all players choose zero, or some players choose zero and some players choose one), there is no winner.</p>

<p>Alice, Bob and Clara are great friends and play Zerinho all the time: to determine who will buy popcorn during the movie session, who will enter the swimming pool first, etc.. They play so much that they decided make a plugin to play Zerinho on Facebook. But since the don’t know how to program computers, they divided the tasks among friends who do know, including you.</p>

<p>Given the three values chosen by Alice, Bob and Clara, each value zero or one, write a program that determines if there is a winner, and in that case determines who is the winner.</p>

### 입력 

 <p>The input contains a single line, with three integers A, B and C ,indicating respectively the values chosen by Alice, Beto and Clara.</p>

<p>Restrictions</p>

<ul>
	<li>A, B, C ∈ {0, 1}</li>
</ul>

### 출력 

 <p>Your program must output a single line, containing a single character. If Alice is the winner the character must be ‘A’, if Beto is the winner the character must be ‘B’, if Clara is the winner the character must be ‘C’, and if there is no winner the character must be ‘*’ (asterisc).</p>

