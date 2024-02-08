# [level 1] 강원도에 위치한 생산공장 목록 출력하기 - 131112 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/131112) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > SELECT

### 채점결과

Empty

### 제출 일자

2024년 2월 5일 0:49:41

### 문제 설명

<p>다음은 식품공장의 정보를 담은 <code>FOOD_FACTORY</code> 테이블입니다. <code>FOOD_FACTORY</code> 테이블은 다음과 같으며 <code>FACTORY_ID</code>, <code>FACTORY_NAME</code>, <code>ADDRESS</code>, <code>TLNO</code>는 각각 공장 ID, 공장 이름, 주소, 전화번호를 의미합니다.</p>
<table class="table">
        <thead><tr>
<th>Column name</th>
<th>Type</th>
<th>Nullable</th>
</tr>
</thead>
        <tbody><tr>
<td>FACTORY_ID</td>
<td>VARCHAR(10)</td>
<td>FALSE</td>
</tr>
<tr>
<td>FACTORY_NAME</td>
<td>VARCHAR(50)</td>
<td>FALSE</td>
</tr>
<tr>
<td>ADDRESS</td>
<td>VARCHAR(100)</td>
<td>FALSE</td>
</tr>
<tr>
<td>TLNO</td>
<td>VARCHAR(20)</td>
<td>TRUE</td>
</tr>
</tbody>
      </table>
<hr>

<h5>문제</h5>

<p><code>FOOD_FACTORY</code> 테이블에서 강원도에 위치한 식품공장의 공장 ID, 공장 이름, 주소를 조회하는 SQL문을 작성해주세요. 이때 결과는 공장 ID를 기준으로 오름차순 정렬해주세요.</p>

<hr>

<h5>예시</h5>

<p><code>FOOD_FACTORY</code> 테이블이 다음과 같을 때</p>
<table class="table">
        <thead><tr>
<th>FACTORY_ID</th>
<th>FACTORY_NAME</th>
<th>ADDRESS</th>
<th>TLNO</th>
</tr>
</thead>
        <tbody><tr>
<td>FT19980003</td>
<td>(주)맛있는라면</td>
<td>강원도 정선군 남면 칠현로 679</td>
<td>033-431-3122</td>
</tr>
<tr>
<td>FT19980004</td>
<td>(주)맛있는기름</td>
<td>경기도 평택시 포승읍 포승공단순환로 245</td>
<td>031-651-2410</td>
</tr>
<tr>
<td>FT20010001</td>
<td>(주)맛있는소스</td>
<td>경상북도 구미시 1공단로7길 58-11</td>
<td>054-231-2121</td>
</tr>
<tr>
<td>FT20010002</td>
<td>(주)맛있는통조림</td>
<td>전라남도 영암군 미암면 곤미현로 1336</td>
<td>061-341-5210</td>
</tr>
<tr>
<td>FT20100001</td>
<td>(주)맛있는차</td>
<td>전라남도 장성군 서삼면 장산리 233-1번지</td>
<td>061-661-1420</td>
</tr>
<tr>
<td>FT20100002</td>
<td>(주)맛있는김치</td>
<td>충청남도 아산시 탕정면 탕정면로 485</td>
<td>041-241-5421</td>
</tr>
<tr>
<td>FT20100003</td>
<td>(주)맛있는음료</td>
<td>강원도 원주시 문막읍 문막공단길 154</td>
<td>033-232-7630</td>
</tr>
<tr>
<td>FT20100004</td>
<td>(주)맛있는국</td>
<td>강원도 평창군 봉평면 진조길 227-35</td>
<td>033-323-6640</td>
</tr>
<tr>
<td>FT20110001</td>
<td>(주)맛있는밥</td>
<td>경기도 화성시 팔탄면 가재리 34번지</td>
<td>031-661-1532</td>
</tr>
<tr>
<td>FT20110002</td>
<td>(주)맛있는과자</td>
<td>광주광역시 북구 하서로 222</td>
<td>062-211-7759</td>
</tr>
</tbody>
      </table>
<p>SQL을 실행하면 다음과 같이 출력되어야 합니다.</p>
<table class="table">
        <thead><tr>
<th>FACTORY_ID</th>
<th>FACTORY_NAME</th>
<th>ADDRESS</th>
</tr>
</thead>
        <tbody><tr>
<td>FT19980003</td>
<td>(주)맛있는라면</td>
<td>강원도 정선군 남면 칠현로 679</td>
</tr>
<tr>
<td>FT20100003</td>
<td>(주)맛있는음료</td>
<td>강원도 원주시 문막읍 문막공단길 154</td>
</tr>
<tr>
<td>FT20100004</td>
<td>(주)맛있는국</td>
<td>강원도 평창군 봉평면 진조길 227-35</td>
</tr>
</tbody>
      </table>

> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges