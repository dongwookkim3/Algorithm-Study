# [Silver III] 햄버거 분배 - 19941 

[문제 링크](https://www.acmicpc.net/problem/19941) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

그리디 알고리즘

### 제출 일자

2024년 1월 12일 15:50:30

### 문제 설명

<p>기다란 벤치 모양의 식탁에 사람들과 햄버거가 아래와 같이 단위 간격으로 놓여 있다. 사람들은 자신의 위치에서 거리가 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$K$</span></mjx-container> 이하인 햄버거를 먹을 수 있다.</p>

<table class="table table-bordered td-center" style="width: 100%">
	<tbody>
		<tr>
			<td style="width: 8.3333333333%;">햄버거</td>
			<td style="width: 8.3333333333%;">사람</td>
			<td style="width: 8.3333333333%;">햄버거</td>
			<td style="width: 8.3333333333%;">사람</td>
			<td style="width: 8.3333333333%;">햄버거</td>
			<td style="width: 8.3333333333%;">사람</td>
			<td style="width: 8.3333333333%;">햄버거</td>
			<td style="width: 8.3333333333%;">햄버거</td>
			<td style="width: 8.3333333333%;">사람</td>
			<td style="width: 8.3333333333%;">사람</td>
			<td style="width: 8.3333333333%;">햄버거</td>
			<td style="width: 8.3333333333%;">사람</td>
		</tr>
		<tr>
			<td style="width: 8.33333%; text-align: center;"><strong>1</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>2</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>3</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>4</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>5</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>6</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>7</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>8</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>9</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>10</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>11</strong></td>
			<td style="width: 8.33333%; text-align: center;"><strong>12</strong></td>
		</tr>
	</tbody>
</table>

<p>위의 상태에서 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi><mo>=</mo><mn>1</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$K = 1$</span></mjx-container>인 경우를 생각해보자. 이 경우 모든 사람은 자신과 인접한 햄버거만 먹을 수 있다. 10번의 위치에 있는 사람은 11번 위치에 있는 햄버거를 먹을 수 있다. 이 경우 다음과 같이 최대 5명의 사람이 햄버거를 먹을 수 있다.</p>

<ul>
	<li>2번 위치에 있는 사람: 1번 위치에 있는 햄버거</li>
	<li>4번 위치에 있는 사람: 5번 위치에 있는 햄버거</li>
	<li>6번 위치에 있는 사람: 7번 위치에 있는 햄버거</li>
	<li>9번 위치에 있는 사람: 8번 위치에 있는 햄버거</li>
	<li>10번 위치에 있는 사람: 11번 위치에 있는 햄버거</li>
	<li>12번 위치에 있는 사람: 먹을 수 있는 햄버거가 없음</li>
</ul>

<p><mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c32"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi><mo>=</mo><mn>2</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$K = 2$</span></mjx-container>인 경우에는 6명 모두가 햄버거를 먹을 수 있다.</p>

<ul>
	<li>2번 위치에 있는 사람: 1번 위치에 있는 햄버거</li>
	<li>4번 위치에 있는 사람: 3번 위치에 있는 햄버거</li>
	<li>6번 위치에 있는 사람: 5번 위치에 있는 햄버거</li>
	<li>9번 위치에 있는 사람: 7번 위치에 있는 햄버거</li>
	<li>10번 위치에 있는 사람: 8번 위치에 있는 햄버거</li>
	<li>12번 위치에 있는 사람: 11번 위치에 있는 햄버거</li>
</ul>

<p>식탁의 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>, 햄버거를 선택할 수 있는 거리 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$K$</span></mjx-container>, 사람과 햄버거의 위치가 주어졌을 때, 햄버거를 먹을 수 있는 사람의 최대 수를 구하는 프로그램을 작성하시오.</p>

### 입력 

 <p>첫 줄에 두 정수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>과 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>K</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$K$</span></mjx-container>가 있다. 그리고 다음 줄에 사람과 햄버거의 위치가 문자 <code>P</code>(사람)와 <code>H</code>(햄버거)로 이루어지는 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>인 문자열로 주어진다.</p>

### 출력 

 <p>첫 줄에 햄버거를 먹을 수 있는 최대 사람 수를 나타낸다.</p>

