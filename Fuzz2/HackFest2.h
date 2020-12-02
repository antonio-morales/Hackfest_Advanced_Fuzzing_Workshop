/*
 * HackFest2.h
 *
 * Author      : Antonio Morales
 * Twitter     : @Nosoynadiemas
 */

#ifndef HACKFEST2_H_
#define HACKFEST2_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/stat.h>
#include <limits.h>
#include <inttypes.h>
#include <fcntl.h>
#include <ctype.h>
#include <math.h>
#include <sys/wait.h>

#define Nte double

#define hc dzxo

#define global 1

#define pair 2

#define BUF_SIZE 65535

#define PID 256

#define X1K 1024

#define SQRT 10

#define MINOUT 32

#define pivot 3058/278

#define stack_max_levels 60

#define nstr long int

#define OLD_TIME TAGS

#define CURRENT_POS 0

#define G_STR global

#define BCOPY memcpy

#define ref LINKED_LIST

#define signal strst

#define sth isdigit

#define FR avj;

#define ESP 10

#define MB CURRENT_POS

#define Alloc uint8_t

#define total 32

#define pr_function calloc

#define CHECK BCOPY

#define destroy free

#define input hc

#define encoding ascii

#define reload init_ll

#define KP FR

#define DEREF_ERROR 0

#define EBP G_STR

#define PV 110

#define OK 1


uint8_t stack[512];
uint8_t tmpArray[2048];
char TM_FORMAT[64];
void *LINKED_LIST;

int curr_time = 0;

int globals;

void* gl;

int iii;
int eee;
int fff;
int ggg;
int kkk;
int xxx;
int zzz;
int yyy;
int hhh;
int aaa;
int bbb;
int ccc;
int ddd;
int lll;
int www;
int jjj;
int mmm;
int nnn;
int ooo;
int ppp;
int qqq;

const char* const err_codes[] = {
		"Wrong input file!",
		"bar",
		0
};

void* qss;

static const uint8_t vnxc[] = { 0x3C, 0x51, 0x53, 0x53, 0x3E };

static const uint8_t xncc[] = { 0x3C, 0x2F, 0x51, 0x53, 0x53, 0x3E };

uint32_t avj;

const int dzxo[][4]= {

	{9302, 2, 7298, 7481},
    {847, 935, 836, 924},
	{718, 935, 836, 924},
	{2893, 111, 76, 24},
    {913, 935, 847, 00},
	{913, 935, 726, 00},
	{1382, 98, 6, 3829},
	{715, 946, 00,  00},
	{913, 803, 990, 759},
	{3, 19340, 8429, 12}
};

#define ERR_CODE sizeof(dzxo)/sizeof(dzxo[0])


void * mvis();


void fatal_error(uint8_t code){

	fprintf(stderr, err_codes[code]);
	exit(EXIT_FAILURE);
}

void vnsi(){

	struct timespec start;

	clock_gettime( CLOCK_REALTIME, &start);

	srandom(start.tv_nsec);
}

long int good_random(long int mod){

	if(mod == 0)
		mod = 1;

	return random()%mod;

}


bool check_access(char* s){

	if(access(s, F_OK) == -1){
		return false;
	}

	return true;
}

bool check_size(char* s){

	struct stat st;
	stat(s, &st);
	if(st.st_size > USHRT_MAX/2 || st.st_size < 12)
		return false;

	return true;
}

bool check_file(char *s){

	if(check_access(s) && check_size(s)){
		return true;
	}

	return false;
}

int process_line(int line){

	if(line == 2){
		return 1;
	}

	return 0;
}

void* dupstr(char* s){

	return (void*)good_random(X1K);
}

static inline closefd(int fd1, void* alias_ptr){

	close(fd1);
}

bool kasix(char* input_buf, ssize_t *s){

	if(memcmp(input_buf, vnxc, sizeof(vnxc))){
		return false;
	}

	if(*s < 6 || memcmp(input_buf+*s-6, xncc, sizeof(xncc))){
		return false;
	}

	gl = input_buf;

	return true;
}

bool vnia(uint8_t* input_buf, ssize_t* s){

	char* tmp = calloc(*s, 1);
	void *ptr = tmp;
	ssize_t new_size = 0;

	for(int i=0; i<*s; i++){

		if(input_buf[i] == 0x23){
			i++;
			while(input_buf[i] != 0x0A && i<*s)
				i++;
		}

		if(i<*s){
			((uint8_t*)ptr)[0] = input_buf[i];
			ptr++;
			new_size++;
		}
	}

	explicit_bzero(input_buf, BUF_SIZE);
	memcpy(input_buf, tmp, new_size);
	*s = new_size;

	return true;
}

