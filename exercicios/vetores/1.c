#include <stdio.h>

void main()
{
    int w[9], i = 5;

    w[1] = 17;
    w[i / 2] = 9;
    w[2 * i - 2] = 6;
    w[i - 1] = w[8] / 2;
    w[i] = w[2];
    w[i + 1] = w[i] + w[i - 1];
    w[w[2] - 2] = 78;
    w[w[i] - 9] = w[1] * w[i];
    w[w[2] % 2 + 2] = w[i + 7 / 2] + 3 * w[i + 1 * 2];

    for (int i = 0; i < 9; i++)
    {
        printf("%4d ", w[i]);
    }
}