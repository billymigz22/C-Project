#include <stdio.h>
#define _gc() getchar_unlocked()

inline int getin(){
int x=0;register int c=_gc();
while(c>='0'&&c<='9'){x=(x<<3)+(x<<1)+(c-'0');c=_gc();}
return x;
}

int main(){
	int x = getin();
	printf("%d\n", x);
	return 0;
}