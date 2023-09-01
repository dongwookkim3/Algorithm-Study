# [Bronze V] 정보섬의 대중교통 - 28113 

[문제 링크](https://www.acmicpc.net/problem/28113) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 문제 설명

<p>숭실대학교 정보과학관은 숭실대입구역으로부터 멀리 떨어져 있는 대신, 바로 앞에 <em>숭실대별관앞</em>이라는 명칭의 버스 정류소가 자리 잡고 있다.</p>

<p>학부 연구생 찬솔이는 야근을 마치고 대중교통을 이용해 집에 가려고 한다. 다행히 아슬아슬하게 막차가 끊기지 않은 상황인데, 구체적으로 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A$</span></mjx-container>분 뒤에 숭실대별관앞 정류소에 집으로 가는 마지막 버스가 도착하고, <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>B</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$B$</span></mjx-container>분 뒤에 숭실대입구역에 집으로 가는 마지막 열차가 도착한다.</p>

<p>찬솔이는 지금 버스 정류소에 서 있다. 그런데, 찬솔이는 지하철 역까지 걸어가서 지하철을 타는 것이 여기서 버스를 타는 것 보다 빠를 수도 있다는 사실을 알아차려 버렸다. 숭실대입구역의 지하철 승강장까지 걸어가는데는 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>분이 걸린다. 버스와 지하철 중 더 먼저 탈 수 있는 것이 무엇인지 알려줘서 야근한 찬솔이의 피로를 회복시켜 주자.</p>

<p>단, 버스와 지하철이 도착한 뒤 탑승하는 데 걸리는 시간은 신경 쓰지 않고, 버스와 지하철 모두 도착한 직후에 승객을 태운 뒤 기다리지 않고 바로 떠난다. 또한 지하철 역에 도착하는 시간과 지하철 열차가 도착하는 시간이 정확히 같다면 지하철을 탈 수 있다.</p>

### 입력 

 <p>첫째 줄에 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi><mo>,</mo><mi>A</mi><mo>,</mo><mi>B</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N,A,B$</span></mjx-container>가 공백으로 구분되어 주어진다.</p>

### 출력 

 <p>버스에 더 먼저 탑승할 수 있으면 <span style="color:#e74c3c;"><code>Bus</code></span>, 지하철에 더 먼저 탑승할 수 있으면 <span style="color:#e74c3c;"><code>Subway</code></span>, 버스와 지하철에 탑승하게 되는 시간이 동일하면 <span style="color:#e74c3c;"><code>Anything</code></span>을 출력한다.</p>

