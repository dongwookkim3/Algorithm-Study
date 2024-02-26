# [Bronze III] Which Team Should Receive the Sponsor Prize? - 29684 

[문제 링크](https://www.acmicpc.net/problem/29684) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 2월 27일 03:23:13

### 문제 설명

<p>In ICQC (International Collegiate Quiz Contest), participating teams compete the speed of answering a difficult quiz. The winner is, of course, the team that gives the correct answer first. In addition to this, in the contest this year, a sponsor prize will be provided to the team with the time of giving the correct answer closest to 2023 seconds after the start of the contest.</p>

<p>Given the list of elapsed times from the start of the contest before giving the correct answer for all the participating teams, decide which team is to be provided the sponsor prize.</p>

### 입력 

 <p>The input consists of multiple datasets, each in the following format. The number of datasets does not exceed 50.</p>

<blockquote>
<p><i>n</i></p>

<p><i>a</i><sub>1</sub> <i>a</i><sub>2</sub> ⋯ <i>a<sub>n</sub></i></p>
</blockquote>

<p>The integer <i>n</i> is the number of participating teams within the range between 2 and 100, inclusive. The teams are numbered 1 through <i>n.</i> <i>a<sub>k</sub></i> (<i>k</i> = 1, …, <i>n</i>) is a positive integer not exceeding 10<sup>4</sup>. It represents the elapsed time in seconds before the correct answer was given by the team numbered <i>k.</i> You may assume that one unique team has the elapsed time before answering correctly closest to 2023 seconds.</p>

<p>The end of the input is indicated by a line consisting of a zero.</p>

### 출력 

 <p>For each dataset, output in a line the team number of the team to be provided the sponsor prize.</p>

