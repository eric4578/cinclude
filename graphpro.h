#ifndef _GRAPHPRO_H_
#define _GRAPHPRO_H_

void drawtop();
void barword16(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
void barword24(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
void barword32(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
void barword48(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);    
void barwordframe(int left,int top,int barcolor,int n,char *s,int wordcolor,int framecolor);

#endif