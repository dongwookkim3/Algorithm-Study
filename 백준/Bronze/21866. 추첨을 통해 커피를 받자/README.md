# [Bronze III] 추첨을 통해 커피를 받자 - 21866 

[문제 링크](https://www.acmicpc.net/problem/21866) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 2월 15일 03:33:23

### 문제 설명

<p>연세대학교 컴퓨터과학과 프로그래밍 경진대회는 2015년부터 지금까지 총 6번 진행되었다.</p>

<p>지금까지 진행했던 대회의 수상자는 대부분 고학번 학생들이었다. 이러한 이유로 국렬이는 신입생들에게 알고리즘 문제 풀이에 대한 동기를 부여하기 위해 2021 연세대학교 신입생 프로그래밍 경진대회를 열게 되었다.</p>

<p>국렬이는 가능한 많은 사람들이 대회에 많이 참여하는 것을 원하기 때문에, 대회에 참가한 학생들 중 수상자를 제외한 나머지 사람들에게 추첨을 통해서 커피를 나누어주려고 한다. 대회에 신청만 하고 참여하지 않는 학생들이 커피를 받는 상황을 막기 위해 총점이 일정 점수 이상인 학생들만을 대상으로 추첨을 하려고 한다.</p>

<p>2021 연세대학교 신입생 프로그래밍 경진대회는 총 9문제로 구성되어 있으며, 각 문제 당 최대 점수는 100점, 100점, 200점, 200점, 300점, 300점, 400점, 400점, 500점이다. 만약 받은 점수의 합계가 100점 이상이라면 추첨 대상자가 된다.</p>

<p>몇몇 참가자들이 상금을 받기 위해서 자신들의 점수를 조작하는 상황이 발생했다. 만약 어떤 학생이 각 문제에서 받은 점수 중, 그 문제의 최대 점수를 넘어가는 것이 한 개라도 있다면 그 학생을 해커로 간주하려고 한다. 해커로 간주된 학생에게는 커피를 무조건 나눠줄 예정이다.</p>

<p>어떤 학생이 각 문제에서 얻은 점수가 주어졌을 때, 해당 학생이 추첨 대상자인지, 추첨 대상자가 아닌지, 혹은 해커인지를 구분해보자.</p>

### 입력 

 <p>첫 번째 줄에 9개의 정수가 주어진다. 각 정수는 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0$</span></mjx-container> 이상 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1\,000$</span></mjx-container> 이하의 정수다. 각 정수는 해당 학생이 각 문제에서 얻은 점수를 의미한다.</p>

### 출력 

 <p>커피 추첨 대상자가 아니라면 <span style="color:#e74c3c;"><code>none</code></span>을 출력하고, 해커라면 <span style="color:#e74c3c;"><code>hacker</code></span>를 출력한다. 그 외의 경우에는 <span style="color:#e74c3c;"><code>draw</code></span>를 출력한다.</p>

