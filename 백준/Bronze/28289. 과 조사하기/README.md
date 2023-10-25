# [Bronze III] 과 조사하기 - 28289 

[문제 링크](https://www.acmicpc.net/problem/28289) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2023년 10월 25일 16:27:16

### 문제 설명

<p>대구소프트웨어마이스터고에서는 <strong>2학년부터</strong> 각자의 진로에 따라 다른 과를 가지게 된다.</p>

<ul>
	<li>프론트엔드, 백엔드, 게임 개발 등 여러 소프트웨어를 만드는 <strong>소프트웨어개발과</strong>.</li>
	<li>라즈베리파이, 아두이노 등을 이용해 임베디드를 위한 소프트웨어를 개발하는 <strong>임베디드소프트웨어개발과</strong>.</li>
	<li>그리고 작년부터 새로 생긴 인공지능을 배우며 개발하는 <strong>인공지능소프트웨어개발과</strong>.</li>
</ul>

<p>학교에서는 학생들을 관리하기 쉽게 <strong>1, 2반</strong>에는 <strong>소프트웨어개발과</strong>, <strong>3반</strong>에는 <strong>임베디드소프트웨어개발과</strong>, <strong>4반</strong>에는 <strong>인공지능소프트웨어개발과</strong>로 나누어 반 편성을 한다.</p>

<p>midori는 동아리 학생들의 과 분포를 알아보기로 했다.</p>

<p>동아리 학생들의 명단이 주어지면 동아리에 소프트웨어개발과, 임베디드소프트웨어개발과, 인공지능소프트웨어개발과가 몇 명 있는지 알아보고 <strong>아무런 과에도 속할 수 없는 1학년</strong> 학생들도 몇 명이 있는지 알아보자.</p>

### 입력 

 <p>첫째 줄에는 동아리 학생들의 수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>P</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$P$</span></mjx-container>가 주어진다. <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">(</mo><mn>1</mn><mo>≤</mo><mi>P</mi><mo>≤</mo><mn>100</mn><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$(1 \le P \le 100)$</span> </mjx-container></p>

<p>둘째 줄부터 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>P</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$P$</span></mjx-container>개의 줄에 걸쳐 각 줄마다 학생 한 명의 학년 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43A TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>G</mi><mi>P</mi></msub></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$G_P$</span></mjx-container>, 반 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D436 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em; margin-left: -0.045em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>C</mi><mi>P</mi></msub></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$C_P$</span></mjx-container>, 번호 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em; margin-left: -0.085em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><msub><mi>N</mi><mi>P</mi></msub></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N_P$</span></mjx-container>가 공백으로 구분되어 주어진다. <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msub space="4"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43A TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c33"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c3B"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="2"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msub space="4"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D436 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em; margin-left: -0.045em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c34"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c3B"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="2"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msub space="4"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em; margin-left: -0.085em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">(</mo><mn>1</mn><mo>≤</mo><msub><mi>G</mi><mi>P</mi></msub><mo>≤</mo><mn>3</mn><mo>;</mo><mn>1</mn><mo>≤</mo><msub><mi>C</mi><mi>P</mi></msub><mo>≤</mo><mn>4</mn><mo>;</mo><mn>1</mn><mo>≤</mo><msub><mi>N</mi><mi>P</mi></msub><mo>≤</mo><mn>20</mn><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$(1 \le G_P \le 3; 1 \le C_P \le 4; 1 \le N_P \le 20)$</span></mjx-container> 학년 반 번호 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43A TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-msub space="2"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D436 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em; margin-left: -0.045em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-msub space="2"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em; margin-left: -0.085em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D443 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">(</mo><msub><mi>G</mi><mi>P</mi></msub><mo>,</mo><msub><mi>C</mi><mi>P</mi></msub><mo>,</mo><msub><mi>N</mi><mi>P</mi></msub><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$(G_P, C_P, N_P)$</span></mjx-container>가 같은 학생이 두 명 이상 주어지지 않는다.</p>

<p>주어지는 수는 모두 정수이다.</p>

### 출력 

 <p>첫째 줄에 동아리에 소속된 소프트웨어개발과 학생의 수를 출력한다.</p>

<p>둘째 줄에 동아리에 소속된 임베디드소프트웨어개발과 학생의 수를 출력한다.</p>

<p>셋째 줄에 동아리에 소속된 인공지능소프트웨어개발과 학생의 수를 출력한다.</p>

<p>넷째 줄에 동아리에 소속된 아무런 과에도 속하지 않는 1학년 학생의 수를 출력한다.</p>

