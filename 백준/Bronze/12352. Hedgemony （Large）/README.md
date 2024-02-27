# [Bronze III] Hedgemony (Large) - 12352 

[문제 링크](https://www.acmicpc.net/problem/12352) 

### 성능 요약

메모리: 2020 KB, 시간: 8 ms

### 분류

사칙연산, 구현, 수학, 시뮬레이션

### 제출 일자

2024년 2월 28일 05:34:40

### 문제 설명

<p>Lord Cohen is a baron with the best-looking hedge in the country. His award-winning hedge consists of <strong>N</strong> bushes planted side by side in a straight line. The bushes are numbered left to right from 1 to <strong>N</strong>. The baron's neighbours all cut their own hedges so that all of their bushes have the same height. But Lord Cohen has a secret key to his landscaping success. His gardener follows a special rule when trimming the hedge, which is why the baron's hedge is always in its award-winning condition.</p>

<p>The rule is -- to start on the left at bush #2 and move to the right. The gardener cuts the top of each bush to make it exactly as tall as the average of the two bushes on either side. If the bush is already as short as the average or shorter, then the gardener does not touch this bush and moves on to the next bush on the right, until the second-to-last bush. The baron is certain that this procedure is the key to success.</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <strong>T</strong>. <strong>T</strong> test cases follow. Each one consists of two lines. The first line will contain an integer <strong>N</strong>, and the second line will contain <strong>N</strong> space-separated integers denoting the heights of the bushes, from bush #1 to bush #<strong>N</strong>.</p>

<p>Limits</p>

<ul>
	<li>1 ≤ <strong>T</strong> ≤ 100.</li>
	<li>Each height will be an integer betwween 1 and 1000, inclusive.</li>
	<li>3 ≤ <strong>N</strong> ≤ 1000.</li>
</ul>

### 출력 

 <p>For each test case, output one line containing "Case #x: y", where x is the case number (starting from 1) and y is the height of bush number <strong>N</strong> - 1 after the gardener has finished trimming the hedge according to the baron's special procedure.</p>

<p>Answers with a relative error of at most 10<sup>-4</sup> will be considered correct.</p>

