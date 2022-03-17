#ifndef _control_h_
#define _control_h_

int inbarword16(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
int pressbarword16(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
int inbarword24(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
int pressbarword24(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
int inbarword32(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
int pressbarword32(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
int inbarword48(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
int pressbarword48(int left,int top,int barcolor,int width,int n,char *s,int wordcolor);
int inbarwordframe(int left,int top,int barcolor,int width,char *s,int wordcolor,int framecolor);
int pressbarwordframe(int left,int top,int barcolor,int width,char *s,int wordcolor,int framecolor);

#endif
