# [Bronze III] 스키테일 암호 - 23080 

[문제 링크](https://www.acmicpc.net/problem/23080) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 25일 18:40:01

### 문제 설명

<p>고대 그리스의 옛 나라인 스파르타의 군대에서는 비밀메시지를 전하는 방법으로 스키테일 암호를 사용했다.</p>

<p>스키테일 암호는 스키테일(Scytale)이라고 하는 정해진 굵기의 원통형 막대에 종이로 된 리본을 위에서 아래로 감은 다음 옆으로 메시지를 적는 방식으로 메세지를 암호화한다. 리본을 풀어 길게 늘어선 글을 읽으면 무슨 뜻인지 전혀 알 수 없지만, 암호화할 때와 같은 굵기의 막대에 감으면 내용을 알 수 있게 된다.</p>

<p>다음은 굵기 3의 막대를 사용하여 "<code>iupc</code>" 라는 문자열을 암호화하는 예시이다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/21dd22ef-83b1-4ad7-9fec-d645306ee12f/-/preview/" style="height: 219px; width: 400px;"></p>

<p>굵기가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>X</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(X\)</span></mjx-container>인 막대에 리본을 감고 세로로 글자 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>X</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(X\)</span></mjx-container>개를 적으면 막대를 한바퀴 돌아오게 된다. 이 막대는 굵기가 3이므로, 세로로 3글자를 적으면 막대를 한바퀴 돌아올 것이다.</p>

<p>암호화하는 문자열을 리본의 가장 왼쪽 끝 부분을 포함하는 가로 <strong>한 줄만</strong> 사용하여 쓰고, 남은 공간은 아무 문자로나 채운다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/b6ade534-0048-480f-95aa-d7ce528f2c1d/-/preview/" style="height: 219px; width: 400px;"></p>

<p>마지막으로 막대에서 리본을 풀면 암호화가 완료된다.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/000d5186-c0c5-4847-bde5-0ce9b055e2d6/-/preview/"></p>

<p>스키테일 암호로 암호화한 문자열과 막대의 굵기가 주어진다. 암호를 해독해 보자!</p>

### 입력 

 <p>첫 번째 줄에 막대의 굵기 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(K\)</span></mjx-container>가 주어진다. 두 번째 줄에 알파벳 소문자만으로 구성된 암호문 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D446 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>S</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(S\)</span></mjx-container>가 주어진다.</p>

### 출력 

 <p>첫 번째 줄에 암호문을 해독한 결과를 출력한다.</p>

