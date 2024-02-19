# [Bronze IV] Gömda ord - 24196 

[문제 링크](https://www.acmicpc.net/problem/24196) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 19일 21:23:56

### 문제 설명

<p>Anna skickar hemliga krypterade meddelanden till Bert. För att kunna läsa meddelandena måste Bert dekryptera dem med följande algoritm:</p>

<ul>
	<li>Första bokstaven i indata-strängen tas med i utdata-strängen.</li>
	<li>Varje bokstav som man tar med beskriver var i indatasträngen nästa bokstav finns som ska tas med. Ett 'A' betyder att nästa bokstav finns 1 position fram, ett 'B' innebär 2 positioner fram osv.</li>
	<li>När man kommit till den sista bokstaven i indatat så tar man med den bokstaven och är klar. Indatan är sådan att man alltid kommer till den sista bokstaven.</li>
</ul>

<p>Hjälp Bert genom att skriva ett program som avkrypterar Annas meddelanden.</p>

### 입력 

 <p>Den första och enda raden i indatat innehåller den krypterade strängen (högst 50 tecken). Strängen kommer kunna avkrypteras med ovan beskrivna algoritm utan att man trillar över sista bokstaven. </p>

### 출력 

 <p>Skriv ut den avkrypterade strängen.</p>

