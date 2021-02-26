# 2020cce

## 第一題
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d=50*%d+5*%d+1*%d\n", n, n/50, n%50/5, n%5);
}
```

## 第二題
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

## 第三題
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
