# [Bronze IV] Communication Channels - 11121 

[문제 링크](https://www.acmicpc.net/problem/11121) 

### 성능 요약

메모리: 2024 KB, 시간: 4 ms

### 분류

구현, 문자열

### 제출 일자

2024년 2월 20일 23:27:30

### 문제 설명

<p>Classical information theory is based on the concept of a communication channel.</p>

<blockquote>
<p>Information theory is generally considered to have been founded in 1948 by Claude Shannon in his seminal work, “A Mathematical Theory of Communication.” The central paradigm of classical information theory is the engineering problem of the transmission of information over a noisy channel.</p>

<p style="text-align:right"><a href="http://en.wikipedia.org/wiki/Information theory">http://en.wikipedia.org/wiki/Information theory</a></p>
</blockquote>

<p>In this problem, we will specifically consider one of the simplest possible noisy channels, namely the binary symmetric channel (BSC). A BSC transmits a sequence of bits, but each transmitted bit has a probability p of being flipped to the wrong bit. This is called the crossover probability, as can be understood from the figure. We assume independent behaviour on different bits, so a communication of l bits has probability (1 − p)<sup>l</sup> of being transmitted correctly. Note that one can always assume that p < 1/2, since a channel with p = 1/2 is totally useless, and a channel with p > 1/2 can easily be transformed to a new channel having crossover probability 1 − p by just flipping all bits of the output.</p>

<p>Of course, it is still possible to communicate over a noisy channel. (In fact, you are doing it all the time!) To be able to do this, one has to add extra bits in order for the receiver to detect or even possibly correct errors. Example implementations of such a feature are parity bits, Cyclic Redundancy Checks (CRC) and Golay codes. These are not relevant to this problem, however, so they will not be discussed here.</p>

<p>In this problem you must investigate the behaviour of a binary symmetric channel.</p>

### 입력 

 <p>The first line of the input consists of a single number T, the number of transmissions. Then follow T lines with the input and the output of each transmission as binary strings, separated by a single space.</p>

<ul>
	<li>0 < T ≤ 100</li>
	<li>All inputs and outputs has length less than 120.</li>
	<li>T is encoded in decimal.</li>
</ul>

### 출력 

 <p>For each transmission, output OK if the communication was transmitted correctly, or ERROR if it was transmitted incorrectly.</p>

