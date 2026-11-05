#include <stdio.h>
#include <stdlib.h>

struct node
{
    int co, po;
    struct node *addr;
};

typedef struct node *NODE;


NODE insertend(NODE start, int co, int po)
{
    NODE temp, cur;
    temp = (NODE)malloc(sizeof(struct node));
    temp->co = co;
    temp->po = po;
    temp->addr = NULL;

    if (start == NULL)
        return temp;

    cur = start;
    while (cur->addr != NULL)
        cur = cur->addr;

    cur->addr = temp;
    return start;
}


void display(NODE start)
{
    NODE temp;
    if(start==NULL)
    {
        printf("0\n");
        return;
    }

    temp = start;
    while (temp != NULL)
    {
        printf("%dx^%d", temp->co, temp->po);
        temp = temp->addr;
        if (temp != NULL)
            printf(" + ");
    }
    printf("\n");
}


NODE addterms(NODE res, int co, int po)
{
    NODE temp, cur;


    while (cur != NULL) {
        if (cur->po == po) {
            cur->co += co;
            return res;
        }
        cur = cur->addr;
    }


    temp = (NODE)malloc(sizeof(struct node));
    temp->co = co;
    temp->po = po;
    temp->addr = NULL;

    if (res == NULL)
        return temp;

    cur = res;
    while (cur->addr != NULL)
        cur = cur->addr;

    cur->addr = temp;
    return res;
}


NODE multiply(NODE poly1, NODE poly2)
{
    NODE p1, p2;
    NODE res = NULL;

    for (p1 = poly1; p1 != NULL; p1 = p1->addr)
    {
        for (p2 = poly2; p2 != NULL; p2 = p2->addr)
        {

            res = addterms(res, p1->co * p2->co, p1->po + p2->po);
        }
    }
    return res;
}

int main()
{
    NODE poly1 = NULL, poly2 = NULL, poly = NULL;
    int n, i, co, po;


    printf("\nRead no of terms for 1st polynomial: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Read co & po for term %d: ", i);
        scanf("%d%d", &co, &po);
        poly1 = insertend(poly1, co, po);
    }
    printf("First polynomial is: ");
    display(poly1);


    printf("\nRead no of terms for 2nd polynomial: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Read co & po for term %d: ", i);
        scanf("%d%d", &co, &po);
        poly2 = insertend(poly2, co, po);
    }
    printf("Second polynomial is: ");
    display(poly2);


    poly = multiply(poly1, poly2);

    printf("\nThe resultant polynomial is: ");
    display(poly);

    return 0;
}
