#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>
string ari(string a) 
{int c,w,s;
for(int i=0;i!='\0';i++)
{if(a[i]==" ")
{w=w+1;}
if(a[i]=="."||a[i]=="?"||a[i]=="!")
{s=s+1;}
if(isalnum(a[i]){c=c+1}
}
float x;
x=4.71*float(c)/float(w)+0.5*float(w)/float(s)-21.43;
x=ceil(x);
switch(x){
case 1 : return "Kindergarten";
break;
case 2: return "First/Second Grade";
break;
case 3: return "Third Grade";
break;
case 4: return "Fourth Grade";
break;
case 5: return "Fifth Grade";
break;
case 6: return "Sixeth Grade";
break;
case 7: return "Seventh Grade";
break;
case 8: return "Eighth Grade";
break;
case 9: return "Ninth Grade";
break;
case 10: return "Tenth Grade";
break;
case 11: return "Eleventh Grade";
break;
case 12: return "Twelfth grade";
break;
case 13: return "College student";
break;
case 14: return "Professor";
break;
default: return 0;
break;
}
}
