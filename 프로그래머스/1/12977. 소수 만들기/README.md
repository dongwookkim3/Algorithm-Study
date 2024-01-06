# [level 1] 소수 만들기 - 12977 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/12977) 

### 성능 요약

메모리: 4.13 MB, 시간: 0.18 ms

### 구분

코딩테스트 연습 > Summer／Winter Coding（～2018）

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 6일 19:9:49

### 문제 설명

<p>주어진 숫자 중 3개의 수를 더했을 때 소수가 되는 경우의 개수를 구하려고 합니다. 숫자들이 들어있는 배열 nums가 매개변수로 주어질 때, nums에 있는 숫자들 중 서로 다른 3개를 골라 더했을 때 소수가 되는 경우의 개수를 return 하도록 solution 함수를 완성해주세요.</p>

<h5>제한사항</h5>

<ul>
<li>nums에 들어있는 숫자의 개수는 3개 이상 50개 이하입니다.</li>
<li>nums의 각 원소는 1 이상 1,000 이하의 자연수이며, 중복된 숫자가 들어있지 않습니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>nums</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1,2,3,4]</td>
<td>1</td>
</tr>
<tr>
<td>[1,2,7,6,4]</td>
<td>4</td>
</tr>
</tbody>
      </table>
<h5>입출력 예 설명</h5>

<p>입출력 예 #1<br>
[1,2,4]를 이용해서 7을 만들 수 있습니다.</p>

<p>입출력 예 #2<br>
[1,2,4]를 이용해서 7을 만들 수 있습니다.<br>
[1,4,6]을 이용해서 11을 만들 수 있습니다.<br>
[2,4,7]을 이용해서 13을 만들 수 있습니다.<br>
[4,6,7]을 이용해서 17을 만들 수 있습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges