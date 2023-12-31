# [level unrated] [PCCE 기출문제] 6번 / 가채점 - 250128 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/250128) 

### 성능 요약

메모리: 3.67 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 1일 1:5:7

### 문제 설명

<p>A반 학생들은 시험이 끝난 뒤 성적이 나오기 전 자기 시험지를 가채점해 보았습니다. 이후에 선생님이 실제 성적을 불러 줄 때 가채점한 점수와 실제 성적이 다른 학생들이 있어 선생님께 문의를 하려고 합니다.</p>

<p>성적을 문의하려는 학생들의 번호가 담긴 정수 리스트 <code>numbers</code>와 가채점한 점수가 성적을 문의하려는 학생 순서대로 담긴 정수 리스트 <code>our_score</code>, 실제 성적이 번호 순서대로 담긴 정수 리스트 <code>score_list</code>가 주어집니다. 주어진 solution 함수는 가채점한 점수가 실제 성적과 동일하다면 "Same"을, 다르다면 "Different"를 순서대로 리스트에 담아 return하는 함수입니다. solution 함수가 올바르게 작동하도록 한 줄을 수정해 주세요.</p>

<hr>

<h4>제한사항</h4>

<ul>
<li>1 ≤ <code>numbers</code>의 길이 = <code>our_score</code>의 길이 ≤ 10

<ul>
<li>1 ≤ <code>numbers</code>의 원소 ≤ 31</li>
<li>0 ≤ <code>our_score</code>의 원소 ≤ 100</li>
<li><code>our_score[i]</code>는 <code>numbers[i]</code>번 학생이 가채점한 점수입니다.</li>
<li><code>numbers</code>는 중복된 원소를 가지지 않습니다.</li>
</ul></li>
<li>2 ≤ <code>score_list</code>의 길이 ≤ 31

<ul>
<li>0 ≤ <code>score_list</code>의 원소 ≤ 100</li>
<li><code>score_list</code>에는 실제 성적이 [1번 학생 성적, 2번 학생 성적, 3번 학생 성적 …] 순서로 들어있습니다.</li>
</ul></li>
</ul>

<hr>

<h4>입출력 예</h4>
<table class="table">
        <thead><tr>
<th>numbers</th>
<th>our_score</th>
<th>score_list</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>[1]</td>
<td>[100]</td>
<td>[100, 80, 90, 84, 20]</td>
<td>["Same"]</td>
</tr>
<tr>
<td>[3, 4]</td>
<td>[85, 93]</td>
<td>[85, 92, 38, 93, 48, 85, 92, 56]</td>
<td>["Different", "Same"]</td>
</tr>
</tbody>
      </table>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1</p>

<ul>
<li>1번 학생이 가채점한 성적은 100점으로 실제 성적과 같기 때문에 "Same"을 담아 return합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>3번 학생이 가채점한 성적은 85점으로 실제 성적 38점과 다르기 때문에 "Different"를, 4번 학생이 채점한 성적은 93점으로 실제 성적과 같기 때문에 "Same"을 담아 return합니다.</li>
</ul>

<hr>

<ul>
<li>cpp를 응시하는 경우 리스트는 배열과 동일한 의미이니 풀이에 참고해주세요.

<ul>
<li>ex) 번호가 담긴 정수 <u><strong>리스트</strong></u> <code>numbers</code>가 주어집니다. =&gt; 번호가 담긴 정수 <u><strong>배열</strong></u> <code>numbers</code>가 주어집니다.</li>
</ul></li>
<li>java를 응시하는 경우 리스트는 배열, 함수는 메소드와 동일한 의미이니 풀이에 참고해주세요.

<ul>
<li>ex) solution <u><strong>함수</strong></u>가 올바르게 작동하도록 한 줄을 수정해 주세요. =&gt; solution <u><strong>메소드</strong></u>가 올바르게 작동하도록 한 줄을 수정해 주세요.</li>
</ul></li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges