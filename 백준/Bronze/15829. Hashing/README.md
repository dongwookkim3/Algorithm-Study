# [Bronze II] Hashing - 15829 

[문제 링크](https://www.acmicpc.net/problem/15829) 

### 성능 요약

메모리: 31120 KB, 시간: 40 ms

### 분류

해싱, 구현, 문자열

### 제출 일자

2024년 1월 17일 18:34:51

### 문제 설명

<p>APC에 온 것을 환영한다. 만약 여러분이 학교에서 자료구조를 수강했다면 해시 함수에 대해 배웠을 것이다. 해시 함수란 임의의 길이의 입력을 받아서 고정된 길이의 출력을 내보내는 함수로 정의한다. 해시 함수는 무궁무진한 응용 분야를 갖는데, 대표적으로 자료의 저장과 탐색에 쓰인다.</p>

<p>이 문제에서는 여러분이 앞으로 유용하게 쓸 수 있는 해시 함수를 하나 가르쳐주고자 한다. 먼저, 편의상 입력으로 들어오는 문자열에는 영문 소문자(a, b, ..., z)로만 구성되어있다고 가정하자. 영어에는 총 26개의 알파벳이 존재하므로 a에는 1, b에는 2, c에는 3, ..., z에는 26으로 고유한 번호를 부여할 수 있다. 결과적으로 우리는 하나의 문자열을 수열로 변환할 수 있다. 예를 들어서 문자열 "abba"은 수열 1, 2, 2, 1로 나타낼 수 있다.</p>

<p>해시 값을 계산하기 위해서 우리는 문자열 혹은 수열을 하나의 정수로 치환하려고 한다. 간단하게는 수열의 값을 모두 더할 수도 있다. 해시 함수의 정의에서 유한한 범위의 출력을 가져야 한다고 했으니까 적당히 큰 수 M으로 나눠주자. 짜잔! 해시 함수가 완성되었다. 이를 수식으로 표현하면 아래와 같다.</p>

<p><mjx-container class="MathJax" jax="CHTML" display="true" style="font-size: 99.9%; position: relative;"> <mjx-math display="true" class="MJX-TEX" aria-hidden="true" style="margin-left: 0px; margin-right: 0px;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-munderover space="4"><mjx-over style="padding-bottom: 0.142em; padding-left: 0.165em;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D459 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-texatom></mjx-over><mjx-box><mjx-munder><mjx-row><mjx-base><mjx-mo class="mjx-lop"><mjx-c class="mjx-c2211 TEX-S2"></mjx-c></mjx-mo></mjx-base></mjx-row><mjx-row><mjx-under style="padding-top: 0.167em; padding-left: 0.148em;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-texatom></mjx-under></mjx-row></mjx-munder></mjx-box></mjx-munderover><mjx-texatom space="2" texclass="ORD"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub></mjx-texatom><mjx-mspace style="width: 1em;"></mjx-mspace><mjx-mi class="mjx-n" space="2"><mjx-c class="mjx-c6D"></mjx-c><mjx-c class="mjx-c6F"></mjx-c><mjx-c class="mjx-c64"></mjx-c></mjx-mi><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D440 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="block"><math xmlns="http://www.w3.org/1998/Math/MathML" display="block"><mi>H</mi><mo>=</mo><munderover><mo data-mjx-texclass="OP">∑</mo><mrow data-mjx-texclass="ORD"><mi>i</mi><mo>=</mo><mn>0</mn></mrow><mrow data-mjx-texclass="ORD"><mi>l</mi><mo>−</mo><mn>1</mn></mrow></munderover><mrow data-mjx-texclass="ORD"><msub><mi>a</mi><mi>i</mi></msub></mrow><mspace width="1em"></mspace><mi>mod</mi><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mi>M</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\[H = \sum_{i=0}^{l-1}{a_i} \mod M\]</span> </mjx-container></p>

<p>해시 함수의 입력으로 들어올 수 있는 문자열의 종류는 무한하지만 출력 범위는 정해져있다. 다들 비둘기 집의 원리에 대해서는 한 번쯤 들어봤을 것이다. 그 원리에 의하면 서로 다른 문자열이더라도 동일한 해시 값을 가질 수 있다. 이를 해시 충돌이라고 하는데, 좋은 해시 함수는 최대한 충돌이 적게 일어나야 한다. 위에서 정의한 해시 함수는 알파벳의 순서만 바꿔도 충돌이 일어나기 때문에 나쁜 해시 함수이다. 그러니까 조금 더 개선해보자.</p>

<p>어떻게 하면 순서가 달라졌을때 출력값도 달라지게 할 수 있을까? 머리를 굴리면 수열의 각 항마다 고유한 계수를 부여하면 된다는 아이디어를 생각해볼 수 있다. 가장 대표적인 방법은 항의 번호에 해당하는 만큼 특정한 숫자를 거듭제곱해서 곱해준 다음 더하는 것이 있다. 이를 수식으로 표현하면 아래와 같다.</p>

<p><mjx-container class="MathJax" jax="CHTML" display="true" style="font-size: 99.9%; position: relative;"> <mjx-math display="true" class="MJX-TEX" aria-hidden="true" style="margin-left: 0px; margin-right: 0px;"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D43B TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-munderover space="4"><mjx-over style="padding-bottom: 0.142em; padding-left: 0.165em;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D459 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-texatom></mjx-over><mjx-box><mjx-munder><mjx-row><mjx-base><mjx-mo class="mjx-lop"><mjx-c class="mjx-c2211 TEX-S2"></mjx-c></mjx-mo></mjx-base></mjx-row><mjx-row><mjx-under style="padding-top: 0.167em; padding-left: 0.148em;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-texatom></mjx-under></mjx-row></mjx-munder></mjx-box></mjx-munderover><mjx-texatom space="2" texclass="ORD"><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-msup><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45F TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: 0.413em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msup></mjx-texatom><mjx-mspace style="width: 1em;"></mjx-mspace><mjx-mi class="mjx-n" space="2"><mjx-c class="mjx-c6D"></mjx-c><mjx-c class="mjx-c6F"></mjx-c><mjx-c class="mjx-c64"></mjx-c></mjx-mi><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D440 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="block"><math xmlns="http://www.w3.org/1998/Math/MathML" display="block"><mi>H</mi><mo>=</mo><munderover><mo data-mjx-texclass="OP">∑</mo><mrow data-mjx-texclass="ORD"><mi>i</mi><mo>=</mo><mn>0</mn></mrow><mrow data-mjx-texclass="ORD"><mi>l</mi><mo>−</mo><mn>1</mn></mrow></munderover><mrow data-mjx-texclass="ORD"><msub><mi>a</mi><mi>i</mi></msub><msup><mi>r</mi><mi>i</mi></msup></mrow><mspace width="1em"></mspace><mi>mod</mi><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mi>M</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\[H = \sum_{i=0}^{l-1}{a_ir^i} \mod M\]</span> </mjx-container></p>

<p>보통 r과 M은 서로소인 숫자로 정하는 것이 일반적이다. 우리가 직접 정하라고 하면 힘들테니까 r의 값은 26보다 큰 소수인 31로 하고 M의 값은 1234567891(놀랍게도 소수이다!!)로 하자.</p>

<p>이제 여러분이 할 일은 위 식을 통해 주어진 문자열의 해시 값을 계산하는 것이다. 그리고 이 함수는 간단해 보여도 자주 쓰이니까 기억해뒀다가 잘 써먹도록 하자.</p>

### 입력 

 <p>첫 줄에는 문자열의 길이 L이 들어온다. 둘째 줄에는 영문 소문자로만 이루어진 문자열이 들어온다.</p>

<p>입력으로 주어지는 문자열은 모두 알파벳 소문자로만 구성되어 있다.</p>

### 출력 

 <p>문제에서 주어진 해시함수와 입력으로 주어진 문자열을 사용해 계산한 해시 값을 정수로 출력한다.</p>

