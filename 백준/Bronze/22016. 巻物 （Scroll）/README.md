# [Bronze II] 巻物 (Scroll) - 22016 

[문제 링크](https://www.acmicpc.net/problem/22016) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 3월 14일 08:28:47

### 문제 설명

<p>JOI 高校の生徒である葵は，図書室で巻物を見つけた．この巻物には長さ <var>N</var> の文字列 <var>S</var> が書かれており，文字列 <var>S</var> の各文字は <code>j</code>，<code>o</code>，<code>i</code>，<code>J</code>，<code>O</code>，<code>I</code> のいずれかである．</p>

<p>この巻物は持ち出しが禁じられているため，葵は文字列 <var>S</var> をすべて書き写すことにした．葵が記した文字列は <var>T</var> である．</p>

<p>しかし，葵は誤って前から <var>K</var> 番目 (<var>1 ≦ K ≦ N</var>) 以降の文字（<var>K</var> 番目の文字を含む）の大文字と小文字を逆に記してしまった．すなわち，<var>1 ≦ i ≦ K-1</var> のとき，<var>S</var> の <var>i</var> 番目の文字と <var>T</var> の <var>i</var> 番目の文字は等しく，<var>K ≦ i ≦ N</var> のとき，<var>S</var> の <var>i</var> 番目の文字が大文字であれば <var>T</var> の <var>i</var> 番目の文字は小文字であり，<var>S</var> の <var>i</var> 番目の文字が小文字であれば <var>T</var> の <var>i</var> 番目の文字は大文字である．</p>

<p>文字列 <var>T</var> とその長さ <var>N</var>，値 <var>K</var> が与えられたとき，巻物に書かれていた文字列 <var>S</var> を復元するプログラムを作成せよ．</p>

### 입력 

 <p>入力は以下の形式で標準入力から与えられる．</p>

<pre><var>N</var> <var>K</var>
<var>T</var></pre>

### 출력 

 <p>標準出力に，巻物に書かれていた文字列 <var>S</var> を <var>1</var> 行で出力せよ．</p>

