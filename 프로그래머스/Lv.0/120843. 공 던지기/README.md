# [level Lv.0] 공 던지기 - 120843 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120843) 

### 성능 요약

메모리: 4.22 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 0일 15:45:55

### 문제 설명

<p>머쓱이는 친구들과 동그랗게 서서 공 던지기 게임을 하고 있습니다. 공은 1번부터 던지며 오른쪽으로 한 명을 건너뛰고 그다음 사람에게만 던질 수 있습니다. 친구들의 번호가 들어있는 정수 배열 <code>numbers</code>와 정수 <code>K</code>가 주어질 때, <code>k</code>번째로 공을 던지는 사람의 번호는 무엇인지 return 하도록 solution 함수를 완성해보세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>2 &lt; <code>numbers</code>의 길이 &lt; 100</li>
<li>0 &lt; <code>k</code> &lt; 1,000</li>
<li><code>numbers</code>의 첫 번째와 마지막 번호는 실제로 바로 옆에 있습니다.</li>
<li><code>numbers</code>는 1부터 시작하며 번호는 순서대로 올라갑니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>numbers</th>
<th>k</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1, 2, 3, 4]</td>
<td>2</td>
<td>3</td>
</tr>
<tr>
<td>[1, 2, 3, 4, 5, 6]</td>
<td>5</td>
<td>3</td>
</tr>
<tr>
<td>[1, 2, 3]</td>
<td>3</td>
<td>2</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>1번은 첫 번째로 3번에게 공을 던집니다.</li>
<li>3번은 두 번째로 1번에게 공을 던집니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>1번은 첫 번째로 3번에게 공을 던집니다.</li>
<li>3번은 두 번째로 5번에게 공을 던집니다.</li>
<li>5번은 세 번째로 1번에게 공을 던집니다.</li>
<li>1번은 네 번째로 3번에게 공을 던집니다.</li>
<li>3번은 다섯 번째로 5번에게 공을 던집니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>1번은 첫 번째로 3번에게 공을 던집니다.</li>
<li>3번은 두 번째로 2번에게 공을 던집니다.</li>
<li>2번은 세 번째로 1번에게 공을 던집니다.</li>
</ul>

<p>※ 공지 - 2023년 1월 25일 테스트 케이스가 추가되었습니다. 기존에 제출한 코드가 통과하지 못할 수도 있습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges