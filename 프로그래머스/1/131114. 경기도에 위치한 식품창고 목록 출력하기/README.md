# [level 1] 경기도에 위치한 식품창고 목록 출력하기 - 131114 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/131114) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > IS NULL

### 채점결과

Empty

### 제출 일자

2024년 2월 5일 0:56:59

### 문제 설명

<p>다음은 식품창고의 정보를 담은 <code>FOOD_WAREHOUSE</code> 테이블입니다. <code>FOOD_WAREHOUSE</code> 테이블은 다음과 같으며 <code>WAREHOUSE_ID</code>, <code>WAREHOUSE_NAME</code>, <code>ADDRESS</code>, <code>TLNO</code>, <code>FREEZER_YN</code>는 창고 ID, 창고 이름, 창고 주소, 전화번호, 냉동시설 여부를 의미합니다.</p>
<table class="table">
        <thead><tr>
<th>Column name</th>
<th>Type</th>
<th>Nullable</th>
</tr>
</thead>
        <tbody><tr>
<td>WAREHOUSE_ID</td>
<td>VARCHAR(10)</td>
<td>FALSE</td>
</tr>
<tr>
<td>WAREHOUSE_NAME</td>
<td>VARCHAR(20)</td>
<td>FALSE</td>
</tr>
<tr>
<td>ADDRESS</td>
<td>VARCHAR(100)</td>
<td>TRUE</td>
</tr>
<tr>
<td>TLNO</td>
<td>VARCHAR(20)</td>
<td>TRUE</td>
</tr>
<tr>
<td>FREEZER_YN</td>
<td>VARCHAR(1)</td>
<td>TRUE</td>
</tr>
</tbody>
      </table>
<hr>

<h5>문제</h5>

<p><code>FOOD_WAREHOUSE</code> 테이블에서 경기도에 위치한 창고의 ID, 이름, 주소, 냉동시설 여부를 조회하는 SQL문을 작성해주세요. 이때 냉동시설 여부가 NULL인 경우, 'N'으로 출력시켜 주시고 결과는 창고 ID를 기준으로 오름차순 정렬해주세요.</p>

<hr>

<h5>예시</h5>

<p><code>FOOD_WAREHOUSE</code> 테이블이 다음과 같을 때</p>
<table class="table">
        <thead><tr>
<th>WAREHOUSE_ID</th>
<th>WAREHOUSE_NAME</th>
<th>ADDRESS</th>
<th>TLNO</th>
<th>FREEZER_YN</th>
</tr>
</thead>
        <tbody><tr>
<td>WH0001</td>
<td>창고_경기1</td>
<td>경기도 안산시 상록구 용담로 141</td>
<td>031-152-1332</td>
<td>Y</td>
</tr>
<tr>
<td>WH0002</td>
<td>창고_충북1</td>
<td>충청북도 진천군 진천읍 씨제이로 110</td>
<td>043-623-9900</td>
<td>Y</td>
</tr>
<tr>
<td>WH0003</td>
<td>창고_경기2</td>
<td>경기도 이천시 마장면 덕평로 811</td>
<td>031-221-7241</td>
<td>NULL</td>
</tr>
<tr>
<td>WH0004</td>
<td>창고_경기3</td>
<td>경기도 김포시 대곶면 율생중앙로205번길</td>
<td>031-671-1900</td>
<td>N</td>
</tr>
<tr>
<td>WH0005</td>
<td>창고_충남1</td>
<td>충청남도 천안시 동남구 광덕면 신덕리1길 9</td>
<td>041-876-5421</td>
<td>Y</td>
</tr>
</tbody>
      </table>
<p>SQL을 실행하면 다음과 같이 출력되어야 합니다.</p>
<table class="table">
        <thead><tr>
<th>WAREHOUSE_ID</th>
<th>WAREHOUSE_NAME</th>
<th>ADDRESS</th>
<th>FREEZER_YN</th>
</tr>
</thead>
        <tbody><tr>
<td>WH0001</td>
<td>창고_경기1</td>
<td>경기도 안산시 상록구 용담로 141</td>
<td>Y</td>
</tr>
<tr>
<td>WH0003</td>
<td>창고_경기2</td>
<td>경기도 이천시 마장면 덕평로 811</td>
<td>N</td>
</tr>
<tr>
<td>WH0004</td>
<td>창고_경기3</td>
<td>경기도 김포시 대곶면 율생중앙로205번길</td>
<td>N</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges