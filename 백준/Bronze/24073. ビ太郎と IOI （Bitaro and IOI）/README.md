# [Bronze II] ビ太郎と IOI (Bitaro and IOI) - 24073 

[문제 링크](https://www.acmicpc.net/problem/24073) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

브루트포스 알고리즘, 문자열

### 제출 일자

2024년 2월 29일 11:33:05

### 문제 설명

<p>長さ <var>N</var> の文字列 <var>S</var> が与えられる．<var>S</var> の各文字は <code>B</code>，<code>I</code>，<code>T</code>，<code>A</code>，<code>R</code>，<code>O</code> のいずれかである．</p>

<p>文字列 <var>S</var> の (連続しているとは限らない) 部分列に <code>IOI</code> が存在するか判定せよ．つまり，次の条件を満たす <var>3</var> つの整数の組 <var>(i,j,k)</var> が存在するか判定せよ．</p>

<ul>
	<li><var>1 ≦ i ＜ j ＜ k ≦ N</var>．</li>
	<li><var>S</var> の <var>i</var> 文字目は <code>I</code> である．</li>
	<li><var>S</var> の <var>j</var> 文字目は <code>O</code> である．</li>
	<li><var>S</var> の <var>k</var> 文字目は <code>I</code> である．</li>
</ul>

### 입력 

 <p>入力は以下の形式で標準入力から与えられる．</p>

<pre><var>N</var>
<var>S</var></pre>

### 출력 

 <p>文字列 <var>S</var> の部分列に <code>IOI</code> が存在する場合は <code>Yes</code> を，そうでない場合は <code>No</code> を出力せよ．</p>

