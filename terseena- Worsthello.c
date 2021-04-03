#include "stdio.h"
#define e 3
#define g (e/e)
#define h ((g+e)/2)
#define f (e-g-h)
#define j (e*e-g)
#define k (j-h)
#define m(n,a) ((n&(a))==(a))

long tab1[]={989L,5L,26L,0L,88319L,123L,0L,9267l};
int tab2[]={4,6,10,14,22,26,34,38,46,58,62,74,82,86};

main(ml,s) char *s;{
		int a,b,c,d,o[k],n=(int)s;
		if(ml==1){char b[2*j+f-g]; main(l(h+e)+h+e,b); printf(b);}
		else switch(ml-=h){
			case f:
				a=(b=(c=(d=g)<<g)<<g)<<g;
				return(m(n,a|c)|m(n,b)|m(n,a|d)|m(n,c|d));
			case h:
				for(a=f;a<j;++a) if (tab1[a]&&!(tab1[a]%((long)l(n))))return(a);
			case g:
				if(n<h) return(g);
				if(n<j){n-=g;c='D'; o[f]=h; o[g]=f;}
				else{c='/r' - '/b';n-=j-g;o[f]=o[g]=g;}
				if((b=n)>=e)for(b=g<<g;b<n;++b);o[b]=o[b-h]+o[b-g]+c;
				return(o[b-g]%n+k-h);
			default:
				if(ml-=e) main(ml-g+e+h,s+g); else *(s+g)=f;
				for (*s=a=f;a<e;) *s=(*s<<e)|main(h+a++,(char *)ml);
		}
		
}
