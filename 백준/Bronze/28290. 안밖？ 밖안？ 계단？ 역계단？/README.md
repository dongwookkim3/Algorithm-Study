# [Bronze IV] 안밖? 밖안? 계단? 역계단? - 28290 

[문제 링크](https://www.acmicpc.net/problem/28290) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

많은 조건 분기, 구현

### 문제 설명

<p>평소 리듬게임을 즐겨하는 대소고 친구들은 서로 다른 타법을 가지고 있다.</p>

<p>타법은 안밖, 밖안, 계단, 역계단이 있다.</p>

<table class="table table-bordered">
	<caption>문자열 항목은 각 타법에서 나올 수 있는 문자열을 의미한다.</caption>
	<tbody>
		<tr>
			<td><strong>타법</strong></td>
			<td><strong>설명</strong></td>
			<td><strong>문자열</strong></td>
		</tr>
		<tr>
			<td><strong>안밖</strong></td>
			<td>검지 손가락에서 새끼손가락 순서대로 키보드를 치는 방법.</td>
			<td>"<code>fdsajkl;</code>" 또는 "<code>jkl;fdsa</code>"</td>
		</tr>
		<tr>
			<td><strong>밖안</strong></td>
			<td>새끼손가락에서 검지 손가락 순서대로 키보드를 치는 방법.</td>
			<td>"<code>asdf;lkj</code>" 또는 "<code>;lkjasdf</code>"</td>
		</tr>
		<tr>
			<td><strong>계단</strong></td>
			<td>왼쪽 새끼손가락에서 오른쪽 새끼손가락 순서대로 키보드를 치는 방법.</td>
			<td>"<code>asdfjkl;</code>"</td>
		</tr>
		<tr>
			<td><strong>역계단</strong></td>
			<td>오른쪽 새끼손가락에서 왼쪽 새끼손가락 순서대로 키보드를 치는 방법.</td>
			<td>"<code>;lkjfdsa</code>"</td>
		</tr>
	</tbody>
</table>

<p>하루는 대소고 친구가 찾아와 컴퓨터를 켠 뒤 메모장에 어떤 문자를 남겨 놓았다.</p>

<pre>asdfjkl;</pre>

<p>평소 리듬게임을 자주 하던 changwook987은 메모장에 문자를 쓴 친구가 <strong>계단 </strong>타법임을 눈치챘다.</p>

<p>친구의 타법을 알아보는 것이 재밌어진 changwook987은 다른 친구를 불러 메모장에 자신의 타법대로 입력해 보라고 했다.</p>

<p>다른 친구가 입력한 문자를 보고 무슨 타법으로 쳤는지 알아보자.</p>

### 입력 

 <p>길이가 8인 문자열 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D446 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>S</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$S$</span></mjx-container>가 주어진다. 문자열 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D446 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>S</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$S$</span></mjx-container>는 각 문자 <code>a</code>, <code>s</code>, <code>d</code>, <code>f</code>, <code>j</code>, <code>k</code>, <code>l</code>, <code>;</code>가 정확히 한 번씩 등장한다.</p>

### 출력 

 <p>출력은 입력에 따라 "<code>in-out</code>", "<code>out-in</code>", "<code>stairs</code>", "<code>reverse</code>" 중 하나를 출력한다.</p>

<ul>
	<li>입력이 <strong>안밖</strong>인 경우: <code>"in-out</code>"</li>
	<li>입력이 <strong>밖안</strong>인 경우: <code>"out-in</code>"</li>
	<li>입력이 <strong>계단</strong>인 경우: <code>"stairs</code>"</li>
	<li>입력이 <strong>역계단</strong>인 경우: "<code>reverse</code>"</li>
</ul>

<p>만약 입력이 안밖, 밖안, 계단, 역계단 중 하나도 아니라면 <code>"molu"</code>를 출력한다.</p>

