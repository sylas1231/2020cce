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
