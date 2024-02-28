# [Bronze III] Culture shock - 25277 

[문제 링크](https://www.acmicpc.net/problem/25277) 

### 성능 요약

메모리: 2024 KB, 시간: 44 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 29일 03:19:08

### 문제 설명

<p>Thore is a visiting scholar at a progressive university, whose administrators have decided that gendered pronouns are politically incorrect. The pronouns <em>he</em>, <em>she</em>, <em>him</em>, and <em>her</em> must be replaced with the gender neutral <em>they</em> and <em>them</em>. Thore doesn't want to appear old-fashioned but has difficulties adapting. To condition themselves to speak properly, he -- sorry, they -- have programmed a behaviour-improving wearable wristband to analyse their speech and give them an electric shock every time he -- <em>buzz</em> -- uses one of the forbidden words (<em>he</em>, <em>him</em>, <em>she</em>, or <em>her</em>). Thore is worried that he -- <em>buzz</em> -- will be electrocuted and needs your help to determine how many electric shocks he -- <em>buzz</em> -- will receive from different sentences.</p>

### 입력 

 <p>The first line of input is an integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>100</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \leq N \leq 100\, 000$</span></mjx-container>, the number of words Thore speaks. This is followed by a single line with <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> whitespace separated  words, each word consisting of up to <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>20</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$20$</span></mjx-container> lowercase characters a--z.</p>

### 출력 

 <p>The number of electrical shocks Thore receives.</p>

