# [Silver III] 피보나치 수의 확장 - 1788 

[문제 링크](https://www.acmicpc.net/problem/1788) 

### 성능 요약

메모리: 5804 KB, 시간: 4 ms

### 분류

다이나믹 프로그래밍, 수학

### 제출 일자

2024년 1월 25일 15:34:24

### 문제 설명

<p><mjx-container class="MathJax" jax="CHTML" display="true" style="font-size: 99.9%; position: relative;"> <mjx-math display="true" class="MJX-TEX" aria-hidden="true" style="margin-left: 0px; margin-right: 0px;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D439 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3A"></mjx-c><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mrow space="4"><mjx-mo class="mjx-n"><mjx-stretchy-v class="mjx-c7B" style="height: 3.4em; vertical-align: -1.45em;"><mjx-beg><mjx-c></mjx-c></mjx-beg><mjx-ext><mjx-c></mjx-c></mjx-ext><mjx-mid><mjx-c></mjx-c></mjx-mid><mjx-ext><mjx-c></mjx-c></mjx-ext><mjx-end><mjx-c></mjx-c></mjx-end><mjx-mark></mjx-mark></mjx-stretchy-v></mjx-mo><mjx-mtable style="min-width: 13.467em;"><mjx-table><mjx-itable><mjx-mtr><mjx-mtd style="text-align: left; padding-right: 0.5em; padding-bottom: 0.1em;"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-tstrut></mjx-tstrut></mjx-mtd><mjx-mtd style="text-align: left; padding-left: 0.5em; padding-bottom: 0.1em;"><mjx-mtext class="mjx-n"><mjx-c class="mjx-c69"></mjx-c><mjx-c class="mjx-c66"></mjx-c><mjx-c class="mjx-cA0"></mjx-c></mjx-mtext><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mtext class="mjx-n"><mjx-c class="mjx-c3B"></mjx-c></mjx-mtext><mjx-tstrut></mjx-tstrut></mjx-mtd></mjx-mtr><mjx-mtr><mjx-mtd style="text-align: left; padding-right: 0.5em; padding-top: 0.1em; padding-bottom: 0.1em;"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-tstrut></mjx-tstrut></mjx-mtd><mjx-mtd style="text-align: left; padding-left: 0.5em; padding-top: 0.1em; padding-bottom: 0.1em;"><mjx-mtext class="mjx-n"><mjx-c class="mjx-c69"></mjx-c><mjx-c class="mjx-c66"></mjx-c><mjx-c class="mjx-cA0"></mjx-c></mjx-mtext><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mtext class="mjx-n"><mjx-c class="mjx-c3B"></mjx-c></mjx-mtext><mjx-tstrut></mjx-tstrut></mjx-mtd></mjx-mtr><mjx-mtr><mjx-mtd style="text-align: left; padding-right: 0.5em; padding-top: 0.1em;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D439 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="3"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2B"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="3"><mjx-c class="mjx-c1D439 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c28"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="3"><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c29"></mjx-c></mjx-mo><mjx-tstrut></mjx-tstrut></mjx-mtd><mjx-mtd style="text-align: left; padding-left: 0.5em; padding-top: 0.1em;"><mjx-mtext class="mjx-n"><mjx-c class="mjx-c69"></mjx-c><mjx-c class="mjx-c66"></mjx-c><mjx-c class="mjx-cA0"></mjx-c></mjx-mtext><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3E"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mtext class="mjx-n"><mjx-c class="mjx-c2E"></mjx-c></mjx-mtext><mjx-tstrut></mjx-tstrut></mjx-mtd></mjx-mtr></mjx-itable></mjx-table></mjx-mtable><mjx-mo class="mjx-n" style="vertical-align: 0.25em;"></mjx-mo></mjx-mrow></mjx-math><mjx-assistive-mml unselectable="on" display="block"><math xmlns="http://www.w3.org/1998/Math/MathML" display="block"><mi>F</mi><mo stretchy="false">(</mo><mi>n</mi><mo stretchy="false">)</mo><mo>:=</mo><mrow data-mjx-texclass="INNER"><mo data-mjx-texclass="OPEN">{</mo><mtable columnalign="left left" columnspacing="1em" rowspacing=".2em"><mtr><mtd><mn>0</mn></mtd><mtd><mtext>if </mtext><mi>n</mi><mo>=</mo><mn>0</mn><mtext>;</mtext></mtd></mtr><mtr><mtd><mn>1</mn></mtd><mtd><mtext>if </mtext><mi>n</mi><mo>=</mo><mn>1</mn><mtext>;</mtext></mtd></mtr><mtr><mtd><mi>F</mi><mo stretchy="false">(</mo><mi>n</mi><mo>−</mo><mn>1</mn><mo stretchy="false">)</mo><mo>+</mo><mi>F</mi><mo stretchy="false">(</mo><mi>n</mi><mo>−</mo><mn>2</mn><mo stretchy="false">)</mo></mtd><mtd><mtext>if </mtext><mi>n</mi><mo>></mo><mn>1</mn><mtext>.</mtext></mtd></mtr></mtable><mo data-mjx-texclass="CLOSE" fence="true" stretchy="true" symmetric="true"></mo></mrow></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$$F(n) := \begin{cases}0 & \text{if }n = 0\text{;} \\ 1 & \text{if }n = 1\text{;} \\ F(n-1) + F(n-2) & \text{if }n > 1\text{.} \end{cases}$$</span> </mjx-container></p>

<p>수학에서, 피보나치 수는 위의 점화식과 같이 귀납적으로 정의되는 수열이다. 위의 식에서도 알 수 있듯이, 피보나치 수 F(n)은 0 이상의 n에 대해서만 정의된다.</p>

<p>하지만 피보나치 수 F(n)을 n이 음수인 경우로도 확장시킬 수 있다. 위의 식에서 n > 1인 경우에만 성립하는 F(n) = F(n-1) + F(n-2)를 n ≤ 1일 때도 성립되도록 정의하는 것이다. 예를 들어 n = 1일 때 F(1) = F(0) + F(-1)이 성립되어야 하므로, F(-1)은 1이 되어야 한다.</p>

<p>n이 주어졌을 때, 피보나치 수 F(n)을 구하는 프로그램을 작성하시오. n은 음수로 주어질 수도 있다.</p>

### 입력 

 <p>첫째 줄에 n이 주어진다. n은 절댓값이 1,000,000을 넘지 않는 정수이다.</p>

### 출력 

 <p>첫째 줄에 F(n)이 양수이면 1, 0이면 0, 음수이면 -1을 출력한다. 둘째 줄에는 F(n)의 절댓값을 출력한다. 이 수가 충분히 커질 수 있으므로, 절댓값을 1,000,000,000으로 나눈 나머지를 출력한다.</p>

