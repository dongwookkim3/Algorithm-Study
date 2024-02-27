# [Bronze I] Moist (Small2) - 12086 

[문제 링크](https://www.acmicpc.net/problem/12086) 

### 성능 요약

메모리: 2024 KB, 시간: 8 ms

### 분류

구현, 정렬, 문자열

### 제출 일자

2024년 2월 28일 06:00:19

### 문제 설명

<p>Moist has a hobby -- collecting figure skating trading cards. His card collection has been growing, and it is now too large to keep in one disorganized pile. Moist needs to sort the cards in alphabetical order, so that he can find the cards that he wants on short notice whenever it is necessary.</p>

<p>The problem is -- Moist can't actually pick up the cards because they keep sliding out his hands, and the sweat causes permanent damage. Some of the cards are rather expensive, mind you. To facilitate the sorting, Moist has convinced Dr. Horrible to build him a sorting robot. However, in his rather horrible style, Dr. Horrible has decided to make the sorting robot charge Moist a fee of \$1 whenever it has to move a trading card during the sorting process.</p>

<p>Moist has figured out that the robot's sorting mechanism is very primitive. It scans the deck of cards from top to bottom. Whenever it finds a card that is lexicographically smaller than the previous card, it moves that card to its correct place in the stack above. This operation costs \$1, and the robot resumes scanning down towards the bottom of the deck, moving cards one by one until the entire deck is sorted in lexicographical order from top to bottom.</p>

<p>As wet luck would have it, Moist is almost broke, but keeping his trading cards in order is the only remaining joy in his miserable life. He needs to know how much it would cost him to use the robot to sort his deck of cards.</p>

### 입력 

 <p>The first line of the input gives the number of test cases, <strong>T</strong>.  <strong>T</strong> test cases follow. Each one starts with a line containing a single integer, <strong>N</strong>. The next <strong>N</strong> lines each contain the name of a figure skater, in order from the top of the deck to the bottom.</p>

<h3>Limits</h3>

<ul>
	<li>1 ≤ <strong>T</strong> ≤ 100.</li>
	<li>Each name will consist of only letters and the space character.</li>
	<li>Each name will contain at most 100 characters.</li>
	<li>No name with start or end with a space.</li>
	<li>No name will appear more than once in the same test case.</li>
	<li>Lexicographically, the space character comes first, then come the upper case letters, then the lower case letters.</li>
	<li>1 ≤ <strong>N</strong> ≤ 100.</li>
</ul>

### 출력 

 <p>For each test case, output one line containing "Case #x: y", where x is the case number (starting from 1) and y is the number of dollars it would cost Moist to use the robot to sort his deck of trading cards.</p>