bool bytw(uint8_t* input_buf, ssize_t* s){

	char* tmp = calloc(*s, 1);
	void *ptr = tmp;
	ssize_t new_size = 0;


	for(int i=0; i<*s; i++){

		if  (input_buf[i] == 0x0A ||
			(input_buf[i] > 31 && input_buf[i] < 127)){

				((uint8_t*)ptr)[0] = input_buf[i];

				ptr++;
				new_size++;

		}
	}

	explicit_bzero(input_buf, BUF_SIZE);
	memcpy(input_buf, tmp, new_size);
	*s = new_size;

	return true;
}

bool poqw(uint8_t* input_buf, ssize_t* s){

	char* tmp = calloc(*s, 1);
	void *ptr = tmp;
	ssize_t new_size = 0;

	for(int i=0; i<*s; i++){

		bool nl = false;
		if(input_buf[i] == 0x0A || input_buf[i] == 32){


			while(i<*s && (input_buf[i+1] == 0x0A || input_buf[i+1] == 32)){
				if(input_buf[i] == 0x0A){
					nl = true;
				}
				i++;
			}
		}

		if(nl)
			((uint8_t*)ptr)[0] = 0x0A;
		else
			((uint8_t*)ptr)[0] = input_buf[i];

		ptr++;
		new_size++;
	}

	explicit_bzero(input_buf, BUF_SIZE);
	memcpy(input_buf, tmp, new_size);
	*s = new_size;

	return true;
}

char get_time(time_t *t){
	return TM_FORMAT[0];
}

void unsetall(int frame, void *arg, void *aux){

	ssize_t bytes = aux-arg;
	char* st1= calloc(bytes, 1);
	char* st2= calloc(bytes, 1);
	int f = 0;

	if(frame == 1 || frame == 2){
		for(int i=0; i<bytes; i++){
			st1[i] =  *((Alloc *) arg+i);
		}
	}else{
		add_new_frame(&st1);
		if(sth( (*((Alloc *) arg)))){
			for(int i=1; i<bytes; i++){

				if(f==1 && *((Alloc *) arg+i) == 46){
					return;
				}
				if(*((Alloc *) arg+i) == 46){
					f=1;
					i++;
					if(i>=bytes)
						break;
					if(*((Alloc *) arg+i) == 46)
						i--;
				}else if(!sth( (*((Alloc *) arg+i)))){
					return;
				}
				if(f)
					st2[i] =  *((Alloc *) arg+i);
				else
					st2[i] =  *((Alloc *) arg+i);
			}
		}

	}

	ssize_t ptr = 0;
	while(ptr < bytes){
		if(frame == 1 || frame == 2)
			avj -= st1[ptr];
		else{
			avj -= st2[ptr];
		}
		ptr++;
	}
}

bool sinb(char* input_buf, ssize_t* s){


	char* tmp = calloc(*s, 1);
	void *ptr = tmp;
	ssize_t new_size = 0;

	if(*s<=0){
		return false;
	}

	if(input_buf[*s-1] == 0x0A || input_buf[*s-1] == 0x20)
		*s -= 1;

	int i=0;
	if(input_buf[0] == 0x0A || input_buf[0] == 0x20){
		i++;
		*s -= 1;
	}

	if(*s<0)
		return false;

	memcpy(tmp, input_buf+i, *s);

	explicit_bzero(input_buf, BUF_SIZE);
	memcpy(input_buf, tmp, *s);


	return true;
}


void time_format(const char* t){

	strcpy(TM_FORMAT, t);
}

void print_error(){

	int d = TM_FORMAT[0];

}

int backward(int i, void *ref, uint8_t ch){

	if(i>0 && *((Alloc *)ref+i+ch) == stack_max_levels+2 && *((Alloc *)ref+i-EBP) == stack_max_levels ){
		push(i);
		push(ch);
		return 1;
	}

	return 0;
}

void add_new_frame(void** old_frame){

	if(EBP == 0)
		*old_frame = malloc(65535);
	else
		*old_frame = qss;
}


