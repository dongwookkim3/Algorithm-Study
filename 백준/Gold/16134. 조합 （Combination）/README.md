# [Gold I] 조합 (Combination) - 16134 

[문제 링크](https://www.acmicpc.net/problem/16134) 

### 성능 요약

메모리: 2020 KB, 시간: 8 ms

### 분류

조합론, 분할 정복을 이용한 거듭제곱, 페르마의 소정리, 수학, 모듈로 곱셈 역원, 정수론

### 제출 일자

2024년 1월 30일 21:02:48

### 문제 설명

<p>준하는 기초통계학 수업에서 너비가 a, 높이가 ​​​​​b인 격자판의 좌하단 점으로부터 우상단 점까지 최단경로로 가는 방법의 수를 구하라는 과제를 받았어. </p>

<p>알고 있겠지만 정답은  <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mrow><mjx-mo class="mjx-s3"><mjx-c class="mjx-c28 TEX-S3"></mjx-c></mjx-mo><mjx-mtable style="min-width: 2.18em;"><mjx-table><mjx-itable><mjx-mtr><mjx-mtd style="padding-bottom: 0.2em;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2B"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="3"><mjx-c class="mjx-c1D44F TEX-I"></mjx-c></mjx-mi><mjx-tstrut></mjx-tstrut></mjx-mtd></mjx-mtr><mjx-mtr><mjx-mtd style="padding-top: 0.2em;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44F TEX-I"></mjx-c></mjx-mi><mjx-tstrut></mjx-tstrut></mjx-mtd></mjx-mtr></mjx-itable></mjx-table></mjx-mtable><mjx-mo class="mjx-s3"><mjx-c class="mjx-c29 TEX-S3"></mjx-c></mjx-mo></mjx-mrow></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mrow data-mjx-texclass="INNER"><mo data-mjx-texclass="OPEN">(</mo><mtable columnspacing="1em" rowspacing="4pt"><mtr><mtd><mi>a</mi><mo>+</mo><mi>b</mi></mtd></mtr><mtr><mtd><mi>b</mi></mtd></mtr></mtable><mo data-mjx-texclass="CLOSE">)</mo></mrow></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(\begin{pmatrix}a+b\\b\end{pmatrix}\)</span></mjx-container>이야. 보기만 해도 벌써 조합을 계산할 생각에 신이 나지? 사실 조합을 구하는 문제도 코딩으로 해결할 수 있대. 코딩으로 과제를 해결해주자!</p>

### 입력 

 <p class="0" style="text-align:left">첫 줄에 <em>N</em>과 <em>R</em>이 주어진다. (0 ≤ <em>R</em> ≤ <i>N</i> ≤ 1,000,000)</p>

### 출력 

 <p class="0" style="text-align:left"><mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"> <mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mrow><mjx-mo class="mjx-s3"><mjx-c class="mjx-c28 TEX-S3"></mjx-c></mjx-mo><mjx-mtable style="min-width: 0.888em;"><mjx-table><mjx-itable><mjx-mtr><mjx-mtd style="padding-bottom: 0.2em;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-tstrut></mjx-tstrut></mjx-mtd></mjx-mtr><mjx-mtr><mjx-mtd style="padding-top: 0.2em;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D445 TEX-I"></mjx-c></mjx-mi><mjx-tstrut></mjx-tstrut></mjx-mtd></mjx-mtr></mjx-itable></mjx-table></mjx-mtable><mjx-mo class="mjx-s3"><mjx-c class="mjx-c29 TEX-S3"></mjx-c></mjx-mo></mjx-mrow></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mrow data-mjx-texclass="INNER"><mo data-mjx-texclass="OPEN">(</mo><mtable columnspacing="1em" rowspacing="4pt"><mtr><mtd><mi>N</mi></mtd></mtr><mtr><mtd><mi>R</mi></mtd></mtr></mtable><mo data-mjx-texclass="CLOSE">)</mo></mrow></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(\begin{pmatrix}N\\R\end{pmatrix}\)</span></mjx-container>의 값을 1,000,000,007로 나눈 나머지를 출력하자! (단, 1,000,000,007은 소수이다)</p>

