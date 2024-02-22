# [level 1] 숫자 문자열과 영단어 - 81301 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/81301) 

### 성능 요약

메모리: 4.19 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 2021 카카오 채용연계형 인턴십

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 02월 22일 21:51:42

### 문제 설명

<p><img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/d31cb063-4025-4412-8cbc-6ac6909cf93e/img1.png" title="" alt="img1.png"></p>

<p>네오와 프로도가 숫자놀이를 하고 있습니다. 네오가 프로도에게 숫자를 건넬 때 일부 자릿수를 영단어로 바꾼 카드를 건네주면 프로도는 원래 숫자를 찾는 게임입니다.<br><br>
다음은 숫자의 일부 자릿수를 영단어로 바꾸는 예시입니다.</p>

<ul>
<li>1478 → "one4seveneight"</li>
<li>234567 → "23four5six7"</li>
<li>10203 → "1zerotwozero3"</li>
</ul>

<p>이렇게 숫자의 일부 자릿수가 영단어로 바뀌어졌거나, 혹은 바뀌지 않고 그대로인 문자열 <code>s</code>가 매개변수로 주어집니다. <code>s</code>가 의미하는 원래 숫자를 return 하도록 solution 함수를 완성해주세요.</p>

<p>참고로 각 숫자에 대응되는 영단어는 다음 표와 같습니다.</p>
<table class="table">
        <thead><tr>
<th>숫자</th>
<th>영단어</th>
</tr>
</thead>
        <tbody><tr>
<td>0</td>
<td>zero</td>
</tr>
<tr>
<td>1</td>
<td>one</td>
</tr>
<tr>
<td>2</td>
<td>two</td>
</tr>
<tr>
<td>3</td>
<td>three</td>
</tr>
<tr>
<td>4</td>
<td>four</td>
</tr>
<tr>
<td>5</td>
<td>five</td>
</tr>
<tr>
<td>6</td>
<td>six</td>
</tr>
<tr>
<td>7</td>
<td>seven</td>
</tr>
<tr>
<td>8</td>
<td>eight</td>
</tr>
<tr>
<td>9</td>
<td>nine</td>
</tr>
</tbody>
      </table>
<hr>

<h5>제한사항</h5>

<ul>
<li>1 ≤ <code>s</code>의 길이 ≤ 50</li>
<li><code>s</code>가 "zero" 또는 "0"으로 시작하는 경우는 주어지지 않습니다.</li>
<li>return 값이 1 이상 2,000,000,000 이하의 정수가 되는 올바른 입력만 <code>s</code>로 주어집니다.</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>s</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td><code>"one4seveneight"</code></td>
<td>1478</td>
</tr>
<tr>
<td><code>"23four5six7"</code></td>
<td>234567</td>
</tr>
<tr>
<td><code>"2three45sixseven"</code></td>
<td>234567</td>
</tr>
<tr>
<td><code>"123"</code></td>
<td>123</td>
</tr>
</tbody>
      </table>
<hr>

<h5>입출력 예 설명</h5>

<p><strong>입출력 예 #1</strong></p>

<ul>
<li>문제 예시와 같습니다.</li>
</ul>

<p><strong>입출력 예 #2</strong></p>

<ul>
<li>문제 예시와 같습니다.</li>
</ul>

<p><strong>입출력 예 #3</strong></p>

<ul>
<li>"three"는 3, "six"는 6, "seven"은 7에 대응되기 때문에 정답은 입출력 예 #2와 같은 234567이 됩니다.</li>
<li>입출력 예 #2와 #3과 같이 같은 정답을 가리키는 문자열이 여러 가지가 나올 수 있습니다.</li>
</ul>

<p><strong>입출력 예 #4</strong></p>

<ul>
<li><code>s</code>에는 영단어로 바뀐 부분이 없습니다.</li>
</ul>

<hr>

<h5>제한시간 안내</h5>

<ul>
<li>정확성 테스트 : 10초</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges