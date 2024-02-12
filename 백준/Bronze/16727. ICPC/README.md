# [Bronze IV] ICPC - 16727 

[문제 링크](https://www.acmicpc.net/problem/16727) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 2월 12일 09:24:31

### 문제 설명

<p>The Iranian ChamPions Cup (ICPC), the most prestigious football league in Iran, is reaching its end, and people are eagerly waiting for the finals, which happened to be between the two most popular Iranian teams, Persepolis and Esteghlal.</p>

<p>The ICPC finals consist of two matches, with each team competing as the home team in one match. The winning team is determined by aggregate score, the sum of the scores of the two matches. For example, if the scores of the two matches are Persepolis 6–0 Esteghlal in the first match, and Esteghlal 3–1 Persepolis in the second match, then the aggregate score will be Persepolis 7–3 Esteghlal, meaning that Persepolis is the winner. If aggregates are equal, the away goals rule is used to determine the winner, in which case the winner is the team that scored the most goals in the match it played away from home. If the result is still equal, a penalty shootout is required.</p>

<p>Hana, an avid football fan, is trying to figure out various scenarios in which her favorite team wins the finals. To this end, she aims to write a program that gets as input the number of goals in the two matches, and decides which team is the winner if it can be derived from the aggregate scores and the away goals rule, otherwise declares that the match goes to penalty kicks. You are going to help Hana write such a program.</p>

### 입력 

 <p>The first line of the input contains two space-separated integers p<sub>1</sub> and s<sub>1</sub>, where p<sub>1</sub> and s<sub>1</sub> are the number of goals scored by Persepolis and Esteghlal, respectively, in the first match in which Persepolis is the home team. The second line contains two space-separated integers s<sub>2</sub> and p<sub>2</sub>, where s<sub>2</sub> and p<sub>2</sub> are the number of goals scored by Esteghlal and Persepolis, respectively, in the second match in which Esteghlal is the home team. All input integers are between 0 and 20, inclusively.</p>

### 출력 

 <p>In the output, print the name of the winning team, either Persepolis or Esteghlal, if the winner can be determined by the aggregate scores and the away goals rule. Otherwise, print Penalty.</p>

