# [Bronze III] 3 つの箱 (Three Boxes) - 27325 

[문제 링크](https://www.acmicpc.net/problem/27325) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 시뮬레이션

### 제출 일자

2024년 2월 28일 02:43:26

### 문제 설명

<p>長さ <var>N</var> の文字列 <var>S</var> が与えられる．<var>S</var> の各文字は <code>L</code> または <code>R</code> である．</p>

<p><var>1</var> つのボールと，ボールを入れることができる箱が <var>3</var> つある．箱には <var>1</var>，<var>2</var>，<var>3</var> と番号が付けられている．</p>

<p>最初，箱 <var>1</var> にボールが入っていた．</p>

<p>ビーバーのビ太郎は，この状態から箱とボールに対して <var>N</var> 回の操作を行った．</p>

<p><var>i</var> 回目 (<var>1 ≦ i ≦ N</var>) の操作は，次のように行われた．</p>

<ul>
	<li>ボールが入っている箱を箱 <var>x</var> とし，箱 <var>x</var> からボールを取り出す．その後，文字列 <var>S</var> の <var>i</var> 文字目に従って，以下のいずれかを行う．

	<ul>
		<li>文字列 <var>S</var> の <var>i</var> 文字目が <code>L</code> の場合，箱 <var>x-1</var> にボールを入れる．ただし，<var>x</var> が <var>1</var> である場合は箱 <var>1</var> にボールを入れる．</li>
		<li>文字列 <var>S</var> の <var>i</var> 文字目が <code>R</code> の場合，箱 <var>x+1</var> にボールを入れる．ただし，<var>x</var> が <var>3</var> である場合は箱 <var>3</var> にボールを入れる．</li>
	</ul>
	</li>
</ul>

<p><var>N</var> 回の操作を通じて箱 <var>3</var> にボールを入れた回数を出力せよ．</p>

### 입력 

 <p>入力は以下の形式で標準入力から与えられる．</p>

<pre><var>N</var>
<var>S</var></pre>

### 출력 

 <p><var>N</var> 回の操作を通じて箱 <var>3</var> にボールを入れた回数を出力せよ．</p>

