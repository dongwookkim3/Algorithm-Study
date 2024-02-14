# [Bronze III] 팰린드롬 척화비 - 20944 

[문제 링크](https://www.acmicpc.net/problem/20944) 

### 성능 요약

메모리: 2020 KB, 시간: 32 ms

### 분류

애드 혹, 문자열

### 제출 일자

2024년 2월 15일 04:19:12

### 문제 설명

<p>흥선이는 팰린드롬을 싫어한다. 어느 날 지구를 정복한 흥선이는 팰린드롬 척화비를 세워, 전 지구의 팰린드롬을 없애버렸다. 그리고 수미상관 순수비를 만들어 수미상관을 널리 퍼뜨렸다.</p>

<p>팰린드롬과 수미상관의 정의는 다음과 같다.</p>

<ul>
	<li>팰린드롬 : <span style="color:#999999;">(<em>앞뒤가 똑같은 팰린드롬~</em>)</span> “u”, “xyx”, “krrk” 같이 뒤집어 읽어도 같은 문자열을 뜻한다.</li>
	<li>수미상관 : <span style="color:#999999;">(<em>앞뒤가 똑같은 수미상관~</em>)</span> “z”, “pqpq”, “astoast” 같이 앞쪽 절반이 뒤쪽 절반과 같은 문자열을 뜻한다. 정확히는, 길이가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>인 문자열이면 길이가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mrow><mjx-mo class="mjx-sop"><mjx-c class="mjx-c230A TEX-S1"></mjx-c></mjx-mo><mjx-mfrac><mjx-frac><mjx-num><mjx-nstrut></mjx-nstrut><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-num><mjx-dbox><mjx-dtable><mjx-line></mjx-line><mjx-row><mjx-den><mjx-dstrut></mjx-dstrut><mjx-mn class="mjx-n" size="s"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-den></mjx-row></mjx-dtable></mjx-dbox></mjx-frac></mjx-mfrac><mjx-mo class="mjx-sop"><mjx-c class="mjx-c230B TEX-S1"></mjx-c></mjx-mo></mjx-mrow></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mrow data-mjx-texclass="INNER"><mo data-mjx-texclass="OPEN">⌊</mo><mfrac><mi>N</mi><mn>2</mn></mfrac><mo data-mjx-texclass="CLOSE">⌋</mo></mrow></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$\left\lfloor\frac{N}{2}\right\rfloor$</span></mjx-container>인 접두사와 접미사가 동일한 문자열을 뜻한다.</li>
</ul>

<p>민수는 팰린드롬의 유구한 역사를 살리고 싶었지만, 여기저기 박힌 팰린드롬 척화비 때문에 그 꿈을 이룰 수 없었다. 그래도 하늘이 무너져도 솟아날 구멍이 있으랴! 민수는 길이가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>인 수미상관이면서 팰린드롬인 문자열을 발견한 것이다! 이것은 흥선이의 팰린드롬 척화비에 위배되지 않았고, 민수는 팰린드롬의 유구한 역사를 후대에 남기기 위해 노트 한 켠에 이 사실을 적었다.</p>

<p>미래에 후손들은 민수의 노트를 발견했지만, 시간이 너무 오래 지나버렸다. 민수의 노트는 얼룩과 먼지 때문에 많은 부분을 알아볼 수가 없었다. 오로지 민수가 길이가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>인 수미상관이면서 팰린드롬인 문자열을 발견했다는 사실만을 알 수 있었을 뿐이다.</p>

<p>민수의 후손인 시철이는 민수의 노트가 사실이라 생각했고, 길이가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>인 수미상관이면서 팰린드롬인 문자열을 찾기 위해 공학관에서 밤새 연구를 하고 있다.</p>

<p>민수가 찾은 것은 무엇이었을까?</p>

### 입력 

 <p>다음과 같이 입력이 주어진다.</p>

<div style="background:#eeeeee;border:1px solid #cccccc;padding:5px 10px;"><mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span> </mjx-container></div>

### 출력 

 <p>길이가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이고 알파벳 소문자로 이루어진, 수미상관이면서 팰린드롬인 문자열을 출력한다. </p>

<p>항상 그러한 문자열은 존재하고, 만약 여러 가지가 있다면 그중 하나를 출력한다.</p>

