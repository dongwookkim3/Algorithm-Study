# [Bronze II] GBus count (Large) - 12185 

[문제 링크](https://www.acmicpc.net/problem/12185) 

### 성능 요약

메모리: 2020 KB, 시간: 40 ms

### 분류

구현

### 제출 일자

2024년 2월 28일 17:56:38

### 문제 설명

<p>There exist some cities that are built along a straight road. The cities are numbered 1, 2, 3... from left to right.</p>

<p>There are <b>N</b> GBuses that operate along this road. For each GBus, we know the range of cities that it serves: the i-th gBus serves the cities with numbers between <b>A<sub>i</sub></b> and <b>B<sub>i</sub></b>, inclusive.</p>

<p>We are interested in a particular subset of <b>P</b> cities. For each of those cities, we need to find out how many GBuses serve that particular city.</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <b>T</b>. Then, <b>T</b> test cases follow; each case is separated from the next by one <u>blank</u> line. (Notice that this is unusual for Kickstart data sets.)</p>

<p>In each test case:</p>

<ul>
	<li>The first line contains one integer <b>N</b>: the number of GBuses.</li>
	<li>The second line contains 2<b>N</b> integers representing the ranges of cities that the buses serve, in the form <b>A<sub>1</sub> B<sub>1</sub> A<sub>2</sub> B<sub>2</sub> A<sub>3</sub> B<sub>3</sub></b> ... <b>A<sub>N</sub> B<sub>N</sub></b>. That is, the first GBus serves the cities numbered from <b>A<sub>1</sub></b> to <b>B<sub>1</sub></b> (inclusive), and so on.</li>
	<li>The third line contains one integer <b>P</b>: the number of cities we are interested in, as described above. (Note that this is not necessarily the same as the total number of cities in the problem, which is not given.)</li>
	<li>Finally, there are <b>P</b> more lines; the i-th of these contains the number <b>C<sub>i</sub></b> of a city we are interested in.</li>
</ul>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where <code>x</code> is the number of the test case (starting from 1), and <code>y</code> is a list of <b>P</b> integers, in which the i-th integer is the number of GBuses that serve city <b>C<sub>i</sub></b>.</p>

