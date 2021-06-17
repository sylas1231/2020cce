# 2020cce

## week01 第一題
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d=50*%d+5*%d+1*%d\n", n, n/50, n%50/5, n%5);
}
```

## week01 第二題
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int ans=0;
	for( int i=1; i<=n; i++ )
	{
		if( n%i==0 )
		{
			ans++;
		}
	}
	printf("%d\n", ans);
}
```

## week01 第三題
```c
#include <stdio.h>
int main()
{
	int n, i, ans=0;
	for( int i=0; i<10; i++ )
	{
		scanf("%d", &n);
		if( n%3==0 )
		ans++;
	}
	printf("%d\n", ans);
}
```

## week01 第四題
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if( n>=90 ) printf("A\n");
	else if( 90>n&&n>=80 ) printf("B\n");
	else if( 80>n&&n>=60 ) printf("C\n");
	else printf("F\n");
}
```

## week01 第五題
```c
#include <stdio.h>
int main()
{
	int a, b, i, ans=1;
	scanf("%d %d", &a, &b);
	for( int i=1; i<=b; i++ )
	{
		if( a%i==0&&b%i==0 )
		ans=i;
	}
	printf("%d %d\n", a/ans, b/ans);
}
```

## week02 第一題
```c
#include <stdio.h>
int main()
{
    int n1=10, n2=20, n3=30;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);
}
```

## week02 第二題
```c
#include <stdio.h>
int main()
{
    int n1=10, n2=20, n3=30;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n", n1, n2, n3);

    return 0;
}
```

## week02 第三題
```c
#include <stdio.h>
int main()
{
    int n[3]={10, 20, 30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    int *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    int *p2=&n[2];
    *p=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n", n[0], n[1], n[2]);

    return 0;
}
```

## week03 第一題
```c
#include <stdio.h>
int main()
{
    int a[5]={0, 10, 20, 30, 40};
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;
}
```

## week03 第二題
```c
#include <stdio.h>
int a[5]={0, 10, 20, 30, 40};
void printAll()
{
    for( int i=0; i<5; i++ )
        printf("%d ", a[i]);
        printf("\n");
}

int main()
{
    printAll();
    int *p=&a[2];
    *p=222;
    printAll();
    p=p+2;
    *p=666;
    printAll();
    p--;
    *p=555;
    printAll();
}
```

## week03 第三題
```c
#include <stdio.h>
int a[5]={0, 10, 20, 30, 40};
void printAll()
{
    for( int i=0; i<5; i++ )
        printf("%d ", a[i]);
        printf("\n");
}

int main()
{
    printAll();
    int *p=&a[2];
    *p=222;
    printAll();
    printf("p心裡小紙條記的值是:%d\n", p);
    p=p+2;
    *p=666;
    printAll();
    printf("p心裡小紙條記的值是:%d\n", p);
    p--;
    *p=555;
    printAll();
    printf("p心裡小紙條記的值是:%d\n", p);
}
```

## week03 第四題
```c
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p=(int*)malloc(sizeof(int)*10);

    return 0;
}
```

## week04 第一題
```c
#include <stdio.h>
struct POINT
{
    float x, y;
};

int main()
{
    struct POINT a;
}
```

## week04 第二題
```c
#include <stdio.h>
struct POINT
{
    float x, y;
};

int main()
{
    struct POINT a={4.1, 3.2};
    printf("%f %f\n", a.x, a.y);

    return 0;
}
```

## week04 第三題
```c
#include <stdio.h>
struct POINT
{
    float x, y;
};

int main()
{
    struct POINT a={4.1, 3.2};
    printf("%f %f\n", a.x, a.y);

    a.x=1;
    a.y=2;
    printf("%f %f\n", a.x, a.y);

    return 0;
}
```

## week04 第四題
```c
#include <stdio.h>
struct DATA
{
    int x, y;
}

a[3];

struct DATA b={100, 200};

int main()
{
    for( int i=0; i<3; i++ )
    {
        printf("a[%d]:%d %d\n", i, a[i].x, a[i].y);
    }
    printf("b: %d %d\n", b.x, b.y);

    struct DATA c;
    printf("c: %d %d 像亂碼\n", c.x, c.y);

    c=b;
    printf("c: %d %d\n", c.x, c.y);
}
```

## week04 第五題
```c
#include <stdio.h>
struct POINT
{
    float x, y, z;
};

