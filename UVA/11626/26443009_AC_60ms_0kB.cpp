#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define swap(x,y){int t=x;x=y;y=t;}

struct Point{
   int x,y;
}p[100010];
int n;
int cross(struct Point p0,struct Point p1,struct Point p2){
   long long int x1 = (p1.x-p0.x);
   long long int y1 = (p1.y-p0.y);
   long long int x2 = (p2.x-p0.x);
   long long int y2 = (p2.y-p0.y);
   long long int tmp = x1*y2-x2*y1;
    return (tmp>0LL)?1:(tmp<0LL)?-1:0;
}

int cmp(const void *a,const void*b){
      struct Point *p = (struct Point*)a;
      struct Point *q = (struct Point*)b;
      if(p->x == q->x) return p->y-q->y;
      return p->x-q->x;
}

int s[123456];
int sNum;
void convex(){
   int i,j;
   qsort(p,n,sizeof(struct Point),cmp);
   for(i=sNum=0;i<n;++i){
      while(sNum>=2 && cross(p[s[sNum-2]],p[s[sNum-1]],p[i])<0) --sNum;
      s[sNum++] = i;
   }
   for(i=n-2,j=sNum+1;i>=0;--i){
      while(sNum>=j && cross(p[s[sNum-2]],p[s[sNum-1]],p[i])<0) --sNum;
      s[sNum++] = i;
   }
   printf("%d\n",sNum-1);
   for(i=0;i<sNum-1;++i)printf("%d %d\n",p[s[i]].x,p[s[i]].y);


}
int main(){
   int t;
   int i;
   char str[123];
   scanf("%d",&t);
   while(t--){
      scanf("%d",&n);
      for(i=0;i<n;){
         scanf("%d %d %s",&p[i].x,&p[i].y,str);
         if(str[0]=='Y') ++i;
         else --n;
      }
      convex();
   }
   return 0;
}
