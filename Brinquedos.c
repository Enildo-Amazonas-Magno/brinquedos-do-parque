#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    c=0;
    scanf("%d %d", &a, &b);
    if(a>149&&b>11)c=c+1;
	if(a>139&&b>13)c=c+1;
	if(a>169||b>15)c=c+1;
	printf("%d", c);
	return 0;
}