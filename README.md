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
