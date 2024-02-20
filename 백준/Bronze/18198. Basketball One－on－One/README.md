# [Bronze IV] Basketball One-on-One - 18198 

[문제 링크](https://www.acmicpc.net/problem/18198) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 20일 23:38:05

### 문제 설명

<p>Alice and Barbara played some friendly games of one-on-one basketball after work, and you agreed to help them keep score. The rules of the game were simple:</p>

<ul>
	<li>Each successful shot by a player earns them either one or two points;</li>
	<li>The first player to eleven points wins, with one exception;</li>
	<li>If the score is tied 10–10, the previous rule is replaced by a “win by 2” rule: the first player to lead the other by at least two points wins.</li>
</ul>

<p>So for example, 11–7, 9–11, and 14–12 are possible final scores (but not 14–13).</p>

<p>Whenever Alice or Barbara scored points, you jotted down an A or B (indicating a score by Alice or by Barbara) followed by a 1 or 2 (the number of points scored). You have some records of the games Alice and Barbara played in this format, but do not remember who won each game. Can you reconstruct the winner from the game record?</p>

### 입력 

 <p>The input consists of a single line with no more than 200 characters: the record of one game. The record consists of single letters (either A or B) alternating with single numbers (either 1 or 2), and includes no spaces or other extraneous characters. Each record will be a correct scoring history of a single completed game, played under the rules described above.</p>

### 출력 

 <p>Print a single character, either A or B: the winner of the recorded game.</p>

