# [level Lv.0] 개미 군단 - 120837 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/120837) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩테스트 입문

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 0일 15:15:11

### 문제 설명

<p>개미 군단이 사냥을 나가려고 합니다. 개미군단은 사냥감의 체력에 딱 맞는 병력을 데리고 나가려고 합니다. 장군개미는 5의 공격력을, 병정개미는 3의 공격력을 일개미는 1의 공격력을 가지고 있습니다. 예를 들어 체력 23의 여치를 사냥하려고 할 때, 일개미 23마리를 데리고 가도 되지만, 장군개미 네 마리와 병정개미 한 마리를 데리고 간다면 더 적은 병력으로 사냥할 수 있습니다. 사냥감의 체력&nbsp;<code>hp</code>가 매개변수로 주어질 때, 사냥감의 체력에 딱 맞게 최소한의 병력을 구성하려면 몇 마리의 개미가 필요한지를 return하도록 solution 함수를 완성해주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>hp</code>는 자연수입니다.</li>
<li>0 ≤ <code>hp</code> ≤ 1000</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>hp</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>23</td>
<td>5</td>
</tr>
<tr>
<td>24</td>
<td>6</td>
</tr>
<tr>
<td>999</td>
<td>201</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li><code>hp</code>가 23이므로, 장군개미 네마리와 병정개미 한마리로 사냥할 수 있습니다. 따라서 5를 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li><code>hp</code>가 24이므로, 장군개미 네마리 병정개미 한마리 일개미 한마리로 사냥할 수 있습니다. 따라서 6을 return합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li><code>hp</code>가 999이므로, 장군개미 199 마리 병정개미 한마리 일개미 한마리로 사냥할 수 있습니다. 따라서 201을 return합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges