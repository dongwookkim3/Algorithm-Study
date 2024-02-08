# [level 2] 동물 수 구하기 - 59406 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/59406) 

### 성능 요약

메모리: 0.0 MB, 시간: 0.00 ms

### 구분

코딩테스트 연습 > SUM， MAX， MIN

### 채점결과

Empty

### 제출 일자

2024년 2월 5일 0:58:33

### 문제 설명

<p><code>ANIMAL_INS</code> 테이블은 동물 보호소에 들어온 동물의 정보를 담은 테이블입니다. <code>ANIMAL_INS</code> 테이블 구조는 다음과 같으며, <code>ANIMAL_ID</code>, <code>ANIMAL_TYPE</code>, <code>DATETIME</code>, <code>INTAKE_CONDITION</code>, <code>NAME</code>, <code>SEX_UPON_INTAKE</code>는 각각 동물의 아이디, 생물 종, 보호 시작일, 보호 시작 시 상태, 이름, 성별 및 중성화 여부를 나타냅니다.</p>
<table class="table">
        <thead><tr>
<th>NAME</th>
<th>TYPE</th>
<th>NULLABLE</th>
</tr>
</thead>
        <tbody><tr>
<td>ANIMAL_ID</td>
<td>VARCHAR(N)</td>
<td>FALSE</td>
</tr>
<tr>
<td>ANIMAL_TYPE</td>
<td>VARCHAR(N)</td>
<td>FALSE</td>
</tr>
<tr>
<td>DATETIME</td>
<td>DATETIME</td>
<td>FALSE</td>
</tr>
<tr>
<td>INTAKE_CONDITION</td>
<td>VARCHAR(N)</td>
<td>FALSE</td>
</tr>
<tr>
<td>NAME</td>
<td>VARCHAR(N)</td>
<td>TRUE</td>
</tr>
<tr>
<td>SEX_UPON_INTAKE</td>
<td>VARCHAR(N)</td>
<td>FALSE</td>
</tr>
</tbody>
      </table>
<p>동물 보호소에 동물이 몇 마리 들어왔는지 조회하는 SQL 문을 작성해주세요. </p>

<h5>예시</h5>

<p>예를 들어 <code>ANIMAL_INS</code> 테이블이 다음과 같다면</p>
<table class="table">
        <thead><tr>
<th>ANIMAL_ID</th>
<th>ANIMAL_TYPE</th>
<th>DATETIME</th>
<th>INTAKE_CONDITION</th>
<th>NAME</th>
<th>SEX_UPON_INTAKE</th>
</tr>
</thead>
        <tbody><tr>
<td>A399552</td>
<td>Dog</td>
<td>2013-10-14 15:38:00</td>
<td>Normal</td>
<td>Jack</td>
<td>Neutered Male</td>
</tr>
<tr>
<td>A379998</td>
<td>Dog</td>
<td>2013-10-23 11:42:00</td>
<td>Normal</td>
<td>Disciple</td>
<td>Intact Male</td>
</tr>
<tr>
<td>A370852</td>
<td>Dog</td>
<td>2013-11-03 15:04:00</td>
<td>Normal</td>
<td>Katie</td>
<td>Spayed Female</td>
</tr>
<tr>
<td>A403564</td>
<td>Dog</td>
<td>2013-11-18 17:03:00</td>
<td>Normal</td>
<td>Anna</td>
<td>Spayed Female</td>
</tr>
</tbody>
      </table>
<p>동물 보호소에 들어온 동물은 4마리입니다. 따라서 SQL문을 실행하면 다음과 같이 나와야 합니다.</p>
<table class="table">
        <thead><tr>
<th>count</th>
</tr>
</thead>
        <tbody><tr>
<td>4</td>
</tr>
</tbody>
      </table>
<p>※ 컬럼 이름(위 예제에서는 count)은 일치하지 않아도 됩니다.</p>

<hr>

<p>본 문제는 <a href="https://www.kaggle.com/aaronschlegel/austin-animal-center-shelter-intakes-and-outcomes" target="_blank" rel="noopener">Kaggle의 "Austin Animal Center Shelter Intakes and Outcomes"</a>에서 제공하는 데이터를 사용하였으며 <a href="https://opendatacommons.org/licenses/odbl/1.0/" target="_blank" rel="noopener">ODbL</a>의 적용을 받습니다.</p>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges