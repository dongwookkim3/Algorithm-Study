# [level unrated] [PCCE 기출문제] 2번 / 피타고라스의 정리 - 250132 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/250132) 

### 성능 요약

메모리: 4.21 MB, 시간: 1.95 ms

### 구분

코딩테스트 연습 > 코딩 기초 트레이닝

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2024년 1월 1일 0:33:45

### 문제 설명

<p>직각삼각형이 주어졌을 때 빗변의 제곱은 다른 두 변을 각각 제곱한 것의 합과 같습니다.</p>

<p><img src="https://grepp-programmers.s3.ap-northeast-2.amazonaws.com/files/production/45e3aa58-327f-4860-a634-2917ae76c159/%E1%84%91%E1%85%B5%E1%84%90%E1%85%A1%E1%84%80%E1%85%A9%E1%84%85%E1%85%A1%E1%84%89%E1%85%B3.jpg" title="" alt="피타고라스.jpg"></p>

<p>직각삼각형의 한 변의 길이를 나타내는 정수 <code>a</code>와 빗변의 길이를 나타내는 정수 <code>c</code>가 주어질 때, 다른 한 변의 길이의 제곱, <code>b_square</code> 을 출력하도록 한 줄을 수정해 코드를 완성해 주세요.</p>

<hr>

<h4>제한사항</h4>

<ul>
<li>1 ≤ <code>a</code> &lt; <code>c</code> ≤ 100</li>
</ul>

<hr>

<h4>입출력 예</h4>

<p>입력 #1</p>
<div class="highlight"><pre class="codehilite"><code>3
5
</code></pre></div>
<p>출력 #1</p>
<div class="highlight"><pre class="codehilite"><code>16
</code></pre></div>
<p>입력 #2</p>
<div class="highlight"><pre class="codehilite"><code>9
10
</code></pre></div>
<p>출력 #2</p>
<div class="highlight"><pre class="codehilite"><code>19
</code></pre></div>
<hr>

<h4>입출력 예 설명</h4>

<p>입출력 예 #1</p>

<ul>
<li>a<sup>2</sup> = 9, c<sup>2</sup> = 25 이므로 16을 출력합니다.</li>
</ul>

<p>입출력 예 #2</p>

<ul>
<li>a<sup>2</sup> = 81, c<sup>2</sup> = 100 이므로 19를 출력합니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges