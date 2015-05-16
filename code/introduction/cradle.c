#include "cradle.h"
#include <stdlib.h>
#include <stdio.h>


/*
*	Read a new characted from input stream
*/
void GetChar(){
	Look = getchar();
}

/**
*Reports and Error
*/
void Error(char* s){
	printf("\nError: %s",s);
}

/**
* Reports an error and Halt
*/
void Abort(char* s){
	printf("\nError: %s",s);
	exit(1);
}

void Expected(char* s){
	sprintf(tmp,"%s Expected",s);
	Abort(tmp);
}
/**
* Match a Specific Input Character
**/
void Match(char x){
	if(Look==x){
		GetChar();
	}else{
		sprintf(tmp,"'%c'",x);
		Expected(tmp);
	}
}

int isAlpha(char c){
	char cu = toupper(c);
	return (cu >= 'A') && (cu <= 'z');
}

int isDigit(char c){
	return (c >= '0') && (c <= '9');
}

void Emit(char* s){
printf("\t%s",s);
}

void EmitLn(char* s){
	Emit(s);
	printf("\n");
}

char GetName(){
	char c=Look;	
	if(!isAlpha(Look)){
		Expected("Name");
	}
	
	GetChar();
	return c;
}

char GetNumber(){
	char c=Look;	
	if(!isDigit(Look)){
		Expected("Integer");
	}
	
	GetChar();
	return c;
}


void Init(){
	GetChar();	
}
