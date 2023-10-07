# [Bronze IV] 체스 초보 브실이 - 29725 

[문제 링크](https://www.acmicpc.net/problem/29725) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현

### 문제 설명

<p>브실이는 이제 막 체스에 입문한 체스 초보이다. 브실이는 아직 초보이기 때문에 체스판의 기물 점수 계산을 잘하지 못한다.</p>

<p>체스판의 기물 점수는 백의 기물 점수 합에서 흑의 기물 점수 합을 뺀 값이고, 기물에 해당하는 킹, 폰, 나이트, 비숍, 룩, 퀸의 기물 점수는 각각 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0$</span></mjx-container>, <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1$</span></mjx-container>, <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$3$</span></mjx-container>, <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$3$</span></mjx-container>, <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>5</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$5$</span></mjx-container>, <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c39"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>9</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$9$</span></mjx-container>점이다. </p>

<p>체스 초보 브실이를 위해 체스판의 기물 점수 계산을 도와주자! </p>

### 입력 

 <p>첫 번째 줄부터 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c38"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>8</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$8$</span></mjx-container>개의 줄에 걸쳐 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c38"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-cD7"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="3"><mjx-c class="mjx-c38"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>8</mn><mo>×</mo><mn>8</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$8\times8$</span></mjx-container> 크기의 체스판의 상태가 공백 없이 주어진다.</p>

<p>백의 기물은 영어 대문자, 흑의 기물은 영어 소문자로 주어진다.</p>

<p>입력으로 주어지는 문자열은 <span style="color:#e74c3c;"><code>.</code></span>, <span style="color:#e74c3c;"><code>K</code></span>, <span style="color:#e74c3c;"><code>k</code></span>, <span style="color:#e74c3c;"><code>P</code></span>, <span style="color:#e74c3c;"><code>p</code></span>, <span style="color:#e74c3c;"><code>N</code></span>, <span style="color:#e74c3c;"><code>n</code></span>, <span style="color:#e74c3c;"><code>B</code></span>, <span style="color:#e74c3c;"><code>b</code></span>, <span style="color:#e74c3c;"><code>R</code></span>, <span style="color:#e74c3c;"><code>r</code></span>, <span style="color:#e74c3c;"><code>Q</code></span>, <span style="color:#e74c3c;"><code>q</code></span>로만 이루어져 있고, 각각의 문자들은 다음을 뜻한다.</p>

<ul>
	<li><span style="color:#e74c3c;"><code>.</code></span>: 빈칸</li>
	<li><span style="color:#e74c3c;"><code>K</code></span> 또는 <span style="color:#e74c3c;"><code>k</code></span>: 킹</li>
	<li><span style="color:#e74c3c;"><code>P</code></span> 또는 <span style="color:#e74c3c;"><code>p</code></span>: 폰</li>
	<li><span style="color:#e74c3c;"><code>N</code></span> 또는 <span style="color:#e74c3c;"><code>n</code></span>: 나이트</li>
	<li><code><span style="color:#e74c3c;">B</span></code> 또는 <span style="color:#e74c3c;"><code>b</code></span>: 비숍</li>
	<li><span style="color:#e74c3c;"><code>R</code></span> 또는 <span style="color:#e74c3c;"><code>r</code></span>: 룩</li>
	<li><span style="color:#e74c3c;"><code>Q</code></span> 또는 <span style="color:#e74c3c;"><code>q</code></span>: 퀸</li>
</ul>

### 출력 

 <p>주어진 체스판의 기물 점수를 출력한다.</p>

