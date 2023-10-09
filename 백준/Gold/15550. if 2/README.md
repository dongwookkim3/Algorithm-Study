# [Gold IV] if 2 - 15550 

[문제 링크](https://www.acmicpc.net/problem/15550) 

### 성능 요약

메모리: 4528 KB, 시간: 0 ms

### 분류

애드 혹

### 제출 일자

2023년 10월 9일 21:56:28

### 문제 설명

<p>다음 프로그램을 실행시켰을 때, "<code>true</code>"를 출력하는 변수 <code>a, b, c</code>의 자료형과 값을 찾는 프로그램을 작성하시오.</p>

<div><div id="highlighter_576544" class="syntaxhighlighter  c"><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="gutter"><div class="line number1 index0 alt2">1</div><div class="line number2 index1 alt1">2</div><div class="line number3 index2 alt2">3</div><div class="line number4 index3 alt1">4</div><div class="line number5 index4 alt2">5</div><div class="line number6 index5 alt1">6</div><div class="line number7 index6 alt2">7</div><div class="line number8 index7 alt1">8</div><div class="line number9 index8 alt2">9</div><div class="line number10 index9 alt1">10</div><div class="line number11 index10 alt2">11</div><div class="line number12 index11 alt1">12</div><div class="line number13 index12 alt2">13</div></td><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="c preprocessor">#include <iostream></code></div><div class="line number2 index1 alt1"><code class="c keyword bold">using</code> <code class="c keyword bold">namespace</code> <code class="c plain">std;</code></div><div class="line number3 index2 alt2"><code class="c color1 bold">int</code> <code class="c plain">main() {</code></div><div class="line number4 index3 alt1"><code class="c spaces">    </code><code class="c plain">??? a = ???;</code></div><div class="line number5 index4 alt2"><code class="c spaces">    </code><code class="c plain">??? b = ???;</code></div><div class="line number6 index5 alt1"><code class="c spaces">    </code><code class="c plain">??? c = ???;</code></div><div class="line number7 index6 alt2"><code class="c spaces">    </code><code class="c keyword bold">if</code> <code class="c plain">(a == b && b == c && c != a) {</code></div><div class="line number8 index7 alt1"><code class="c spaces">        </code><code class="c plain">cout << </code><code class="c string">"true"</code> <code class="c plain"><< </code><code class="c string">'\n'</code><code class="c plain">;</code></div><div class="line number9 index8 alt2"><code class="c spaces">    </code><code class="c plain">} </code><code class="c keyword bold">else</code> <code class="c plain">{</code></div><div class="line number10 index9 alt1"><code class="c spaces">        </code><code class="c plain">cout << </code><code class="c string">"false"</code> <code class="c plain"><< </code><code class="c string">'\n'</code><code class="c plain">;</code></div><div class="line number11 index10 alt2"><code class="c spaces">    </code><code class="c plain">}</code></div><div class="line number12 index11 alt1"><code class="c spaces">    </code><code class="c keyword bold">return</code> <code class="c plain">0;</code></div><div class="line number13 index12 alt2"><code class="c plain">}</code></div></div></td></tr></tbody></table></div></div>

<p>실행 환경은 BOJ 채점 서버의 C++17 실행 환경과 같다.</p>

### 입력 

 <p>입력은 없다.</p>

### 출력 

 <p>첫째 줄에 변수 <code>a</code>의 자료형과 값, 둘째 줄에 변수 <code>b</code>의 자료형과 값, 셋째 줄에 변수 <code>c</code>의 자료형과 값을 공백으로 구분해 출력한다. 자료형은 <code>int</code>, <code>long long</code>, <code>float</code>, <code>double</code>만 가능하다. 출력한 값이 자료형에 알맞지 않은 경우에는 틀리게 된다.</p>

<p>값은 아래 소스가 런타임 에러 없이 읽을 수 있는 값을 의미한다.</p>

<div><div id="highlighter_409637" class="syntaxhighlighter  c"><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="gutter"><div class="line number1 index0 alt2">1</div><div class="line number2 index1 alt1">2</div><div class="line number3 index2 alt2">3</div></td><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="c plain">istringstream </code><code class="c functions bold">sin</code><code class="c plain">(line);</code></div><div class="line number2 index1 alt1"><code class="c plain">자료형 temp;</code></div><div class="line number3 index2 alt2"><code class="c functions bold">assert</code><code class="c plain">(</code><code class="c functions bold">sin</code> <code class="c plain">>> temp);</code></div></div></td></tr></tbody></table></div></div>

