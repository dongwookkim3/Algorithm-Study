# [Bronze IV] I Speak TXTMSG - 6841 

[문제 링크](https://www.acmicpc.net/problem/6841) 

### 성능 요약

메모리: 1116 KB, 시간: 0 ms

### 분류

구현, 문자열

### 문제 설명

<p>Text messaging using a cell phone is popular among teenagers. The messages can appear peculiar because short forms and symbols are used to abbreviate messages and hence reduce typing.</p>

<p>For example, “LOL” means “laughing out loud” and “:-)” is called an emoticon which looks like a happy face (on its side) and it indicates chuckling. This is all quite a mystery to some adults.</p>

<p>Write a program that will continually input a short form and output the translation for an adult using the following translation table:</p>

<table class="table table-bordered">
	<thead>
		<tr>
			<th>Short Form</th>
			<th>Translation</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td>CU</td>
			<td>see you</td>
		</tr>
		<tr>
			<td>:-)</td>
			<td>I’m happy</td>
		</tr>
		<tr>
			<td>:-(</td>
			<td>I’m unhappy</td>
		</tr>
		<tr>
			<td>;-)</td>
			<td>wink</td>
		</tr>
		<tr>
			<td>:-P</td>
			<td>stick out my tongue</td>
		</tr>
		<tr>
			<td>(~.~)</td>
			<td>sleepy</td>
		</tr>
		<tr>
			<td>TA</td>
			<td>totally awesome</td>
		</tr>
		<tr>
			<td>CCC</td>
			<td>Canadian Computing Competition</td>
		</tr>
		<tr>
			<td>CUZ</td>
			<td>because</td>
		</tr>
		<tr>
			<td>TY</td>
			<td>thank-you</td>
		</tr>
		<tr>
			<td>YW</td>
			<td>you’re welcome</td>
		</tr>
		<tr>
			<td>TTYL</td>
			<td>talk to you later</td>
		</tr>
	</tbody>
</table>

### 입력 

 <p>The user will be prompted to enter text to be translated one line at a time. When the short form “TTYL” is entered, the program ends. Users may enter text that is found in the translation table, or they may enter other words. All entered text will be symbols or upper case letters. There will be no spaces and no quotation marks.</p>

### 출력 

 <p>The program will output text immediately after each line of input. If the input is one of the phrases in the translation table, the output will be the translation; if the input does not appear in the table, the output will be the original word. The translation of the last short form entered “TTYL” should be output.</p>