struct POINT point[5]={{0,0,0}, {1,0,0}, {0,1,0}, {0,0,1}, {1,1,1}};

int main()
{
    struct POINT*p=&point[0];
    printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);

    p++;
    printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);

    p++;
    printf("%.2f %.2f %.2f\n", p->x, p->y, p->z);
}
```

## week05 第一題
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n", line);
    printf("%s\n", line2);
}
```

## week05 第二題
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n", line);
    printf("%s\n", line2);

    char line3[10]={'m','a','j','o','r','i','t','y'};
    printf("%s\n", line3);
}
```

## week05 第三題
```c
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};

    for( int i=0; i<5; i++ )
    {
        printf("%s\n", line[i]);
    }
}
```

## week05 第四題
```c
#include <stdio.h>
int main()
{
    printf("請看看值是多少: %d", '\0');
}
```

## week05 第五題
```c
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if( strcmp( line, line2 )>0 )
    {
        printf("左邊大\n");
    }
    else
    {
        printf("右邊大\n");
    }
}
```

## week05 第六題
```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
    int N;
    scanf("%d", &N);
    for( int i=0; i<N; i++ )
    {
        scanf("%s", line[i]);
    }

    char temp[10];
    for( int i=0; i<N; i++ )
    {
        for( int j=i+1; j<N; j++ )
        {
            if( strcmp( line[i], line[j] )>0 )
            {
                strcpy( temp, line[i] );
                strcpy( line[i], line[j] );
                strcpy( line[j], temp );
            }
        }
    }

    for( int i=0; i<N; i++ )
    {
        printf("%s\n", line[i]);
    }
}
```

## week07 第一題
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare( const void*p1, const void*p2 )
{
    char*s1=( char* )p1;
    char*s2=( char* )p2;

    return strcmp( s1, s2 );
}

char line[4][10]={"decline","proper","majority","bullet"};

int main()
{
    int n=4;
    qsort( line, n, sizeof( char[10] ), compare );

    for( int i=0; i<n; i++ )
    {
        printf("%s\n", line[i]);
    }
}
```

## week08 第一題
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[100][10];
int compare( const void*p1, const void*p2 )
{
    return strcmp( (char*)p1, (char*)p2 );
}

int main()
{
    int n;
    scanf("%d", &n);

    for( int i=0; i<n; i++ )
    {
        scanf("%s", line[i]);
    }

    qsort( line, n, 10, compare );

    for( int i=0; i<n; i++ )
    {
        printf("%s\n", line[i]);
    }
}
```

## week08 第二題
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char name[2000][80];
int compare( const void*p1, const void*p2 )
{
    return strcmp( (char*)p1, (char*)p2 );
}

char trash[80];
int main()
{
    int n;
    scanf("%d", &n);

    for( int i=0; i<n; i++ )
    {
        scanf("%s", name[i]);
        gets( trash );
    }
    qsort( name, n, 80, compare );

    int ans=1;
    printf("%s ", name[0]);
    for( int i=0; i<n-1; i++ )
    {
        if( strcmp(name[i], name[i+1])!=0 )
        {
            printf("%d\n", ans);
            printf("%s ", name[i+1]);
            ans=1;
        }
        else ans++;
    }
    printf("%d\n", ans);
}
```

## week08 第三題
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tree[1000000][32];
int compare( const void*p1, const void*p2 )
{
    return strcmp( (char*)p1, (char*)p2 );
}

int main()
{
    int T;
    scanf("%d", &T);

    int N=0;
    for( int i=0;    ; i++ )
    {
        char*now=gets( tree[i] );
        if( now==NULL )
        {
            N=i;
            break;
        }
        if( strcmp(tree[i], "")==0 )
        {
            N=i;
            break;
        }
    }

    qsort( tree, N, 32, compare );

    printf("%s ", tree[0]);
    int ans=1;

    for( int i=0; i<N-1; i++ )
    {
        if( strcmp(tree[i], tree[i+1])!=0 )
        {
            printf("%d\n", ans);
            printf("%s ", tree[i+1]);
        }
        else ans++;
    }
    printf("%d\n", ans);
}
```

## week10 第一題
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[1000];
char tree[1000000][32];
int compare( const void*p1, const void*p2 )
{
    return strcmp( (char*)p1,(char*)p2 );
}

int main()
{
    int T;
    scanf("%d\n\n", &T);

    for( int t=0; t<T; t++ )
    {
        int N=0;
        while( gets(line)!=NULL )
        {
            if( strcmp(line, "")==0 ) break;

            strcpy( tree[N], line );
            N++;
        }

        qsort( tree, N, 32, compare );

        if( t>0 ) printf("\n");
        int ans=1;
        printf("%s ", tree[0]);
        for( int i=0; i<N-1; i++ )
        {
            if( strcmp(tree[i], tree[i+1])==0 )
            {
                ans++;
            }
            else
            {
                printf("%.4f\n", 100*ans/(float)N);
                ans=1;
                printf("%s ", tree[i+1]);
            }
        }
        printf("%.4f\n", 100*ans/(float)N);
    }
}
```

