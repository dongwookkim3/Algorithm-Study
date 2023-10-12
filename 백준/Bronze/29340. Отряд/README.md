# [Bronze IV] Отряд - 29340 

[문제 링크](https://www.acmicpc.net/problem/29340) 

### 성능 요약

메모리: 2416 KB, 시간: 0 ms

### 분류

구현

### 제출 일자

2023년 10월 12일 18:01:23

### 문제 설명

<p>Повстанцы снова атакают Империю на планете Хот, и Дарт Вейдер решил послать туда своих лучших клонов. Но вот незадача: звездолет всего лишь один, а отрядов для его управления два. Тогда он решил объединить эти отряды так, чтобы в получившемся отряде остались только лучшие клоны.</p>

<p>Оба отряда состоят из одинакового количества клонов. У каждого клона в отряде есть своя специальность, причем в одном отряде нет двух клонов с одинаковыми специальностями. Понятно, что набор специальностей клонов в первом отряде совпадает с набором специальностей во втором.</p>

<p>Чтобы выбрать лучших клонов, для каждого отряда была сделана специальная карточка со всеми оценками клонов, полученными ими когда-то в академии. Известно, что карточки делались следующим образом:</p>

<ul>
	<li>из первого отряда вызывался очередной клон</li>
	<li>из второго отряда вызывался клон, владеющий той же специальностью, что и клон из первого отряда</li>
	<li>оценка клона из первого отряда дописывалась справа на карточку первого отряда, а оценка клона из второго отряда --- на карточку второго отряда</li>
	<li>описанные действия совершались до тех пор, пока в отрядах оставались неучтенные клоны</li>
	<li>оценка клона --- число от <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$0$</span></mjx-container> до <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c39"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>9</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$9$</span> </mjx-container></li>
</ul>

<p>После этого по каждой специальности был выбран тот клон, оценка которого не меньше, чем у клона с аналогичной специальностью. В конце на получившийся отряд была заведена аналогичная карточка. Известно, что при ее составлении порядок специальностей был тот же, что и при составлении карточек для двух исходных отрядов. Однако, эту карточку потеряли, и теперь вам необходимо помочь ее восстановить.</p>

### 입력 

 <p>В двух строках записаны два числа одинаковой длины <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$a$</span></mjx-container> и <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44F TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$b$</span></mjx-container> (<mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D44F TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-msup space="4"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-script style="vertical-align: 0.393em;"><mjx-texatom size="s" texclass="ORD"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c38"></mjx-c></mjx-mn></mjx-texatom></mjx-script></mjx-msup></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>a</mi><mo>,</mo><mi>b</mi><mo>≤</mo><msup><mn>10</mn><mrow data-mjx-texclass="ORD"><mn>18</mn></mrow></msup></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le a, b \le 10^{18}$</span></mjx-container>). <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$a$</span></mjx-container> --- число, которое было записано на карточке первого отряда, а <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44F TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>b</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$b$</span></mjx-container> --- второго. Числа имеют одинаковую длину и не содержат ведущих нулей.</p>

### 출력 

 <p>В единственной строке выведите число, которое было написано на карточке отряда, полученного в результате описанного объединения.</p>

