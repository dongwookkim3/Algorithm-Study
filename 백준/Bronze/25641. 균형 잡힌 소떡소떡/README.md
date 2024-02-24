# [Bronze III] 균형 잡힌 소떡소떡 - 25641 

[문제 링크](https://www.acmicpc.net/problem/25641) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 25일 04:41:50

### 문제 설명

<p>소떡소떡은 기다란 꼬치에 소세지와 떡을 끼운 음식이다. 편의상 소떡소떡을 알파벳 <code>s</code>와 <code>t</code>로만 구성된 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>의 문자열로 생각하자. 알파벳 <code>s</code>는 소세지를, <code>t</code>는 떡을 의미한다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/884b11a1-23ca-4099-b3c7-70076eaa4cad/-/preview/"></p>

<p>위 그림은 길이가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c37"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>7</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$7$</span></mjx-container>인 소떡소떡의 예시이다. 유진이는 소떡소떡을 먹기 전에 소떡소떡을 <em>균형 잡힌 소떡소떡</em>으로 만들려고 한다. 꼬치에 꽂힌 소세지와 떡의 개수가 같을 때 이를 <em>균형 잡힌 소떡소떡</em>이라고 한다. 단, 소세지와 떡이 한 개도 꽂혀있지 않다면 <em>균형잡힌 소떡소떡</em>이 아니다. 위 그림은 소세지가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$3$</span></mjx-container>개, 떡이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c34"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>4</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$4$</span></mjx-container>개 꽂혀 있기 때문에 <em>균형 잡힌 소떡소떡</em>이 아니다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/31eaac4b-36d4-4d92-90e7-6390ba3dd464/-/preview/"></p>

<p>유진이는 소떡소떡의 맨 왼쪽에 있는 소세지나 떡을 떼어낼 수 있다. 오른쪽은 손잡이 부분이기 때문에 오른쪽에서 떼어내는 것은 불가능하다. 위 그림은 소떡소떡의 맨 왼쪽에 있던 소세지를 떼어낸 그림이다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/1fb6f39e-75c8-4a6b-bf85-e09b9b2d6563/-/preview/"></p>

<p>위 그림은 떡 두 개를 더 떼어낸 그림이다. 소세지가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$2$</span></mjx-container>개, 떡이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$2$</span></mjx-container>개 꽂혀 있기 때문에 <em>균형 잡힌 소떡소떡</em>이 되었다.</p>

<p>유진이가 먹으려고 하는 소떡소떡이 주어질 때, 이러한 과정을 통해 만들 수 있는 길이가 최대인 <em>균형 잡힌 소떡소떡</em>은 어떤 모양일까?</p>

### 입력 

 <p>첫째 줄에 소떡소떡의 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi><mo stretchy="false">(</mo><mn>2</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>100</mn><mo stretchy="false">)</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N(2 \le N \le 100)$</span></mjx-container>이 주어진다.</p>

<p>둘째 줄에 소떡소떡을 의미하는 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>의 문자열이 주어진다. 이 문자열은 알파벳 <code>s</code>와 <code>t</code>로만 구성되어 있다.</p>

<p>위 과정을 통해 <em>균형 잡힌 소떡소떡</em>으로 만들 수 없는 입력은 주어지지 않는다.</p>

### 출력 

 <p>이러한 과정을 통해 만들 수 있는 길이가 최대인 <em>균형 잡힌 소떡소떡</em>의 모양을 출력한다.</p>

