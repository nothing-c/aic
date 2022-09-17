#include <windows.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
typedef int I;
typedef char* S;
typedef char C;
typedef HWND H;
#define P(x) puts(x)
#define W(x) while(1==1){x}
//Change depending on your editor
#define E "Emacs"
//Ass In Chair
S G(){H w=GetForegroundWindow();S b=malloc(4096);*(b+4095)='\0';GetWindowText(w,b,4096);return b;}
I main(){I s=0;W(S p=G();sleep(1);/*P(p)*/;if(strstr(p,E)!=NULL){s++;}free(p);printf("%d sec\n",s);fflush(stdout););return 0;}
