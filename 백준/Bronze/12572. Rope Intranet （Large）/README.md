# [Bronze II] Rope Intranet (Large) - 12572 

[문제 링크](https://www.acmicpc.net/problem/12572) 

### 성능 요약

메모리: 2020 KB, 시간: 52 ms

### 분류

브루트포스 알고리즘, 구현

### 제출 일자

2024년 2월 28일 21:41:36

### 문제 설명

<p>A company is located in two very tall buildings. The company intranet connecting the buildings consists of many wires, each connecting a window on the first building to a window on the second building.</p>

<p>You are looking at those buildings from the side, so that one of the buildings is to the left and one is to the right. The windows on the left building are seen as points on its right wall, and the windows on the right building are seen as points on its left wall. Wires are straight segments connecting a window on the left building to a window on the right building.</p>

<p><img src="https://onlinejudgeimages.s3.amazonaws.com/problem/12571/images-29.png" style="border:0px; vertical-align:middle"></p>

<p>You've noticed that no two wires share an endpoint (in other words, there's at most one wire going out of each window). However, from your viewpoint, some of the wires intersect midway. You've also noticed that exactly two wires meet at each intersection point.</p>

<p>On the above picture, the intersection points are the black circles, while the windows are the white circles.</p>

<p>How many intersection points do you see?</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <strong>T</strong>. <strong>T</strong> test cases follow. Each case begins with a line containing an integer <strong>N</strong>, denoting the number of wires you see.</p>

<p>The next <strong>N</strong> lines each describe one wire with two integers <strong>A<sub>i</sub></strong> and <strong>B<sub>i</sub></strong>. These describe the windows that this wire connects: <strong>A<sub>i</sub></strong> is the height of the window on the left building, and <strong>B<sub>i</sub></strong>is the height of the window on the right building.</p>

<h3>Limits</h3>

<ul>
	<li>1 ≤ <strong>T</strong> ≤ 15.</li>
	<li>1 ≤ <strong>A<sub>i</sub></strong> ≤ 10<sup>4</sup>.</li>
	<li>1 ≤ <strong>B<sub>i</sub></strong> ≤ 10<sup>4</sup>.</li>
	<li>Within each test case, all <strong>A<sub>i</sub></strong> are different.</li>
	<li>Within each test case, all <strong>B<sub>i</sub></strong> are different.</li>
	<li>No three wires intersect at the same point.</li>
	<li>1 ≤ <strong>N</strong> ≤ 1000.</li>
</ul>

### 출력 

 <p>For each test case, output one line containing "Case #x: y", where x is the case number (starting from 1) and y is the number of intersection points you see.</p>