## week11 第一題
```c
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare( const void*p1, const void*p2 )
{
    int d1=*( int* )p1;
    int d2=*( int* )p2;
    if( d1>d2 ) return 1;
    if( d1==d2 ) return 0;
    if( d1<d2 )  return -1;
}

int main()
{
    qsort( a, 10, sizeof(int), compare );
    for( int i=0; i<10; i++ )
    {
        printf("%d ", a[i]);
    }
}
```

## week11 第二題
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char line[2000][80];
char others[80];
int compare( const void*p1, const void*p2 )
{
	char*s1=( char* )p1;
	char*s2=( char* )p2;

	int result=strcmp( s1, s2 );
	if( result>0 ) return 1;
	if( result==0 ) return 0;
	if( result<0 ) return -1;
}

int main()
{
	int n;
	scanf("%d", &n);
	for( int i=0; i<n; i++ )
	{
		scanf("%s", line[i]);
		gets( others );
	}

	qsort( line, n, 80, compare );

	printf("%s ", line[0]);
	int ans=1;
	for( int i=0; i<n-1; i++ )
	{
		if( strcmp(line[i], line[i+1])==0 )
		{
			ans++;
		}
		else
		{
			printf("%d\n", ans);
			printf("%s ", line[i+1]);
			ans=1;
		}
	}
	printf("%d\n", ans);
}
```

## week11 第三題
```c
#include <stdio.h>
struct data
{
    int ans;
    char c;
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n", box.c, box.ans);
}
```

## week11 第四題
```c
#include <stdio.h>
typedef struct data
{
    int ans;
    char c;
}DATA;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n", box.c, box.ans);
}
```

## week11 第五題
```c
#include <stdio.h>
char line[2000];
char ans[256];
int main()
{
    for( int t=0; gets(line); t++ )
    {
        for( int i=0; i<256; i++ ) ans[i]=0;

        for( int i=0; line[i]!=0; i++ )
        {
            char c=line[i];
            ans[c]++;
        }
        if( t>0 ) printf("\n");
        for( int i=0; i<256; i++ )
        {
            if( ans[i]>0 ) printf("%d %d\n", i, ans[i]);
        }
    }
}
```

## week12 第一題
```c
#include <stdio.h>
char line[2000];
int main()
{
	for( int t=0; gets(line); t++ )
	{
		int ans[256]={};

		for( int i=0; line[i]!=0; i++ )
		{
			char c=line[i];
			ans[c]++;
		}

		if( t>0 ) printf("\n");
		for( int i=0; i<256; i++ )
		{
			if( ans[i]>0 ) printf("%d %d\n", i, ans[i]);
		}
	}
}
```

## week12 第二題
```c
#include <stdio.h>
char line[2000];
int main()
{
	for( int t=0; gets(line); t++ )
	{
		int ans[256]={};
		char c[256]={};
		for( int i=0; i<256; i++ ) c[i]=i;

		for( int i=0; line[i]!=0; i++ )
		{
			char c=line[i];
			ans[c]++;
		}

		for( int i=0; i<256; i++ )
		{
			for( int j=i+1; j<256; j++ )
			{
				if( ans[i]>ans[j] )
				{
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
				if( ans[i]==ans[j]&&c[i]<c[j] )
				{
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char t=c[i];
					c[i]=c[j];
					c[j]=t;
				}
			}
		}
		if( t>0 ) printf("\n");
		for( int i=0; i<256; i++ )
		{
			if( ans[i]>0 ) printf("%d %d\n", c[i], ans[i]);
		}
	}
}
```

## week12 第三題
```c
#include <stdio.h>
int a[100];
int main()
{
	int T;
	scanf("%d", &T);
	for( int t=0; t<T; t++ )
	{
		int N;
		scanf("%d", &N);
		for( int i=0; i<N; i++ )
		{
			scanf("%d", &a[i]);
		}

		int ans=0;

		for( int k=0; k<N-1; k++ )
		{
			for( int i=0; i<N-1; i++ )
			{
				if( a[i]>a[i+1] )
				{
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", ans);
	}
}
```

## week13 第一題
```c
size( 1024, 400 );
background( 0, 0, 255 );
```

## week13 第二題
```c
void setup()
{
  size( 1024, 400 );
}

void draw()
{
  if( mousePressed ) background( 255, 0, 255 );
  else background( 15, 162, 249 );
}
```

## week13 第三題
```c
void setup()
{
  size( 1024, 400 );
}

void draw()
{
  if( mousePressed ) background( 255, 0, 255 );
  else background( 15, 162, 249 );
  textSize( 50 );
  text( a, 100, 100 );
}

int a=0;
void mousePressed()
{
  a++;
}
```

## week13 第四題
```c
void setup()
{
  size( 1024, 400 );
}

void draw()
{
  background( 15, 162, 249 );
  textSize( 50 );
  int h=hour();
  int m=minute();
  int s=second();
  text("Now:"+h+":"+m+":"+s, 100, 100);
}
```

## week13 第五題
```c
void setup()
{
  size( 1024, 400 );
  textFont( createFont("標楷體", 50) );
}

void draw()
{
  background( 15, 162, 249 );
  textSize( 50 );
  int h=hour();
  int m=minute();
  int s=second();
  fill( 255, 0, 0 );
  text("Now:"+h+":"+m+":"+s, 100, 100);
  int total=h*60*60+m*60+s;
  text( "總秒數:"+total, 100, 200 );
}
```

## week13 第六題
```c
void setup()
{
  size( 1024, 400 );
  textFont( createFont("標楷體", 50) );
}

void draw()
{
  background( 15, 162, 249 );
  textSize( 50 );
  int h=hour();
  int m=minute();
  int s=second();
  fill( 255, 0, 0 );
  text("Now:"+h+":"+m+":"+s, 100, 100);
  int total=h*60*60+m*60+s;
  int total2=12*60*60+0*60+0;
  text( "總秒數:"+total, 100, 200 );
  int ans=total2-total;
  int hh=ans/60/60%60, mm=ans/60%60, ss=ans%60;
  text( "還剩下:"+hh+":"+mm+":"+ss, 100, 300 );
}
```

## week14 第一題
```c
void setup()
{
  size(300, 200);
  float ans=random(60);
  textSize(30);
  text(ans, 0, 30);
}
```

## week14 第二題
```c
void setup()
{
  size(300, 200);
  textSize(30);
}

int ans=0;
void draw()
{
  background(#2C9CF0);
  text(ans, 30, 30);
}

void mousePressed()
{
  ans=(int)random(60);
}
```

## week14 第三題
```c
int []a={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
void setup()
{
  size(400, 200);
  textSize(30);
}
void draw()
{
  background(#2C9CF0);
  for(int i=0; i<10; i++)
  {
    text(a[i], i*40, 100);
  }
}
void mousePressed()
{
  int i1=(int) random(10);
  int i2=(int) random(10);
  int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
}
```

## week14 第四題
```c
int []a=new int[49];
void setup()
{
  size(400, 200);
  textSize(30);
  for(int i=0; i<49; i++) a[i]=i+1;
}
void draw()
{
  background(#2C9CF0);
  for(int i=0; i<6; i++)
  {
    text(a[i], i*50, 100);
  }
}
void mousePressed()
{
  for(int i=0; i<10000; i++)
  {
    int i1=(int)random(49), i2=(int)random(49);
    int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
  }
}
```

## week14 第五題
```c
int []a=new int[49];
void setup()
{
  size(400, 200);
  textSize(30);
  for(int i=0; i<49; i++) a[i]=i+1;
  for(int i=0; i<10000; i++)
  {
    int i1=(int)random(49), i2=(int)random(49);
    int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
  }
}
int N=0;
void draw()
{
  background(#2C9CF0);
  for(int i=0; i<N; i++)
  {
    fill(255); ellipse(50+i*50, 100, 40, 40);
    textAlign(CENTER,CENTER);
    fill(0); text(a[i], 50+i*50, 100);
  }
}
void mousePressed()
{
  N++;
}
```

## week15 第一題
```c
void setup()
{
  size(400, 200);
  textSize(40);
}
void draw()
{
  background(41, 109, 207);
  int s=second();
  text(s, 100, 100);
}
```

## week15 第二題
```c
void setup()
{
  size(400, 200);
  textSize(40);
}
void draw()
{
  background(41, 109, 207);
  int s=second();
  text(9-s%10, 100, 100);
}
```

## week15 第三題
```c
import processing.sound.*;
SoundFile player;
void setup()
{
  size(400, 200);
  player=new SoundFile(this, "tada.mp3");
}
void draw()
{
  background(51,114, 191);
}
void mousePressed()
{
  player.play();
}
```

## week15 第四題
```c
import processing.sound.*;
SoundFile player;
void setup()
{
  size(400, 200);
  textSize(40);
  player=new SoundFile(this, "tada.mp3");
}
void draw()
{
  background(41, 109, 207);
  int s=second();
  text(9-s%10, 100, 100);
  if(9-s%10==0) player.play();
}
```

## week15 第五題
```c
import processing.sound.*;
SoundFile player;
void setup()
{
  size(400, 200);
  player=new SoundFile(this, "bell.mp3");
}
void draw()
{
  background(51, 114, 191);
}
void mousePressed()
{
  if(player.isPlaying())
  {
    player.stop();
  }
  else
  {
    player.play();
  }
}
```

## week15 第六題
```c
function setup()
{
  createCanvas(400, 200);
  textSize(40);
}
function draw()
{
  background(41, 109, 207);
  let s=second();
  text(s, 100, 100);
}
```

## week16 第一題
```c
void setup()
{
  size(400, 200);
}
void draw()
{
  background(57, 255, 127);
  ellipse(50, 50, 80, 80);
}
```

## week16 第二題
```c
void setup()
{
  size(400, 200);
}
void draw()
{
  background(57, 255, 127);
  fill(255);
  ellipse(100, 100, 180, 180);
  fill(255, 0, 0);
  float stop=mouseX/50.0;
  text(stop, 200, 100);
  arc(100, 100, 180, 180, 0, stop);
}
```

## week16 第三題
```c
void setup()
{
  size(400, 200);
  fill(255, 0, 0);
  textSize(40);
}
void draw()
{
  background(57, 255, 127);
  arc(100, 100, 180, 180, radians(90), radians(180));
}
```

## week16 第四題
```c
void setup()
{
  size(400, 200);
  fill(255, 0, 0);
  textSize(40);
}
float shift=0;
void draw()
{
  background(57, 255, 127);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100, 100, 180, 180, start, stop);
  shift+=1;
}
```

## week16 第五題
```c
void setup()
{
  size(400, 200);
  fill(255, 0, 0);
  textSize(40);
}
float shift=0, v=10;
void draw()
{
  background(57, 255, 127);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100, 100, 180, 180, start, stop);
  if(v>0.0001)
  {
    shift+=v;
    v=v*0.99;
  }
  text(shift, 200, 100);
  text(v, 200, 150);
}
```

## week16 第六題
```c
void setup()
{
  size(400, 200);
  fill(255, 0, 0);
  textSize(40);
}
float shift=0, v=0;
void mousePressed()
{
  v=random(10)+5;
}
void draw()
{
  background(57, 255, 127);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100, 100, 180, 180, start, stop);
  if(v>0.1)
  {
    shift+=v;
    v=v*0.99;
  }
  text(shift, 200, 100);
  text(v, 200, 150);
}
```

## week16 第七題
```c
void setup()
{
  size(400, 200);
  fill(255, 0, 0);
  textSize(40);
}
float shift=0, v=0;
void mousePressed()
{
  v=random(10)+5;
}
void draw()
{
  background(57, 255, 127);
  for(int i=0; i<24; i++)
  {
    if(i%3==0) fill(0);
    if(i%3==1) fill(255);
    if(i%3==2) fill(200, 180, 0);
    float start=radians(0+shift+i*360/24);
    float stop=radians(360/24+shift+i*360/24);
    arc(100, 100, 180, 180, start, stop);
  }
  if(v>0.1)
  {
    shift+=v;
    v=v*0.99;
  }
  text(shift, 200, 100);
  text(v, 200, 150);
}
```
