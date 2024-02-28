# [Bronze II] Standing Ovation (Small) - 12166 

[문제 링크](https://www.acmicpc.net/problem/12166) 

### 성능 요약

메모리: 2024 KB, 시간: 4 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2024년 2월 28일 17:23:36

### 문제 설명

<p>It's opening night at the opera, and your friend is the prima donna (the lead female singer). You will not be in the audience, but you want to make sure she receives a standing ovation -- with every audience member standing up and clapping their hands for her.<br>
<br>
Initially, the entire audience is seated. Everyone in the audience has a <em>shyness level</em>. An audience member with shyness level <strong>S<sub>i</sub></strong> will wait until at least <strong>S<sub>i</sub></strong> other audience members have already stood up to clap, and if so, she will immediately stand up and clap. If <strong>S<sub>i</sub></strong> = 0, then the audience member will always stand up and clap immediately, regardless of what anyone else does. For example, an audience member with <strong>S<sub>i</sub></strong> = 2 will be seated at the beginning, but will stand up to clap later after she sees at least two other people standing and clapping.<br>
<br>
You know the shyness level of everyone in the audience, and you are prepared to invite additional friends of the prima donna to be in the audience to ensure that everyone in the crowd stands up and claps in the end. Each of these friends may have any shyness value that you wish, not necessarily the same. What is the minimum number of friends that you need to invite to guarantee a standing ovation?</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <strong>T</strong>.  <strong>T</strong> test cases follow. Each consists of one line with <strong>S<sub>max</sub></strong>, the maximum shyness level of the shyest person in the audience, followed by a string of <strong>S<sub>max</sub> + 1</strong> single digits. The <strong>k</strong>th digit of this string (counting starting from 0) represents how many people in the audience have shyness level <strong>k</strong>. For example, the string "409" would mean that there were four audience members with <strong>S<sub>i</sub></strong> = 0 and nine audience members with <strong>S<sub>i</sub></strong> = 2 (and none with <strong>S<sub>i</sub></strong> = 1 or any other value). Note that there will initially always be between 0 and 9 people with each shyness level.<br>
<br>
The string will never end in a 0. Note that this implies that there will always be at least one person in the audience.</p>

<h3>Limits</h3>

<ul>
	<li>1 ≤ <strong>T</strong> ≤ 100.</li>
	<li>0 ≤ <strong>S<sub>max</sub></strong> ≤ 6.</li>
</ul>

### 출력 

 <p>For each test case, output one line containing "Case #x: y", where x is the test case number (starting from 1) and y is the minimum number of friends you must invite.</p>

