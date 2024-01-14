# [level Lv.0] 주사위 게임 2 - 181930 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/181930) 

### 성능 요약

메모리: 3.67 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 0일 20:38:48

### 문제 설명

<p>1부터 6까지 숫자가 적힌 주사위가 세 개 있습니다. 세 주사위를 굴렸을 때 나온 숫자를 각각 <code>a</code>, <code>b</code>, <code>c</code>라고 했을 때 얻는 점수는 다음과 같습니다.</p>

<ul>
<li>세 숫자가 모두 다르다면 <code>a</code> + <code>b</code> + <code>c</code> 점을 얻습니다.</li>
<li>세 숫자 중 어느 두 숫자는 같고 나머지 다른 숫자는 다르다면 (<code>a</code> + <code>b</code> + <code>c</code>) × (<code>a</code><sup>2</sup> + <code>b</code><sup>2</sup> + <code>c</code><sup>2</sup> )점을 얻습니다.</li>
<li>세 숫자가 모두 같다면 (<code>a</code> + <code>b</code> + <code>c</code>) × (<code>a</code><sup>2</sup> + <code>b</code><sup>2</sup> + <code>c</code><sup>2</sup> ) × (<code>a</code><sup>3</sup> + <code>b</code><sup>3</sup> + <code>c</code><sup>3</sup> )점을 얻습니다.</li>
</ul>

<p>세 정수 <code>a</code>, <code>b</code>, <code>c</code>가 매개변수로 주어질 때, 얻는 점수를 return 하는 solution 함수를 작성해 주세요.</p>

<hr>

<h5>제한사항</h5>

<ul>
<li><code>a</code>, <code>b</code>, <code>c</code>는 1이상 6이하의 정수입니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>a</th>
<th>b</th>
<th>c</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>2</td>
<td>6</td>
<td>1</td>
<td>9</td>
</tr>
<tr>
<td>5</td>
<td>3</td>
<td>3</td>
<td>473</td>
</tr>
<tr>
<td>4</td>
<td>4</td>
<td>4</td>
<td>110592</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p>입출력 예 #1</p>

<ul>
<li>예제 1번에서 세 주사위 숫자가 모두 다르므로 2 + 6 + 1 = 9점을 얻습니다. 따라서 9를 return 합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>예제 2번에서 두 주사위 숫자만 같으므로 (5 + 3 + 3) × (5<sup>2</sup> + 3<sup>2</sup> + 3<sup>2</sup> ) = 11 × 43 = 473점을 얻습니다. 따라서 473을 return 합니다.</li>
</ul>

<p>입출력 예 #3</p>

<ul>
<li>예제 3번에서 세 주사위 숫자가 모두 같으므로 (4 + 4 + 4) × (4<sup>2</sup> + 4<sup>2</sup> + 4<sup>2</sup> ) × (4<sup>3</sup> + 4<sup>3</sup> + 4<sup>3</sup> ) = 12 × 48 × 192 = 110,592점을 얻습니다. 따라서 110592를 return 합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges