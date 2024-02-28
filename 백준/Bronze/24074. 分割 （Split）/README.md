# [Bronze II] 分割 (Split) - 24074 

[문제 링크](https://www.acmicpc.net/problem/24074) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 2월 29일 08:42:18

### 문제 설명

<p>長さ <var>N</var> の整数列 <var>A = (A<sub>1</sub>, A<sub>2</sub>, ..., A<sub>N</sub>)</var> が与えられる．数列 <var>A</var> の値はすべて異なる．</p>

<p>最大値で数列を分割したとき，最大値より前にある値の和と，最大値より後ろにある値の和を出力せよ．</p>

<p>すなわち，数列 <var>A</var> の最大値を <var>A<sub>x</sub></var> とすると，<var>A<sub>1</sub> + A<sub>2</sub> + … + A<sub>x-1</sub></var> と <var>A<sub>x+1</sub> + A<sub>x+2</sub> + … +A<sub>N</sub></var> を出力せよ．</p>

<p>ただし最大値より前に値がない場合，最大値より前にある値の和は <var>0</var> になる．</p>

<p>同様に最大値より後ろに値がない場合，最大値より後ろにある値の和は <var>0</var> になる．</p>

### 입력 

 <p>入力は以下の形式で標準入力から与えられる．</p>

<pre><var>N</var>
<var>A<sub>1</sub></var> <var>A<sub>2</sub></var> <var>…</var> <var>A<sub>N</sub></var></pre>

### 출력 

 <p>出力は <var>2</var> 行からなる．</p>

<p><var>1</var> 行目に，整数列 <var>A</var> の，最大値より前にある値の和を出力せよ．</p>

<p><var>2</var> 行目に，整数列 <var>A</var> の，最大値より後ろにある値の和を出力せよ．</p>

