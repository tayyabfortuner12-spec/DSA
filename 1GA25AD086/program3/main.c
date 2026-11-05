#include <stdio.h>
#include <stdlib.h>
void TOH (int n, char source,char disc ,char temp)
{
    if (n>1)
    {
        TOH (n-1,source,temp,disc);
        printf("\n move %d disc from %c to %c",n,source,disc);
        TOH (n-1,temp,disc,source);
    }
    else
        printf("\n move %d disc from %c to %c",n,source,disc);

}
int main()
{
    int n;
    printf("\n read no of discs: ");
    scanf("%d",&n);
    TOH(n,'s','d','t');

    return 0;
}
