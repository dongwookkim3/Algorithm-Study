# [level Lv.0] 구슬을 나누는 경우의 수 - 120840 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120840) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 0일 15:36:9

### 문제 설명

<p>머쓱이는 구슬을 친구들에게 나누어주려고 합니다. 구슬은 모두 다르게 생겼습니다. 머쓱이가 갖고 있는 구슬의 개수 <code>balls</code>와 친구들에게 나누어 줄 구슬 개수 <code>share</code>이 매개변수로 주어질 때, <code>balls</code>개의 구슬 중 <code>share</code>개의 구슬을 고르는 가능한 모든 경우의 수를 return 하는 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>balls</code> ≤ 30</li>
<li>1 ≤ <code>share</code> ≤ 30</li>
<li>구슬을 고르는 순서는 고려하지 않습니다.</li>
<li><code>share</code> ≤ <code>balls</code></li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>balls</th>
<th>share</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td>2</td>
<td>3</td>
</tr>
<tr>
<td>5</td>
<td>3</td>
<td>10</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>서로 다른 구슬 3개 중 2개를 고르는 경우의 수는 3입니다.
<img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/668adf7a-38b1-4112-bbc5-4fab429168c9/%E1%84%89%E1%85%B3%E1%84%8F%E1%85%B3%E1%84%85%E1%85%B5%E1%86%AB%E1%84%89%E1%85%A3%E1%86%BA%202022-08-01%20%E1%84%8B%E1%85%A9%E1%84%92%E1%85%AE%204.15.55.png" title="" alt="스크린샷 2022-08-01 오후 4.15.55.png"></li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>서로 다른 구슬 5개 중 3개를 고르는 경우의 수는 10입니다.</li>
</ul>

<hr>

<h5>Hint</h5>

<ul>
<li>서로 다른 n개 중 m개를 뽑는 경우의 수 공식은 다음과 같습니다.
<img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/54c8b2b9-f88c-4a09-8956-7560ff7ea918/%E1%84%89%E1%85%B3%E1%84%8F%E1%85%B3%E1%84%85%E1%85%B5%E1%86%AB%E1%84%89%E1%85%A3%E1%86%BA%202022-08-01%20%E1%84%8B%E1%85%A9%E1%84%92%E1%85%AE%204.37.53.png" title="" alt="스크린샷 2022-08-01 오후 4.37.53.png"></li>
</ul>

<hr>

<p>※ 공지 - 2022년 10월 11일 제한 사항 및 테스트케이스가 수정되었습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges