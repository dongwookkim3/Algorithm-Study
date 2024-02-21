# [Bronze III] 연세여 사랑한다 - 25915 

[문제 링크](https://www.acmicpc.net/problem/25915) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 22일 02:32:01

### 문제 설명

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;">
<p>여러분은 연세를 사랑하십니까?</p>

<p>연세인이 가장 사랑하는 응원곡,</p>

<p>사랑한다 연세여, 연세여 사랑한다...</p>
</div>

<p>고려대학교 학생 훈규는 2022 정기 연고전에서 열심히 응원을 하다가 정신을 잃고 깨어나 보니 연세대학교의 감옥에 갇혀 있었다. 훈규가 감옥을 탈출하기 위해서는 바닥에 깔린 비밀번호 석판을 이용해서 비밀번호 "<span style="color:#e74c3c;"><code>ILOVEYONSEI</code></span>"를 입력해야 한다.</p>

<p>비밀번호 석판은 총 26가지의 석판이 일렬로 나열되어 있고, 각각 알파벳 대문자가 왼쪽부터 알파벳 순서대로 적혀 있다. 즉, <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$i$</span></mjx-container>번째 석판에는 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$i$</span></mjx-container>번째 알파벳 대문자가 적혀 있다. 인접한 석판의 거리는 1이다. 따라서 <span style="color:#e74c3c;"><code>A</code></span>가 적힌 석판에서 출발해<span style="color:#e74c3c;"><code>Z</code></span>가 적힌 석판에 도착하기 위해서는 25의 거리를 이동해야 한다. 원하는 알파벳을 입력하려면 해당 알파벳이 적혀 있는 석판 위에 올라가 점프해야 한다. 점프는 0의 거리를 이동한다.</p>

<p>훈규가 현재 위치한 석판의 알파벳이 주어진다. 훈규는 최소로 이동해 비밀번호를 모두 입력하고자 한다.</p>

### 입력 

 <p>입력은 아래와 같이 주어진다.</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;"><mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D450 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>c</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$c$</span> </mjx-container></div>

### 출력 

 <p>훈규가 비밀번호를 모두 입력하기 위한 이동 거리의 최솟값을 출력한다.</p>

