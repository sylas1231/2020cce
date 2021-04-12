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

## week06 第一題
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