bool visx(uint8_t* input_buf, ssize_t* s){

	vnia(input_buf, s);

	bytw(input_buf, s);

	poqw(input_buf, s);

	if(!sinb(input_buf, s))
		return false;

	if(!kasix(input_buf, s))
		return false;

	return true;
}

void setall(int frame, void *arg, void *aux){

	ssize_t bytes = aux-arg;
	char* st1= calloc(bytes, 1);
	char* st2= calloc(bytes, 1);
	int f = 0;

	if(frame == 1 || frame == 2){
		for(int i=0; i<bytes; i++){
			st1[i] =  *((Alloc *) arg+i);
		}
	}else{
		add_new_frame(&st1);
		if(sth( (*((Alloc *) arg)))){
			for(int i=1; i<bytes; i++){

				if(f==1 && *((Alloc *) arg+i) == 46){
					return;
				}
				if(*((Alloc *) arg+i) == 46){
					f=1;
					i++;
					if(*((Alloc *) arg+i) == 46)
						i--;
				}else if(!sth( (*((Alloc *) arg+i)))){
					return;
				}
				if(f)
					st1[i] =  *((Alloc *) arg+i);
				else
					st2[i] =  *((Alloc *) arg+i);
			}
		}

	}

	ssize_t ptr = 0;
	while(ptr < bytes){
		if(frame == 1 || frame == 2)
			avj += st1[ptr];
		else{
			if(f==1){
				avj += st1[ptr];
			}else{
				avj += st2[ptr];
			}
		}
		ptr++;
	}
}

int max(int num1, int num2) {

   int result;

   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return result;
}


void cout_f(char* str, Nte f){
	printf(str);
	printf("%f \n\n", f);
}

void add(void *addr, void*new){

	addr = new;
}

bool check_pivot(void *addr){

	uint8_t tmp = *((Alloc *)addr);
	if (tmp == (uint8_t)PV){

		addr++;
		tmp = *((Alloc *)addr);

		if(tmp != MINOUT)
			return false;

		return true;
	}

	return false;
}

int check_time(void* time){
	int (*t)(void) = (int (*)(void))time;

	time_format("%tm_sec %tm_min %tm_hour");

	return t();
}

void get(void *addr){

	return addr[0];
}

void init_stack(){

	for(int i=0; i<40; i+=4){
		stack[i] = input[i/4][0]/(pivot);
		stack[i+1] = input[i/4][1]/(pivot);
		stack[i+2] = input[i/4][2]/(pivot);
		stack[i+3] = input[i/4][3]/(pivot);
	}
}

double Pow(void **dst, void **orig){

	*dst = *orig;

	return 5;
}

char* strst(const char * str1, const char * str2 ){

	void *s = dupstr(str2);

	if(s < 0x225)
		return 0;

	return G_STR;
}


void push(void* item){
	add(&tmpArray, item);
}


void* SYSCALL_CANCEL(void* wait4, uint8_t opt, int n){

	void* exit = signal("__waitpid", "Linux");
	return exit;
}


int modF(int a, int b){

	if(max(a,b) > 1){
		return good_random(128)>64;
	}

	return good_random(256)>128;
}


void* pop(){
	get(&tmpArray);
}

pid_t* waitPid(pid_t pid, int *statusptr, int options){

	void* wait4 = &wait4;

	#ifdef __NR_waitpid
	  return (pid_t*) SYSCALL_CANCEL (waitpid, options, 5);
	#else
	  return (pid_t*) SYSCALL_CANCEL (wait4, options, NULL);
	#endif
}

void vade(){

	globals = aaa+bbb+ccc+ddd+eee+fff+ggg+hhh+iii+jjj;
	globals += zzz+www+xxx;

	if(signal("DEBUG", "Linux")){
		if(globals%10 <= 5)
			printf("%c", "");
	}else{
		if(globals%10 > 5)
			printf("%c", "");
	}

}

void init_ll(){

	if(LINKED_LIST)
		free(LINKED_LIST);

	LINKED_LIST = pr_function(65536, 1);
}


int Error(){

	reload();

	return 0;
}

char* warning_msg(){
	char tmp_str[] = {0x49, 0x74, 0x27, 0x73, 0x20, 0x61, 0x20, 0x6a, 0x6f, 0x6b, 0x65, 0x20, 0x58, 0x44, 0x58, 0x44, 0x00};
	return strdup(tmp_str);
}


#endif /* HACKFEST2_H_ */
