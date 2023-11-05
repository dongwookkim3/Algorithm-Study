# [Bronze III] 얼룩말을 찾아라! - 30454 

[문제 링크](https://www.acmicpc.net/problem/30454) 

### 성능 요약

메모리: 2024 KB, 시간: 8 ms

### 분류

구현, 문자열

### 제출 일자

2023년 11월 5일 16:31:24

### 문제 설명

<p>사파리 투어를 나선 건덕이는 얼룩말에 관심이 많았다. 특히 얼룩말의 몸통에 검은 줄이 많을수록 얼룩말이 아름답다고 생각했다.</p>

<p>건덕이는 얼룩말들의 털 상태를 <span style="color:#e74c3c;"><code>0</code></span>과 <span style="color:#e74c3c;"><code>1</code></span>로 기록한다. <span style="color:#e74c3c;"><code>0</code></span>은 털이 흰 부분을, <span style="color:#e74c3c;"><code>1</code></span>은 털이 검은 부분을 의미한다.</p>

<p>검은 줄의 개수는 연속하는 검은 부분의 개수이다. 예를 들어, 건덕이가 한 얼룩말의 털 상태를 <span style="color:#e74c3c;"><code>01101110101</code></span>로 기록했다면, 이 얼룩말은 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c34"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>4</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$4$</span></mjx-container>개의 검은 줄을 가지고 있다.</p>

<p>건덕이는 모든 얼룩말에 대한 털 상태를 기록해 두었다. 건덕이가 생각하기에 가장 아름다운 얼룩말은 몇 개의 줄을 가졌고, 그런 얼룩말이 총 몇 마리가 있을까?</p>

### 입력 

 <p>첫째 줄에 얼룩말의 개체수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>, 얼룩말의 몸통 길이를 나타내는 정수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43F TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$L$</span></mjx-container>이 공백으로 구분되어 주어진다. <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mrow><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D43F TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-mrow></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mrow data-mjx-texclass="INNER"><mo data-mjx-texclass="OPEN">(</mo><mn>1</mn><mo>≤</mo><mi>N</mi><mo>,</mo><mi>L</mi><mo>≤</mo><mn>1</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn><mo data-mjx-texclass="CLOSE">)</mo></mrow></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$\left( 1\leq N,L\leq 1\, 000 \right)$</span> </mjx-container></p>

<p>이어지는 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개의 줄에 건덕이가 기록한 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43F TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>L</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$L$</span></mjx-container>의 얼룩말의 털 상태를 나타내는 문자열이 한 줄에 하나씩 주어진다. 문자열은 <span style="color:#e74c3c;"><code>0</code></span>과 <span style="color:#e74c3c;"><code>1</code></span>로만 이루어져 있다.</p>

### 출력 

 <p>건덕이가 생각하는 가장 아름다운 얼룩말이 가지고 있는 검은 줄의 개수와 그런 얼룩말의 개체수를 공백으로 구분하여 출력한다.</p>

