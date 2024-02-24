# [Bronze II] 할리갈리 - 27160 

[문제 링크](https://www.acmicpc.net/problem/27160) 

### 성능 요약

메모리: 2032 KB, 시간: 80 ms

### 분류

자료 구조, 해시를 사용한 집합과 맵, 구현, 문자열

### 제출 일자

2024년 2월 25일 01:40:22

### 문제 설명

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/d306bac4-bfc2-4dd3-a4be-9f832cdefd6c/-/preview/" style="width: 320px;"></p>

<p style="text-align: center;">그림 B.1: 할리갈리</p>

<p><strong>《할리갈리》</strong>는 단추가 달린 종 하나와 과일이 그려진 카드들로 구성된 보드게임입니다.</p>

<p>카드에는 총 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c34"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>4</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$4$</span></mjx-container>종류의 과일이 최대 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>5</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$5$</span></mjx-container>개까지 그려져 있습니다. 그려진 과일의 종류는 딸기, 바나나, 라임, 그리고 자두입니다.</p>

<p>게임을 시작할 때 플레이어들은 카드 뭉치를 공평하게 나눠가지며 자신이 가진 카드를 전부 소모하면 패배합니다.</p>

<p>게임은 시작 플레이어가 본인의 카드 뭉치에서 카드 한 장을 공개하는 것으로 시작합니다. 이후 반시계 방향으로 돌아가며 본인의 카드를 한 장씩 공개합니다.</p>

<p>펼쳐진 카드들 중 한 종류 이상의 과일이 <strong>정확히</strong> <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>5</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$5$</span></mjx-container>개 있는 경우 종을 눌러야 하며 가장 먼저 종을 누른 플레이어가 모든 카드를 모아 자신의 카드 뭉치 아래에 놓습니다. 종을 잘못 누른 경우 다른 모든 플레이어에게 카드를 한 장씩 나누어줘야 합니다.</p>

<p>《할리갈리》를 처음 해보는 한별이는 할리갈리 고수인 히나에게 이기기 위해 여러분에게 도움을 청했습니다. 한별이를 도와 펼쳐진 카드들의 목록이 주어졌을 때, 한별이가 종을 쳐야 하는지 알려주세요.</p>

### 입력 

 <p>첫 번째 줄에 펼쳐진 카드의 개수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어집니다.</p>

<p>두 번째 줄부터 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개의 줄에 걸쳐 한 줄에 하나씩 펼쳐진 카드의 정보가 주어집니다.</p>

<p>카드의 정보는 공백으로 구분된, 과일의 종류를 나타내는 문자열 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D446 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>S</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$S$</span></mjx-container>와 과일의 개수를 나타내는 양의 정수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>X</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$X$</span></mjx-container>로 이루어져 있습니다. </p>

<p><mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D446 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>S</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$S$</span></mjx-container>는 <span style="color:#e74c3c;"><code>STRAWBERRY</code></span>, <span style="color:#e74c3c;"><code>BANANA</code></span>, <span style="color:#e74c3c;"><code>LIME</code></span>, <span style="color:#e74c3c;"><code>PLUM</code></span> 중 하나입니다.</p>

### 출력 

 <p>한별이가 종을 쳐야 하면 <span style="color:#e74c3c;"><code>YES</code></span>을, 아니면 <span style="color:#e74c3c;"><code>NO</code></span>를 출력해주세요.</p>

