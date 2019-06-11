#include <stdio.h>

int numerical(char s)
{
switch(s)

{
case 'V':
return 5;
case 'X':
return 10;
case 'I':
return 1;
}
}
int main(void) {
// your code goes here
char s[10];
int num=0,i,len;
scanf("%s",s);
for(len=0;s[len];len++);
if(len==2)
{
if(numerical(s[0])>=numerical(s[1]))
{
num=num+(numerical(s[0])+numerical(s[1]));
}
else
{

num=num+(numerical(s[1])-numerical(s[0]));
}
}
else
{

for(i=len-1;i>1;i--)
{
if(numerical(s[i-1])>=numerical(s[i]))
{
num=num+(numerical(s[i-1])+numerical(s[i]));
}
else 
{

num=num+(numerical(s[i])-numerical(s[i-1]));
}
}

num=num+numerical(s[0]);
}
printf("%d",num);
return 0;
}
