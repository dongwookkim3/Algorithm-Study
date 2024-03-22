# [Silver IV] ∑|ΔEasyMAX| - 17203 

[문제 링크](https://www.acmicpc.net/problem/17203) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

구현, 누적 합

### 제출 일자

2024년 3월 22일 16:49:21

### 문제 설명

<p>작곡가인 GUN은 박자의 빠르기가 변화하는 곡을 쓰는 걸 좋아한다.</p>

<p>혼신의 힘을 다해 곡을 완성한 GUN은 자기가 쓴 곡의 초당 박자 변화량의 합이 얼마나 되는지 궁금해졌다. 하지만 GUN의 노래는 박자가 변화하는 곳이 많아 구간의 변화량 합을 일일이 계산하기 어렵다. GUN은 당신에게 이 곡의 특정 부분들의 구간별 초당 박자 변화량의 합을 구해달라고 요청했다. GUN을 도와 주어진 구간들의 초당 박자 변화량의 합을 구해주자.</p>

<p>단, i 초와 j 초 구간 사이의 초당 박자 변화량의 합은 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-munderover limits="false"><mjx-mo class="mjx-sop"><mjx-c class="mjx-c2211 TEX-S1"></mjx-c></mjx-mo><mjx-script style="vertical-align: -0.317em; margin-left: 0px;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D457 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-texatom><mjx-spacer style="margin-top: 0.18em;"></mjx-spacer><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-texatom></mjx-script></mjx-munderover><mjx-texatom space="2" texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2B"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-msub space="3"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><munderover><mo data-mjx-texclass="OP">∑</mo><mrow data-mjx-texclass="ORD"><mi>k</mi><mo>=</mo><mi>i</mi></mrow><mrow data-mjx-texclass="ORD"><mi>j</mi><mo>−</mo><mn>1</mn></mrow></munderover><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><msub><mi>a</mi><mrow data-mjx-texclass="ORD"><mi>k</mi><mo>+</mo><mn>1</mn></mrow></msub><mo>−</mo><msub><mi>a</mi><mi>k</mi></msub><mo stretchy="false">|</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$ \sum_{k=i}^{j-1}|a_{k+1} - a_k|$</span> </mjx-container><span style="font-size: 10.8333px;"> </span>라고 정의하고 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D457 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="3"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>j</mi><mo>−</mo><mn>1</mn><mo><</mo><mi>i</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$ j-1 < i $</span></mjx-container>인 경우엔 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-munderover limits="false"><mjx-mo class="mjx-sop"><mjx-c class="mjx-c2211 TEX-S1"></mjx-c></mjx-mo><mjx-script style="vertical-align: -0.317em; margin-left: 0px;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D457 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-texatom><mjx-spacer style="margin-top: 0.18em;"></mjx-spacer><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D456 TEX-I"></mjx-c></mjx-mi></mjx-texatom></mjx-script></mjx-munderover><mjx-texatom space="2" texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-msub><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-texatom size="s" texclass="ORD"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2B"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msub><mjx-mo class="mjx-n" space="3"><mjx-c class="mjx-c2212"></mjx-c></mjx-mo><mjx-msub space="3"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-script style="vertical-align: -0.15em;"><mjx-mi class="mjx-i" size="s"><mjx-c class="mjx-c1D458 TEX-I"></mjx-c></mjx-mi></mjx-script></mjx-msub><mjx-texatom texclass="ORD"><mjx-mo class="mjx-n"><mjx-c class="mjx-c7C"></mjx-c></mjx-mo></mjx-texatom><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c3D"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><munderover><mo data-mjx-texclass="OP">∑</mo><mrow data-mjx-texclass="ORD"><mi>k</mi><mo>=</mo><mi>i</mi></mrow><mrow data-mjx-texclass="ORD"><mi>j</mi><mo>−</mo><mn>1</mn></mrow></munderover><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><msub><mi>a</mi><mrow data-mjx-texclass="ORD"><mi>k</mi><mo>+</mo><mn>1</mn></mrow></msub><mo>−</mo><msub><mi>a</mi><mi>k</mi></msub><mrow data-mjx-texclass="ORD"><mo stretchy="false">|</mo></mrow><mo>=</mo><mn>0</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$ \sum_{k=i}^{j-1}|a_{k+1} - a_k| = 0 $</span></mjx-container> 이다.</p>

<p>그리고 기호 |a|는 임의의 실수 a에 대해 a<0 이면 |a| = -a 이고 a≥0 이면 |a| = a임을 나타내는 기호이다.</p>

### 입력 

 <p>입력의 첫 번째 줄에는 GUN이 쓴 노래의 길이 N(<strong>1</strong> ≤ N ≤ 1,000) 초와 초당 박자 변화량의 합을 구해야 하는 구간의 수 Q(1 ≤ Q ≤ 1,000)이 공백으로 구분되어 주어진다.</p>

<p>입력의 두 번째 줄에는 순서대로 GUN이 쓴 노래의 박자 빠르기를 나타내는 수열 a<sub>1</sub> a<sub>2</sub>, ... , a<sub>n</sub> 이 공백으로 구분되어 주어지며, a<sub>i </sub>(-10<sup>4 </sup>≤ a<sub>i </sub>≤ 10<sup>4</sup>)는 i 초일 때 박자의 빠르기라고 한다.</p>

<p>입력의 세 번째 줄부터 Q 줄에 걸쳐 변화량의 합을 구해야 하는 구간의 시작점과 끝점 Q<sub>(i,l)</sub>, Q<sub>(i,r)</sub> (1 ≤ Q<sub>(i,l)</sub> ≤ Q<sub>(i,r) </sub>≤ N)가 주어진다.</p>

### 출력 

 <p>GUN이 쓴 곡의 구간의 초당 박자 변화량의 합을 입력 순서대로 Q 줄에 걸쳐 출력한다.</p>

