#ifndef _PARSE_HELP_
#define _PARSE_HELP_

#include "VCardParser.h"

VCardErrorCode fileCheck(char *fileName, FILE *fp);
char* upperCaseStr(char *a);
char* unfold(FILE *fp);
VCardErrorCode parseFile(char *buffer, Card **newCardObject);
int numSemiColons(char *a);
char *getGroup(char *token);
char *getProp(char *token);
char *getParam(char *token);
char *getValue(char *token);
VCardErrorCode endBuff(char *buff);
VCardErrorCode checkGroup(char *lGroup);
VCardErrorCode checkProp(char *lProp);
VCardErrorCode checkParam(char *lParam);
VCardErrorCode checkValue(char *lVal);
void freeLine(char **lGroup, char **lProp, char **lParam, char **lVal);
void insertParam(List *parList, char *lParam);
void insertValue(List *valList, char *lVal);
int numEqualSigns(char *a);
void insertAllParams(List *parList, char *lParam);
void insertAllValues(List *valList, char *lVal);
VCardErrorCode beginBuff(char *buff);
char *nextLine(char *buff);
VCardErrorCode endCheck(char *a);
char *myStrChr(char *a, int c);
VCardErrorCode dateCheck(char *a);

#endif