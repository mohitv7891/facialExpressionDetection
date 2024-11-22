#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int in[n];
    int ex[n];
    int inCount = 1;

    // 20 21 10 18 3 11 1 7 5 25
    int i = 0;
    int j = 0;
    int data;
    scanf("%d", &data);
    in[j] = data;
    int k = 0;
    int r = 0;
    i++;
    for (int temp = 0; r < n - 1; temp++)
    {
        if (r < n - 1)
            scanf("%d", &data);
        if (data < in[j] && r < n - 1)
        {
            in[i++] = data;
            inCount++;
            r++;
            j++;
        }
        else if (r < n - 1)
        {
            ex[k++] = data;
            r++;
        }
        if (r < n - 1)
            scanf("%d", &data);
        if (data < in[j] && r < n - 1)
        {
            in[i++] = data;
            inCount++;
            r++;
        }
        else if (r < n - 1)
        {
            ex[k++] = data;
            r++;
        }
    }
    printf("in: ");
    for (int p = 0; p < inCount; p++)
        printf("%d ", in[p]);
    printf("\n");
    printf("ex: ");
    for (int p = 0; p < (n - inCount); p++)
        printf("%d ", ex[p]);
    printf("\n");
    return 0;
}