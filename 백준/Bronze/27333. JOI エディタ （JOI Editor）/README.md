# [Bronze III] JOI エディタ (JOI Editor) - 27333 

[문제 링크](https://www.acmicpc.net/problem/27333) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 22일 21:32:25

### 문제 설명

<p>ただ奇妙な発明で知られる JOI 社は，最近 JOI Editor というテキストエディタを開発した．</p>

<p>このテキストエディタは，<code>j</code>，<code>o</code>，<code>i</code> の <var>3</var> つのキーで操作することができる．<code>j</code>，<code>o</code>，<code>i</code> のいずれかのキーを押すと，そのキーに書かれている英小文字が入力されるが，同じ英小文字が <var>2</var> つ隣接すると，ただちにその <var>2</var> 文字が対応する英大文字に置換される．すなわち，<code>jj</code> は <code>JJ</code> に，<code>oo</code> は <code>OO</code> に，<code>ii</code> は <code>II</code> に置換される．</p>

<p>例えば，<code>j</code>，<code>o</code>，<code>o</code>，<code>o</code>，<code>i</code> のキーをこの順番で押すと，<code>j</code>，<code>o</code>，<code>o</code> までキーを押した直後，<var>2</var> 文字目と <var>3</var> 文字目の並びが <code>oo</code> となる．同じ英小文字が <var>2</var> つ隣接しているので，この <var>2</var> 文字がただちに <code>OO</code> に置換される．最終的に JOI Editor に書かれている文字列は <code>jOOoi</code> となる．<code>joOOi</code> や <code>jOOOi</code> とはならないことに注意せよ．</p>

<p>長さ <var>N</var> の文字列 <var>S</var> が与えられる．<var>S</var> の各文字は <code>j</code>，<code>o</code>，<code>i</code> のいずれかである．</p>

<p><var>N</var> 回キーを押す．<var>S</var> の <var>i</var> 文字目 (<var>1 ≦ i ≦ N</var>) は <var>i</var> 回目に押すキーを表す．最終的に JOI Editor に書かれている文字列を出力せよ．</p>

### 입력 

 <p>入力は以下の形式で与えられる．</p>

<pre><var>N</var>
<var>S</var></pre>

### 출력 

 <p>最終的に JOI Editor に書かれている文字列を出力せよ．</p>

