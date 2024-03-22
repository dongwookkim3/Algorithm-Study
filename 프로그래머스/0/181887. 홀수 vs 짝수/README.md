# [level 0] 홀수 vs 짝수 - 181887 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181887) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 03월 22일 23:57:56

### 문제 설명

<p>정수 리스트 <code>num_list</code>가 주어집니다. 가장 첫 번째 원소를 1번 원소라고 할 때, 홀수 번째 원소들의 합과 짝수 번째 원소들의 합 중 큰 값을 return 하도록 solution 함수를 완성해주세요. 두 값이 같을 경우 그 값을 return합니다.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li>5 ≤ <code>num_list</code>의 길이 ≤ 50</li>
<li>-9 ≤ <code>num_list</code>의 원소 ≤ 9</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>num_list</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[4, 2, 6, 1, 7, 6]</td>
<td>17</td>
</tr>
<tr>
<td>[-1, 2, 5, 6, 3]</td>
<td>8</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>홀수 번째 원소들의 합은 4 + 6 + 7 = 17, 짝수 번째 원소들의 합은 2 + 1 + 6 = 9 이므로 17을 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>홀수 번째 원소들의 합은 -1 + 5 + 3 = 7, 짝수 번째 원소들의 합은 2 + 6 = 8 이므로 8을 return합니다.</li>
</ul>

<hr>

<p>※2023년 04월 24일 테스트 케이스가 추가되었습니다. 기존에 제출한 코드가 통과하지 못할 수 있습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges