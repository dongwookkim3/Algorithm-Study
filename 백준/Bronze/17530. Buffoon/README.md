# [Bronze III] Buffoon - 17530 

[문제 링크](https://www.acmicpc.net/problem/17530) 

### 성능 요약

메모리: 1116 KB, 시간: 0 ms

### 분류

구현, 수학

### 문제 설명

<p>The Kingdom of Matchings is governed by a generous commander. The commander’s fame and great qualities are known to all, including neighboring kingdoms. One of his most famous qualities is his good humor, which is nourished daily by a court buffoon, elected annually at the Great Comedy Contest (GCC) of the kingdom. The court buffoon helps to relieve all the tension of the various political meetings the work demands, rejoicing not only the commander but the whole kingdom.</p>

<p>Young Carlos is a great comedian whose dream is to become next season’s buffoon. He has spent the past few months writing new jokes and puns of various kinds, many of which are about his own (tiny) stature. The time has come for the buffoon election and a total of N candidates have registered. Each candidate will have five minutes to perform in front of the audience. After the performances, each citizen of the Kingdom of Matchings may vote for one of the candidates, and the most voted candidate will be elected as court buffoon. If there is a tie between one or more candidates, the one who registered first is elected. Knowing this, young Carlos spent nights in front of the electoral office and ensured that his application was the first to be registered.</p>

<p>After the votes, it remains only to determine the results. The voting machine generates a report with N integers, corresponding to the number of votes for each candidate, ordered in order of registration. Your mission is to determine if young Carlos was elected or not.</p>

### 입력 

 <p>The first line of input contains an integer N, (2 ≤ N ≤ 10<sup>4</sup>). The next N lines will contain N positive integers v<sub>1</sub>, . . . , v<sub>N</sub> , one on each line, corresponding to the number of votes each candidate received, in order of registration. Since the Kingdom of matchings population is 100,000 people, the total number of votes will not exceed this value, i.e Σv<sub>i</sub> ≤ 100,000.</p>

### 출력 

 <p>Your program must output a single line containing the character ‘S’ if young Carlos is elected as buffoon, or the character ‘N’ otherwise.</p>

