#ifndef _CRADLE_H
#define _CRADLE_H

#define BUFFSIZE (160)

char Look;
char tmp[BUFFSIZE];


void GetChar();


void Error(char* s);
void Abort(char* s);
void Expected(char* s);
void Match(char x);


int isDigit(char x);
int isAlpha(char x);

char GetName();
char GetNumber();


void Emit(char*s);
void EmitLn(char*s);

void Init();

#endif
