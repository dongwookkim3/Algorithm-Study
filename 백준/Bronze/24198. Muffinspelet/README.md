# [Bronze III] Muffinspelet - 24198 

[문제 링크](https://www.acmicpc.net/problem/24198) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

사칙연산, 구현, 수학, 시뮬레이션

### 제출 일자

2024년 2월 27일 01:33:06

### 문제 설명

<p>Alf och Beata var två ungdomar som levde för länge, länge sedan, på tiden innan man kunde spendera sina eftermiddagar med programmeringstävlingar. Deras liv var således mycket tråkigare än vad dagens ungdomars liv är. Hur man kan överleva utan datorer, kanske du frågar dig. Svaret är enkelt: man bakar!</p>

<p>Våra två ungdomar älskade att baka muffins, och hade ofta stora högar när de var klara med bakningen. För att inte fylla sina kök med muffins utmanade Beata sin kompis på ett spel varje kväll - <em>Muffinspelet</em>.</p>

<p>Muffinspelet spelas av två spelare (i vårt fall, Alf och Beata), samt en stor hög med <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container> muffins. Spelarna turas nu om att göra drag. Ett drag går ut på att spelare <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A$</span></mjx-container> delar upp muffinshögen i två delar (där en av högarna kanske är tom). Motspelaren väljer sedan en av högarna, och äter upp alla muffins i högen. I nästa drag byter spelarna roll, så spelare <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>B</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$B$</span></mjx-container> delar upp muffinshögen och spelare <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A$</span></mjx-container> äter upp en av högarna. De turas om på detta vis ända tills alla muffins är slut.</p>

<p>Alf börjar med att göra ett drag (dvs att dela upp den stora högen), och Beata börjar med att äta upp en av högarna. Kan du beräkna hur många muffins Alf och Beata kommer äta under spelets gång om de båda spelar så bra som möjligt (alltså vill ha så många muffins som möjligt själva)?</p>

<p><em>Ledning: när man delar en hög med muffins vill man alltid göra det i två högar vars storlekar är så lika som möjligt (se exempelförklaringarna).</em></p>

### 입력 

 <p>Den första och enda raden i indatan innehåller heltalet <mjx-container class="MathJax" jax="CHTML" style="font-size: 99.9%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>, antalet muffins i högen från början.</p>

### 출력 

 <p>Du ska skriva ut två heltal: antalet muffins som Alf kommer äta och antalet muffins som Beata kommer äta om de båda spelar så bra som möjligt.</p>

