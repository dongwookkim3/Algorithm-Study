# [Bronze IV] Archivist - 20232 

[문제 링크](https://www.acmicpc.net/problem/20232) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2024년 2월 12일 09:30:06

### 문제 설명

<p>The team of problemsetters of Northwestern Russia Regional Contest welcomes you! Our regional contest was founded in 1995 under the name "Collegiate Programming Championship of St Petersburg". Here is the list of the contest winners:</p>

<ul>
	<li>1995: ITMO</li>
	<li>1996: SPbSU</li>
	<li>1997: SPbSU</li>
	<li>1998: ITMO</li>
	<li>1999: ITMO</li>
	<li>2000: SPbSU</li>
	<li>2001: ITMO</li>
	<li>2002: ITMO</li>
	<li>2003: ITMO</li>
	<li>2004: ITMO</li>
	<li>2005: ITMO</li>
	<li>2006: PetrSU, ITMO</li>
	<li>2007: SPbSU</li>
	<li>2008: SPbSU</li>
	<li>2009: ITMO</li>
	<li>2010: ITMO</li>
	<li>2011: ITMO</li>
	<li>2012: ITMO</li>
	<li>2013: SPbSU</li>
	<li>2014: ITMO</li>
	<li>2015: ITMO</li>
	<li>2016: ITMO</li>
	<li>2017: ITMO</li>
	<li>2018: SPbSU</li>
	<li>2019: ITMO</li>
</ul>

<p>Help the contest archivist to remember the results of each contest and write a program that will read the year and print contest winners of that year in exactly the same format as above.</p>

### 입력 

 <p>The only line of input contains a single integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>y</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$y$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c39"></mjx-c><mjx-c class="mjx-c39"></mjx-c><mjx-c class="mjx-c35"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c39"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1995</mn><mo>≤</mo><mi>y</mi><mo>≤</mo><mn>2019</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1995 \le y \le 2019$</span></mjx-container>), denoting the year. You don't need to process year numbers less than <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c39"></mjx-c><mjx-c class="mjx-c39"></mjx-c><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1995</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1995$</span></mjx-container> or greater than <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c39"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2019</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$2019$</span></mjx-container>, or incorrect year formats. It is guaranteed that you will be given a number between <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c39"></mjx-c><mjx-c class="mjx-c39"></mjx-c><mjx-c class="mjx-c35"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1995</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1995$</span></mjx-container> and <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c39"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2019</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$2019$</span></mjx-container>, inclusive.</p>

### 출력 

 <p>Print the winner of the contest in year <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D466 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>y</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$y$</span></mjx-container> exactly in the same format as in the list above.</p>

