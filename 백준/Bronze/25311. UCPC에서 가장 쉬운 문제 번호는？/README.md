# [Bronze V] UCPC에서 가장 쉬운 문제 번호는? - 25311 

[문제 링크](https://www.acmicpc.net/problem/25311) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

구현

### 문제 설명

<p>대회 참가자는 되도록 일찍 대회의 모든 문제를 한 번씩 읽어 보는 것이 권장됩니다. 이렇게 하면 대회의 전체적인 분위기를 느낄 수 있고, 종종 비교적 쉬운 문제를 빨리 발견해서 속도에서 우위를 점할 수도 있습니다.</p>

<p>하지만 실제 참가자들은 다양한 전략을 사용하고, 문제들이 배치된 순서에 따라서 일부 문제를 아예 읽지 못하거나 아주 늦은 시점에 읽어 보게 될 수도 있습니다. 몇몇 대회는 이를 이용해서 각 문제가 적절한 관심을 받을 수 있도록 문제 순서를 전략적으로 정하기도 합니다.</p>

<p>다음은 흔히 사용되는 몇 가지 문제 배치 방식입니다.</p>

<ul>
	<li>출제진이 예상하는 난이도 순으로 배치합니다. 문제의 난이도에 따라 다른 점수를 주는 대회에서 자주 쓰는 방식이며, 그렇지 않은 대회에서 이 방식을 사용하는 경우는 보통 예상 난이도 순으로 문제가 배정되었다는 공지가 이루어집니다.</li>
	<li>문제 이름 순으로 정렬합니다. 이 방식은 문제 순서가 난이도와 관련 없음을 직접적으로 보여 줄 수 있으나, 가끔 이를 역으로 이용해 문제 이름을 문제 번호에 맞춰서 짓는 경우도 있습니다.</li>
	<li>완전 무작위로 배치합니다.</li>
	<li>문제 몇 개의 위치를 고정하고, 나머지를 무작위로 배치합니다. 이 경우 주로 쉬운 문제를 앞쪽에, 어려운 문제를 뒤쪽에 놓습니다.</li>
</ul>

<p>UCPC 예선은 가장 마지막 방법을 따라, 가장 쉬운 문제의 위치를 고정하고 나머지를 무작위로 배치하는 방법을 사용해 왔습니다. 다음은 지금까지 UCPC 예선에서 출제진이 의도한 가장 쉬운 문제의 번호와 문제 제목입니다.</p>

<ul>
	<li>UCPC 2018 예선: <strong>A</strong>번, 수학은 체육과목 입니다</li>
	<li>UCPC 2019 예선: <strong>A</strong>번, 수학은 체육과목 입니다 2</li>
	<li>UCPC 2020 예선: <strong>A</strong>번, 수학은 비대면강의입니다</li>
	<li>UCPC 2021 예선: <strong>A</strong>번, 수학은 체육과목 입니다 3</li>
</ul>

<p>이를 바탕으로, 각 연도별로 출제진이 의도한 가장 쉬운 문제의 번호를 출력하는 프로그램을 작성해 봅시다.</p>

### 입력 

 <p>첫 줄에 UCPC 개최 연도 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>y</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$y$</span></mjx-container>가 주어집니다. <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c38"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mtext class="mjx-b" space="4"><mjx-c class="mjx-c1D7D0 TEX-B"></mjx-c></mjx-mtext><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mtext class="mjx-b"><mjx-c class="mjx-c1D7CE TEX-B"></mjx-c><mjx-c class="mjx-c1D7D0 TEX-B"></mjx-c><mjx-c class="mjx-c1D7D0 TEX-B"></mjx-c></mjx-mtext><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">(</mo><mn>2</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>018</mn><mo>≤</mo><mi>y</mi><mo>≤</mo><mtext mathvariant="bold">2</mtext><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mtext mathvariant="bold">022</mtext><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$(2\,018 \le y \le \textbf{2}\,\textbf{022})$</span> </mjx-container></p>

### 출력 

 <p><mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>y</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$y$</span></mjx-container>년도 UCPC 예선의 출제진이 의도한 가장 쉬운 문제의 번호를 영어 대문자 알파벳 한 글자로 출력하세요.</p>

