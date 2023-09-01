# [Bronze IV] 사장님 도박은 재미로 하셔야 합니다 - 23795 

[문제 링크](https://www.acmicpc.net/problem/23795) 

### 성능 요약

메모리: 1112 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학

### 문제 설명

<p data-pm-slice="1 1 []">영국에는 스티븐 제라드라는 전설의 야바위꾼이 있다. 영국으로 여행을 떠난 윤성이는 스티븐 제라드를 만나게 되었다.</p>

<p>이 전설의 야바위꾼이 진행하는 야바위는 널리 알려진 방식과 동일하다. <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c33"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(3\)</span></mjx-container>개의 컵과 하나의 공을 사용해 임의의 한 컵에 공을 넣고 무작위로 컵들의 위치를 바꾼다. 야바위꾼이 정한 특정 순간에 위치 변경을 멈추게 되는데 그 순간 관객이 공의 위치를 찾으면 돈을 받을 수 있다. 스티븐 제라드가 공의 위치를 찾았을 때 베팅한 돈의 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>10</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(10\)</span></mjx-container>배를 주겠다 제안하자 윤성이는 솔깃해져 게임에 참여하게 되었다.</p>

<p>전설의 야바위꾼의 빠른 손놀림에 윤성이는 단 한번도 공의 위치를 찾지 못했고, 결국 윤성이는 배팅을 계속하다 지쳐 자리를 뜨게 되었다. 윤성이가 자리를 뜨기 전까지 잃은 돈을 계산하는 프로그램을 작성하자.</p>

### 입력 

 <p data-pm-slice="1 1 []">윤성이가 판마다 배팅한 양의 정수 형태의 돈이 한 줄에 하나씩 입력된다. 입력의 맨 마지막줄에는 윤성이가 자리를 뜨는 순간을 의미하는 수인 -1이 들어온다.</p>

<p data-pm-slice="1 1 []">입력된 값은 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="2"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn><mo>,</mo><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(2,000\)</span></mjx-container>개 미만이고, 윤성이가 베팅한 돈의 합은 <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="2"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c34"></mjx-c><mjx-c class="mjx-c37"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="2"><mjx-c class="mjx-c34"></mjx-c><mjx-c class="mjx-c38"></mjx-c><mjx-c class="mjx-c33"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="2"><mjx-c class="mjx-c36"></mjx-c><mjx-c class="mjx-c34"></mjx-c><mjx-c class="mjx-c37"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn><mo>,</mo><mn>147</mn><mo>,</mo><mn>483</mn><mo>,</mo><mn>647</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">\(2,147,483,647\)</span></mjx-container>을 넘지 않는다.</p>

### 출력 

 <p data-pm-slice="1 1 []">윤성이가 도박판에서 버린 돈의 총 합을 출력한다.</p>

