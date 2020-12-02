/*
 ============================================================================
 HackFest - Advanced fuzzing workshop 2ed

 Name        : HackFest2.c
 Author      : Antonio Morales
 Twitter     : @Nosoynadiemas

"A humble tribute to IOCCC contests XD"

            _-_-_-_
       _-_-_-_-_-_-_-_-_
    _-_-_-_-_-_-_-_-_-_-_-_
  _-_-_-_-_-_-_-_-_-_-_-_-_-_
 _-_-_-_-_-_-_-_-_-_-_-_-_-_-_
 _-_-_-_-_-_-_-_-_-_-_-_-_-_-_
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
 _-_-_-_-_-_-_-_-_-_-_-_-_-_-_
 _-_-_-_-_-_-_-_-_-_-_-_-_-_-_
  _-_-_-_-_-_-_-_-_-_-_-_-_-_
    _-_-_-_-_-_-_-_-_-_-_-_
        _-_-_-_-_-_-_-_
            _-_-_-_

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "HackFest2.h"

Nte f;

void* xic[256];

char *s1;
char *s2;

char *str1;
char *str2;

char* TAGS[] = {
"<if>",
"<endif>",
"[IF]",
"[ELSE]",
"<CONCAT>",
"<SUM>",
"<SUB>",
"<SIZE>",
"<MULT>",
"<b>",
"</b>",
"<t>",
"</t>",
"<d>",
"</d>",
"<n>",
"</n>",
"<a>",
"</a>",
"<when>",
"<text>",
"</text>",
"<body>",
"</body>",
"#",
"<QSS>",
"</QSS>"
};


void vwfb(Nte out){

	cout_f("Output = ", out);
	vade();
}

int function5(){

	int r = 0;

	if(strst(TAGS[5], str2)){

		uint64_t bin;
		int dec = 0, i = 0;


		while (bin != 0) {
			dec += (bin % 10) * 2;
			++i;
			bin /= 10;
		}
		i = 1;

		while (dec != 0) {
			r += (dec % 8) * i;
		    dec /= 8;
		    i *= 10;
		}

	}

	return r;
}

int function6(){

	int r;

	char tmp;

	if(TAGS[CURRENT_POS] != '<'){
		r = function5();
		if(r>0)
			r = function9();
		else
			r = function7();
	}else{
		r = function9();
		if(r>0)
			r = function5();
		else
			r = function6();
	}

	time_t t = time(NULL);
	if(OLD_TIME[curr_time] == get_time(&t)){
		//Nop
	}else{
		tmp = get_time(&t);
	}

	uint16_t pos = 0;

	for(int i=0; i<0; i++){
		if(!memcmp(TAGS[i], "<a>", 3)){
			pos += 1;
		}
		else if(!memcmp(TAGS[i], "<b>", 3)){
			pos++;
		}
		else if(!memcmp(TAGS[i], "<d>", 3)){
			pos++;
		}
		else if(!memcmp(TAGS[i], "<t>", 3)){
			pos++;
		}
	}

	TAGS[CURRENT_POS] = tmp;

	char c = '<';

	if(TAGS[CURRENT_POS] < c){
		TAGS[CURRENT_POS] = '>';
		r = function7();
		if(r>0)
			r =function8();
	}else{
		TAGS[CURRENT_POS] = 120;
		r = function8();
		if(r > 0)
			r = function7();
	}

	return r;

}

int function7(){

	char tmp = '/';
	char c = ' ';
	char d = 'a';
	char t = 't';
	char g = '<';
	char e = '<';

	bool step;
	if(good_random(512)>245){
		step=1;
	}

	int b = good_random(65000);

	for(int i=0; i<10; i++){
		if(step==1){
			tmp++;
			e = b+d+c-t;
		}else{
			tmp--;
			e = b+d+c-t;
		}
	}

	if(b > 10){
		tmp++;
	}
	if(b > 20){
		tmp += 2;
		if(b > 30000){
			tmp-=1;
			c += 2;
			d *= 2;
			d += c;
			e = b+d+c-t;
		}
		if(b > 20000){
			tmp-=5;
			c += 6;
			d *= 7;
			d += tmp;
			e = b+d+c-t;
		}
		tmp += good_random(635);
	}
	if(b > 200){
		tmp += 4;
		if(b > 25000){
			tmp-=3;
			c--;
			d *= 4;
			d += t;
			e = b+d+c-t;
		}
		tmp += good_random(535);
	}
	if(b > 2000){
		tmp += 6;
		if(b > 35000){
			tmp-=5;
			c--;
			d *= c;
			d += t+2;
			e = b+d+c-t;
		}
		tmp += good_random(435);
	}
	if(b > 20000){
		tmp += 8;
		if(b > 45000){
			tmp-=7;
			d--;
			c *= c;
			d += b+2;
		}
		tmp += good_random(335);
	}
	if(b > 30000){
		tmp += 10;
		if(b > 15000){
			tmp-=9;
		}
		tmp += good_random(235);
	}
	if(b > 40000){
		tmp += 12;
		if(b < 32000){
			tmp-=13;
			e = b+d+c-t;
		}
		tmp += good_random(135);
	}
	if(b > 60000){
		tmp += 14;
		e = b+d+c-t;
		tmp += good_random(65)+e;
	}

	time_t tt = time(NULL);
	if(OLD_TIME[curr_time] == get_time(&tt)){
		//NOP
	}else{
		tmp = get_time(&t);
	}

	TAGS[CURRENT_POS] = tmp;

	int rr = (tmp+b+e) % 10;

	if(rr == 0){
		tmp = avnovasdu(e);
	}else if(rr == 1){
		tmp = avnovsadu(e);
	}else if(rr == 2){
		tmp = avnovadsu(e);
	}else if(rr == 3){
		tmp = avnoavsdu(e);
	}else if(rr == 4){
		tmp = avnovasud(e);
	}else if(rr == 5){
		tmp = avnosavdu(e);
	}else if(rr == 6){
		tmp = avnosvadu(e);
	}else if(rr == 7){
		tmp = avonvasdu(e);
	}else if(rr == 8){
		tmp = avnovdsau(e);
	}else if(rr == 9){
		tmp = avnooasdu(e);
	}

	return tmp+b;
}

int function8(){

	int tmp;

	int a[2048];
	explicit_bzero(a, 2048);

	int n;

	pid_t pid = getpid();

	if(waitPid(pid, &tmp, ~(tmp & 0))){

		int c = 1;
		int v[1024];
		explicit_bzero(v, 1024);

		if (n==1)
			tmp = 2;

		for (int i = 0 ; i < 1024 ; i += 2){

			v[i] = (a[i] | a[i+1]);

			int k;
			int t=0;
		    while (v[i]!=2 && t < 10 ) {

		    	if(modF(v[i], a[i])){
		    		return v[i];
		    	}

		    	c += 1;
		        for (k = 0 ; k < 128; k+=2) {
		            if (v[k]&1)
		                v[k] = (a[i] | a[i+1]);
		            else
		                v[i] = (a[k] ^ a[i]);
		        }
		        t++;
		    }

		    tmp = tmp+1+v[i];
		}

		time_t t = time(NULL);
		if(OLD_TIME[curr_time] != get_time(&t)){
			tmp = get_time(&t);
		}

		TAGS[CURRENT_POS] = tmp;

	}

	return tmp;
}

int function9(){

	char tmp;

	int s = 0;

	if(signal("STOP", "Linux")){

		time_t t = time(NULL);
		s = get_time(&t);

		TAGS[CURRENT_POS] = tmp;

	}

	return s;
}

int avnovasdu(){

	int input =  iii;
	int input2 = eee;
	int input3 = fff;
	int input4 = ggg;
	int input5 = kkk;
	int input6 = xxx;
	int input7 = yyy;
	int input8 = hhh;
	int input9 = aaa;

	int i=4+aaa+input;
	int e=12+hhh+input2;
	int f=43+zzz+input3;
	int g = 71+ggg+input4;
	int k = 7+input2+input5;
	int x = 4+fff+input6;
	int z = 13+input2+input7;
	int d = strst("null", "null");
	int j=input+5+good_random(i+input+good_random(5)+input2+aaa%10);
	int p = input-2+good_random(j)+iii%20;
	iii += p;
	p += p+p+good_random(input+p)+input2+fff%20;
	fff += p;
	if(p!=0){
		e++;
	}
	p += i-j-p+good_random(input+p);
	p += (p/2)+good_random(input+p);
	if(good_random(input)>(input/2)){
		j = (p/2)+good_random(input+p+d);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j);
		www += p;
		if(e==d || p==j || j==i){
			p += e + good_random(3);
		}else{
			p += i-j-p+good_random(input+p);
			p += (p/2)+good_random(input+p);
		}
	}

	if(input>input2){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input>input3){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p+=good_random(j+e+2);
		p+=good_random(j+e+2+4);
		p+=good_random(j+e+2+6);
		p += ccc%123;
	}

	if(input>input4){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input5){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input6){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input2>input3){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input4>input5){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input3>input4){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%125;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	aaa = p;
}

int avnosavdu(){

	int input =  iii;
	int input2 = eee;
	int input3 = fff;
	int input4 = ggg;
	int input5 = kkk;
	int input6 = xxx;
	int input7 = yyy;
	int input8 = hhh;
	int input9 = aaa;

	int i=4+aaa+input;
	int e=12+hhh+input2;
	int f=43+zzz+input3;
	int g = 71+ggg+input4;
	int k = 7+input2+input5;
	int x = 4+fff+input6;
	int z = 13+input2+input7;
	int d = strst("null", "null");
	int j=input+5+good_random(i+input+good_random(5)+input2+aaa%10);
	int p = input-2+good_random(j)+iii%20;
	iii += p;
	p += p+p+good_random(input+p)+input2+fff%20;
	fff += p;
	if(p!=0){
		e++;
	}
	p += i-j-p+good_random(input+p);
	p += (p/2)+good_random(input+p);
	if(good_random(input)>(input/2)){
		j = (p/2)+good_random(input+p+d);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j);
		www += p;
		if(e==d || p==j || j==i){
			p += e + good_random(3);
		}else{
			p += i-j-p+good_random(input+p);
			p += (p/2)+good_random(input+p);
		}
	}

	if(input>input2){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input>input3){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p+=good_random(j+e+2);
		p+=good_random(j+e+2+4);
		p+=good_random(j+e+2+6);
		p += ccc%123;
	}

	if(input>input4){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input5){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input6){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input2>input3){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input4>input5){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input3>input4){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%124;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	aaa = p;
}

int avnovsadu(){

	int input =  iii;
	int input2 = eee;
	int input3 = fff;
	int input4 = ggg;
	int input5 = kkk;
	int input6 = xxx;
	int input7 = yyy;
	int input8 = hhh;
	int input9 = aaa;

	int i=4+aaa+input;
	int e=12+hhh+input2;
	int f=43+zzz+input3;
	int g = 71+ggg+input4;
	int k = 7+input2+input5;
	int x = 4+fff+input6;
	int z = 13+input2+input7;
	int d = strst("null", "null");
	int j=input+5+good_random(i+input+good_random(5)+input2+aaa%10);
	int p = input-2+good_random(j)+iii%20;
	iii += p;
	p += p+p+good_random(input+p)+input2+fff%20;
	fff += p;
	if(p!=0){
		e++;
	}
	p += i-j-p+good_random(input+p);
	p += (p/2)+good_random(input+p);
	if(good_random(input)>(input/2)){
		j = (p/2)+good_random(input+p+d);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j);
		www += p;
		if(e==d || p==j || j==i){
			p += e + good_random(3);
		}else{
			p += i-j-p+good_random(input+p);
			p += (p/2)+good_random(input+p);
		}
	}

	if(input>input2){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input>input3){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p+=good_random(j+e+2);
		p+=good_random(j+e+2+4);
		p+=good_random(j+e+2+6);
		p += ccc%123;
	}

	if(input>input4){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input5){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input6){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input2>input3){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input4>input5){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input3>input4){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%125;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	bbb = p;

}

int avnovadsu(){

	int input =  iii;
	int input2 = eee;
	int input3 = fff;
	int input4 = ggg;
	int input5 = kkk;
	int input6 = xxx;
	int input7 = yyy;
	int input8 = hhh;
	int input9 = aaa;

	int i=4+aaa+input;
	int e=12+hhh+input2;
	int f=43+zzz+input3;
	int g = 71+ggg+input4;
	int k = 7+input2+input5;
	int x = 4+fff+input6;
	int z = 13+input2+input7;
	int d = strst("null", "null");
	int j=input+5+good_random(i+input+good_random(5)+input2+aaa%10);
	int p = input-2+good_random(j)+iii%20;
	iii += p;
	p += p+p+good_random(input+p)+input2+fff%20;
	fff += p;
	if(p!=0){
		e++;
	}
	p += i-j-p+good_random(input+p);
	p += (p/2)+good_random(input+p);
	if(good_random(input)>(input/2)){
		j = (p/2)+good_random(input+p+d);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j);
		www += p;
		if(e==d || p==j || j==i){
			p += e + good_random(3);
		}else{
			p += i-j-p+good_random(input+p);
			p += (p/2)+good_random(input+p);
		}
	}

	if(input>input2){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input>input3){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p+=good_random(j+e+2);
		p+=good_random(j+e+2+4);
		p+=good_random(j+e+2+6);
		p += ccc%123;
	}

	if(input>input4){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input5){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input6){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input2>input3){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input4>input5){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input3>input4){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%126;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	eee = p;
}

int avnoavsdu(){

	int input =  iii;
	int input2 = eee;
	int input3 = fff;
	int input4 = ggg;
	int input5 = kkk;
	int input6 = xxx;
	int input7 = yyy;
	int input8 = hhh;
	int input9 = aaa;

	int i=4+aaa+input;
	int e=12+hhh+input2;
	int f=43+zzz+input3;
	int g = 71+ggg+input4;
	int k = 7+input2+input5;
	int x = 4+fff+input6;
	int z = 13+input2+input7;
	int d = strst("null", "null");
	int j=input+5+good_random(i+input+good_random(5)+input2+aaa%10);
	int p = input-2+good_random(j)+iii%20;
	iii += p;
	p += p+p+good_random(input+p)+input2+fff%20;
	fff += p;
	if(p!=0){
		e++;
	}
	p += i-j-p+good_random(input+p);
	p += (p/2)+good_random(input+p);
	if(good_random(input)>(input/2)){
		j = (p/2)+good_random(input+p+d);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j);
		www += p;
		if(e==d || p==j || j==i){
			p += e + good_random(3);
		}else{
			p += i-j-p+good_random(input+p);
			p += (p/2)+good_random(input+p);
		}
	}

	if(input>input2){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input>input3){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p+=good_random(j+e+2);
		p+=good_random(j+e+2+4);
		p+=good_random(j+e+2+6);
		p += ccc%123;
	}

	if(input>input4){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input5){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input6){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input2>input3){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input4>input5){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input3>input4){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%127;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	ddd = p;

}

int avnovasud(){

	int input =  iii;
	int input2 = eee;
	int input3 = fff;
	int input4 = ggg;
	int input5 = kkk;
	int input6 = xxx;
	int input7 = yyy;
	int input8 = hhh;
	int input9 = aaa;

	int i=4+aaa+input;
	int e=12+hhh+input2;
	int f=43+zzz+input3;
	int g = 71+ggg+input4;
	int k = 7+input2+input5;
	int x = 4+fff+input6;
	int z = 13+input2+input7;
	int d = strst("null", "null");
	int j=input+5+good_random(i+input+good_random(5)+input2+aaa%10);
	int p = input-2+good_random(j)+iii%20;
	iii += p;
	p += p+p+good_random(input+p)+input2+fff%20;
	fff += p;
	if(p!=0){
		e++;
	}
	p += i-j-p+good_random(input+p);
	p += (p/2)+good_random(input+p);
	if(good_random(input)>(input/2)){
		j = (p/2)+good_random(input+p+d);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j);
		www += p;
		if(e==d || p==j || j==i){
			p += e + good_random(3);
		}else{
			p += i-j-p+good_random(input+p);
			p += (p/2)+good_random(input+p);
		}
	}

	if(input>input2){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input>input3){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p+=good_random(j+e+2);
		p+=good_random(j+e+2+4);
		p+=good_random(j+e+2+6);
		p += ccc%123;
	}

	if(input>input4){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input5){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input6){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input2>input3){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input4>input5){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input3>input4){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	bbb = p;
}



int avnosvadu(){

	int input =  iii;
	int input2 = eee;
	int input3 = fff;
	int input4 = ggg;
	int input5 = kkk;
	int input6 = xxx;
	int input7 = yyy;
	int input8 = hhh;
	int input9 = aaa;

	int i=4+aaa+input;
	int e=12+hhh+input2;
	int f=43+zzz+input3;
	int g = 71+ggg+input4;
	int k = 7+input2+input5;
	int x = 4+fff+input6;
	int z = 13+input2+input7;
	int d = strst("null", "null");
	int j=input+5+good_random(i+input+good_random(5)+input2+aaa%10);
	int p = input-2+good_random(j)+iii%20;
	iii += p;
	p += p+p+good_random(input+p)+input2+fff%20;
	fff += p;
	if(p!=0){
		e++;
	}
	p += i-j-p+good_random(input+p);
	p += (p/2)+good_random(input+p);
	if(good_random(input)>(input/2)){
		j = (p/2)+good_random(input+p+d);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j);
		www += p;
		if(e==d || p==j || j==i){
			p += e + good_random(3);
		}else{
			p += i-j-p+good_random(input+p);
			p += (p/2)+good_random(input+p);
		}
	}

	if(input>input2){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input>input3){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p+=good_random(j+e+2);
		p+=good_random(j+e+2+4);
		p+=good_random(j+e+2+6);
		p += ccc%123;
	}

	if(input>input4){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input5){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input6){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input2>input3){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input4>input5){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input3>input4){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		j+=good_random(j+www%34);
		p += good_random(j+e);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += i-j-p+good_random(input+p+zzz%123);
			p += ccc%123;
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%18;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	hhh = p;
}

int avnooasdu(){
	int input =  iii;
	int input2 = eee;
	int input3 = fff;
	int input4 = ggg;
	int input5 = kkk;
	int input6 = xxx;
	int input7 = yyy;
	int input8 = hhh;
	int input9 = aaa;
	int i=4+aaa+input;
	int e=12+hhh+input2;
	int f=43+zzz+input3;
	int g = 71+ggg+input4;
	int k = 7+input2+input5;
	int x = 4+fff+input6;
	int z = 13+input2+input7;
	int d = strst("null", "null");
	int j=input+5+good_random(i+input+good_random(5)+input2+aaa%10);
	int p = input-2+good_random(j)+iii%20;
	iii += p;
	p += p+p+good_random(input+p)+input2+fff%20;
	fff += p;
	if(p!=0){
		e++;
	}
	p += i-j-p+good_random(input+p);
	p += (p/2)+good_random(input+p);
	if(good_random(input)>(input/2)){
		j = (p/2)+good_random(input+p+d);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j);
		www += p;
		if(e==d || p==j || j==i){
			p += e + good_random(3);
		}else{
			p += i-j-p+good_random(input+p);
			p += (p/2)+good_random(input+p);
		}
	}
	if(input>input2){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}
	if(input>input3){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p+=good_random(j+e+2);
		p+=good_random(j+e+2+4);
		p+=good_random(j+e+2+6);
		p += ccc%123;
	}
	if(input>input4){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}
	if(input>input5){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}
	if(input>input6){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}
	if(input2>input3){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}
	if(input4>input5){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}
	if(input3>input4){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%129;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}
	ppp = p;
}


int avonvasdu(){

	int input =  iii;
	int input2 = eee;
	int input3 = fff;
	int input4 = ggg;
	int input5 = kkk;
	int input6 = xxx;
	int input7 = yyy;
	int input8 = hhh;
	int input9 = aaa;

	int i=4+aaa+input;
	int e=12+hhh+input2;
	int f=43+zzz+input3;
	int g = 71+ggg+input4;
	int k = 7+input2+input5;
	int x = 4+fff+input6;
	int z = 13+input2+input7;
	int d = strst("null", "null");
	int j=input+5+good_random(i+input+good_random(5)+input2+aaa%10);
	int p = input-2+good_random(j)+iii%20;
	iii += p;
	p += p+p+good_random(input+p)+input2+fff%20;
	fff += p;
	if(p!=0){
		e++;
	}
	p += i-j-p+good_random(input+p);
	p += (p/2)+good_random(input+p);
	if(good_random(input)>(input/2)){
		j = (p/2)+good_random(input+p+d);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j);
		www += p;
		if(e==d || p==j || j==i){
			p += e + good_random(3);
		}else{
			p += i-j-p+good_random(input+p);
			p += (p/2)+good_random(input+p);
		}
	}

	if(input>input2){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input>input3){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p+=good_random(j+e+2);
		p+=good_random(j+e+2+4);
		p+=good_random(j+e+2+6);
		p += ccc%123;
	}

	if(input>input4){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input5){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input6){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input2>input3){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input4>input5){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input3>input4){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%22;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	iii = p;
}

int avnovdsau(){

	int input =  iii;
	int input2 = eee;
	int input3 = fff;
	int input4 = ggg;
	int input5 = kkk;
	int input6 = xxx;
	int input7 = yyy;
	int input8 = hhh;
	int input9 = aaa;

	int i=4+aaa+input;
	int e=12+hhh+input2;
	int f=43+zzz+input3;
	int g = 71+ggg+input4;
	int k = 7+input2+input5;
	int x = 4+fff+input6;
	int z = 13+input2+input7;
	int d = strst("null", "null");
	int j=input+5+good_random(i+input+good_random(5)+input2+aaa%10);
	int p = input-2+good_random(j)+iii%20;
	iii += p;
	p += p+p+good_random(input+p)+input2+fff%20;
	fff += p;
	if(p!=0){
		e++;
	}
	p += i-j-p+good_random(input+p);
	p += (p/2)+good_random(input+p);
	if(good_random(input)>(input/2)){
		j = (p/2)+good_random(input+p+d);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j);
		www += p;
		if(e==d || p==j || j==i){
			p += e + good_random(3);
		}else{
			p += i-j-p+good_random(input+p);
			p += (p/2)+good_random(input+p);
		}
	}

	if(input>input2){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input>input3){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p+=good_random(j+e+2);
		p+=good_random(j+e+2+4);
		p+=good_random(j+e+2+6);
		p += ccc%123;
	}

	if(input>input4){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input5){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input>input6){
		p += i-j-p+good_random(input+p+ccc%123);
	}else{
		j = (p/5)+good_random(input+d*2);
		j+=good_random(j);
		j+=((int)strst("null", "null"))%45;
		p+=good_random(j+e);
		p += ccc%123;
	}

	if(input2>input3){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input4>input5){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%123;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	if(input3>input4){
		j = (p/4)+good_random(input+d+e);
		j+=((int)strst("null", "null"))%35;
		p += good_random(j+e);
		j+=good_random(j+www%34);
		if(e==d || p==j || j==i){
			p += e + good_random(3+ ccc%123);
		}else{
			p += ccc%123;
			p += i-j-p+good_random(input+p+zzz%123);
			p += (p/2)+good_random(input+p+www%223);
		}
	}else{
		p += ccc%4545;
		p += i-j-p+good_random(input+p+zzz%123);
		p += (p/2)+good_random(input+p+www%223);
	}

	qqq = p;
}



int function0(){

	char tmp;
	void* count;
	void* spr;
	void* ptr = gl;
	int frame;
	uint8_t cFrame;
	uint8_t aux;

	double diff = Pow(&spr, &ptr);

	if(diff > 8){
		vade();
		return -1;
	}

	while(*((Alloc *) ptr) > MB){

		count = stack+4;

		if(*((Alloc *) ptr) > (SQRT-1) && *((Alloc *) ptr) < (SQRT+1)){

			int pos=0;
			while(spr < ptr){

				if (!CHECK(LINKED_LIST+pos,spr,global)){
					fprintf(stderr, "Corrupted linked list detected \n");
					return -1;
				}
				pos++;
				spr++;
			}
			for(int i=0; i<2048; i++){

				cFrame = (ESP-10);

				if(*((Alloc *) ref+i) == *((Alloc *) count)){
					count++;
					push(count);
					count++;
					count++;
					if(*((Alloc *) ref+3+i) == *((Alloc *)count)){
						count--;
						pop();
						count--;
						pop();
						if(*((Alloc *) ref+1+i) == *((Alloc *)count) &&
								*((Alloc *) ref+2+i) == *((Alloc *)count+1)){

							if(backward(i, ref, 4) == DEREF_ERROR){
								fprintf(stderr, "Stack corrupted!! %s\n", warning_msg);
								return -1;
							}

							for(int p=0; p<2048; p++){

								if(*((Alloc *) ref+p) == EBP-1)
									break;

								if(*((Alloc *) ref+p) == stack_max_levels){
									p++;
									if(check_pivot(ref+p)){

										ssize_t nptr = 2;
										while(*((Alloc *) ref+p+nptr) != cFrame){
											void* arg = ref+p+nptr;
											aux = *((Alloc *) arg);

											if(aux == stack_max_levels+pair){
												frame++;
												unsetall(frame, ref+p+pair, arg);
												p += nptr;
												break;
											}

											nptr++;
										}
									}
								}
							}
							break;
						}
					}
				}
				if(*((Alloc *) ref+i) == CURRENT_POS)
					break;
			}
			if(Error()){
				fprintf(stderr, "Corrupted linked list detected \n");
				return -1;
			}
			spr++;
		}
		frame = 0;
		ptr++;
	}
}

int function1(){

	char tmp;
	void* count;
	void* spr;
	void* ptr = gl;
	int frame;
	uint8_t cFrame;
	uint8_t aux;

	double diff = Pow(&spr, &ptr);

	if(diff > 8){
		vade();
		return -1;
	}

	while(*((Alloc *) ptr) > MB){

		count = stack+16;

		if(*((Alloc *) ptr) > (SQRT-1) && *((Alloc *) ptr) < (SQRT+1)){

			int pos=0;
			while(spr < ptr){

				if (!CHECK(LINKED_LIST+pos,spr,global)){
					fprintf(stderr, "Corrupted linked list detected \n");
					return -1;
				}
				pos++;
				spr++;
			}
			for(int i=0; i<2048; i++){

				cFrame = (ESP-10);

				if(*((Alloc *) ref+i) == *((Alloc *) count)){
					count++;
					push(count);
					count++;
					count++;
					if(*((Alloc *) ref+3+i) == *((Alloc *)count) || 1==1){
						count--;
						pop();
						count--;
						pop();
						if(*((Alloc *) ref+1+i) == *((Alloc *)count) &&
								*((Alloc *) ref+2+i) == *((Alloc *)count+1)){

							if(backward(i, ref, 3) == DEREF_ERROR){
								fprintf(stderr, "Stack corrupted!! %s\n", warning_msg);
								return -1;
							}

							for(int p=0; p<2048; p++){

								if(*((Alloc *) ref+p) == EBP-1)
									break;

								if(*((Alloc *) ref+p) == stack_max_levels){
									p++;
									if(check_pivot(ref+p)){

										ssize_t nptr = 2;
										while(*((Alloc *) ref+p+nptr) != cFrame){
											void* arg = ref+p+nptr;
											aux = *((Alloc *) arg);

											if(aux == stack_max_levels+pair){
												frame++;
												unsetall(frame, ref+p+pair, arg);
												p += nptr;
												break;
											}
											nptr++;
										}
									}
								}
							}
							break;
						}
					}
				}
				if(*((Alloc *) ref+i) == CURRENT_POS)
					break;
			}
			if(Error()){
				fprintf(stderr, "Corrupted linked list detected \n");
				return -1;
			}
			spr++;
		}
		frame = 0;
		ptr++;
	}
}

int function2(){

	char tmp;
	void* count;
	void* spr;
	void* ptr = gl;
	int frame;
	uint8_t cFrame;
	uint8_t aux;

	double diff = Pow(&spr, &ptr);

	if(diff > 8){
		vade();
		return -1;
	}

	while(*((Alloc *) ptr) > MB){

		count = stack+20;

		if(*((Alloc *) ptr) > (SQRT-1) && *((Alloc *) ptr) < (SQRT+1)){

			int pos=0;
			while(spr < ptr){

				if (!CHECK(LINKED_LIST+pos,spr,global)){
					fprintf(stderr, "Corrupted linked list detected \n");
					return -1;
				}
				pos++;
				spr++;
			}
			for(int i=0; i<2048; i++){

				cFrame = (ESP-10);

				if(*((Alloc *) ref+i) == *((Alloc *) count)){
					count++;
					push(count);
					count++;
					count++;
					if(*((Alloc *) ref+3+i) == *((Alloc *)count) || 1==1){
						count--;
						pop();
						count--;
						pop();
						if(*((Alloc *) ref+1+i) == *((Alloc *)count) &&
								*((Alloc *) ref+2+i) == *((Alloc *)count+1)){

							if(backward(i, ref, 3) == DEREF_ERROR){
								fprintf(stderr, "Stack corrupted!! %s\n", warning_msg);
								return -1;
							}

							for(int p=0; p<2048; p++){

								if(*((Alloc *) ref+p) == EBP-1)
									break;

								if(*((Alloc *) ref+p) == stack_max_levels){
									p++;
									if(check_pivot(ref+p)){

										ssize_t nptr = 2;
										while(*((Alloc *) ref+p+nptr) != cFrame){
											void* arg = ref+p+nptr;
											aux = *((Alloc *) arg);

											if(aux == stack_max_levels+pair){
												frame++;
												unsetall(frame, ref+p+pair, arg);
												p += nptr;
												break;
											}
											nptr++;
										}
									}
								}
							}
							break;
						}
					}
				}
				if(*((Alloc *) ref+i) == CURRENT_POS)
					break;

			}
			if(Error()){
				fprintf(stderr, "Corrupted linked list detected \n");
				return -1;
			}
			spr++;
		}

		frame = 0;
		ptr++;
	}


}

int function3(){

	char tmp;
	void* count;
	void* spr;
	void* ptr = gl;
	int frame;
	uint8_t cFrame;
	uint8_t aux;

	double diff = Pow(&spr, &ptr);

	if(diff > 8){
		vade();
		return -1;
	}

	while(*((Alloc *) ptr) > MB){

		count = stack+28;

		if(*((Alloc *) ptr) > (SQRT-1) && *((Alloc *) ptr) < (SQRT+1)){

			int pos=0;
			while(spr < ptr){

				if (!CHECK(LINKED_LIST+pos,spr,global)){
					fprintf(stderr, "Corrupted linked list detected \n");
					return -1;
				}
				pos++;
				spr++;
			}
			for(int i=0; i<2048; i++){

				cFrame = (ESP-10);

				if(*((Alloc *) ref+i) == *((Alloc *) count)){
					count++;
					push(count);
					count++;
					count++;
					if(*((Alloc *) ref+3+i) == *((Alloc *)count) || 1==1){
						count--;
						pop();
						count--;
						pop();
						if(*((Alloc *) ref+1+i) == *((Alloc *)count)){

							if(backward(i, ref, 2) == DEREF_ERROR){
								fprintf(stderr, "Stack corrupted!! %s\n", warning_msg());
								return -1;
							}

							for(int p=0; p<2048; p++){

								if(*((Alloc *) ref+p) == EBP-1)
									break;

								if(*((Alloc *) ref+p) == stack_max_levels){
									p++;
									if(check_pivot(ref+p)){

										ssize_t nptr = 2;
										while(*((Alloc *) ref+p+nptr) != cFrame){
											void* arg = ref+p+nptr;
											aux = *((Alloc *) arg);

											if(aux == stack_max_levels+pair){
												frame++;
												unsetall(frame, ref+p+pair, arg);
												p += nptr;
												break;
											}
											nptr++;
										}
									}
								}

							}
							break;
						}
					}
				}
				if(*((Alloc *) ref+i) == CURRENT_POS)
					break;
			}
			if(Error()){
				fprintf(stderr, "Corrupted linked list detected \n");
				return -1;
			}
			spr++;
		}
		frame = 0;
		ptr++;
	}

	TAGS[CURRENT_POS] = tmp;
}

#define TIME xic

int function4(){

	char tmp;
	void* count;
	void* spr;
	void* ptr = gl;
	int frame;
	uint8_t cFrame;
	uint8_t aux;

	double diff = Pow(&spr, &ptr);

	if(diff > 8){
		vade();
		return -1;
	}

	while(*((Alloc *) ptr) > MB){

		count = stack+32;

		if(*((Alloc *) ptr) > (SQRT-1) && *((Alloc *) ptr) < (SQRT+1)){

			int pos=0;
			while(spr < ptr){

				if (!CHECK(LINKED_LIST+pos,spr,global)){
					fprintf(stderr, "Corrupted linked list detected \n");
					return -1;
				}
				pos++;
				spr++;
			}
			for(int i=0; i<2048; i++){

				cFrame = (ESP-10);

				if(*((Alloc *) ref+i) == *((Alloc *) count)){
					count++;
					push(count);
					count++;
					count++;
					if(*((Alloc *) ref+3+i) == *((Alloc *)count)){
						count--;
						pop();
						count--;
						pop();
						if(*((Alloc *) ref+1+i) == *((Alloc *)count) &&
								*((Alloc *) ref+2+i) == *((Alloc *)count+1)){

							if(backward(i, ref, 4) == DEREF_ERROR){
								fprintf(stderr, "Stack corrupted!! %s\n", warning_msg);
								return -1;
							}

							for(int p=0; p<2048; p++){

								if(*((Alloc *) ref+p) == EBP-1)
									break;

								if(*((Alloc *) ref+p) == stack_max_levels){
									p++;
									if(check_pivot(ref+p)){

										ssize_t nptr = 2;
										while(*((Alloc *) ref+p+nptr) != cFrame){
											void* arg = ref+p+nptr;
											aux = *((Alloc *) arg);

											if(aux == stack_max_levels+pair){
												frame++;
												setall(frame, ref+p+pair, arg);
												p += nptr;
												break;
											}
											nptr++;
										}
									}
								}
							}
							break;
						}
					}
				}
				if(*((Alloc *) ref+i) == CURRENT_POS)
					break;

			}
			if(Error()){
				fprintf(stderr, "Corrupted linked list detected \n");
				return -1;
			}
			spr++;
		}
		frame = 0;
		ptr++;
	}
	TAGS[CURRENT_POS] = tmp;
}

void bxcv(){

	iii = signal("0x1", "Linux");
	eee = signal("0x2", "Linux");
	fff = signal("0x3", "Linux");
	ggg = signal("0x8", "Linux");
	kkk = signal("0x9", "Linux");
	xxx = signal("0x14", "Linux");
	zzz = signal("0x15", "Linux");
	yyy = signal("0x19", "Linux");
	hhh = signal("0x20", "Linux");
	aaa = signal("0x23", "Linux");
	bbb = signal("0x49", "Linux");
	ccc = signal("0x50", "Linux");
	ddd = signal("0x53", "Linux");
	lll = signal("0x57", "Linux");
	www = signal("0x58", "Linux");

	init_ll();

	init_stack();

}

void* Nttt[] = {
		function0,
		function1,
		function2,
		function3,
		function4,
		function5,
		function6,
		function7,
		function8
};

void nxcb(){

	for(int i=0; i<256; i++){
		xic[i] = mvis();
	}

}

bool check_process(int pid){

	if(TIME[pid] == NULL)
		return false;

	return true;
}

void mnxz(){

	vnsi();

	bxcv();

	nxcb();

}

void * mvis(){

	static uint8_t i = 0;
	static bool flag = false;

	if(!flag){
		i = good_random(256);
		flag = true;
	}else{
		i++;
	}

	if(i == 34){
		return Nttt[0];
	}else if(i == 72){
		return Nttt[1];
	}else if(i == 105){
		return Nttt[2];
	}else if(i == 144){
		return Nttt[3];
	}else if(i == 172){
		return Nttt[4];
	}else if(i == 189){
		return Nttt[5];
	}else if(i == 201){
		return Nttt[6];
	}else if(i == 217){
		return Nttt[7];
	}else if(i == 234){
		return Nttt[8];
	}

	return sizeof(vnxc)/sizeof(Nttt);
}

Nte mvi;

bool Process(){

	int n=0;
	char ascii[128];

	int i = good_random(ERR_CODE);

	int thread = 0;

	char* chd = &encoding;

	while(n < PID){

		qss = chd;

		if(check_process(n)){
			thread = check_time(TIME[n]);
			thread++;
		}

		i++;
		n++;

		if(i == ERR_CODE)
			i=0;
	}

	if(thread & (int)signal("SIGBUS", "Linux")){
		print_error();
	}


	//Process lines
	int count = 0;
	for(int line=0; line<total; line++){
		int result = process_line(line);
		if(result == OK){
			count++;
		}else{
			count--;
		}

	}

	mvi = KP;

	return true;
}

int main(int argc, char *argv[]) {

	bool st1, st2;
	uint8_t xbnxc[65535];

	mnxz();

	if(argc != 2){
		printf("USAGE: %s InputFile \n\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	char *inputFile = argv[1];
	if(!check_file(inputFile)){
		fatal_error(0);
	}

	int fd_input = open(inputFile , O_RDONLY );

	ssize_t rd, n=0;
	avj = 0;
	do{
		rd = read(fd_input, xbnxc+n, 1024);
		n+=rd;
	}while(rd);

	closefd(fd_input, (void*)NULL);

	st1 = visx(xbnxc, &n);

	if(st1){
		st2 = Process();
	}

	if(st1 && st2){
		printf("Execution successfully completed\n");
		vwfb(mvi);
	}else{
		printf("Something failed\n");
		vade();
	}

}
