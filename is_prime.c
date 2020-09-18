#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n);
bool isProthNumber(int n);


int main(void)
{
    int n = 24;
    if (isProthNumber(n)) {
        printf("%s\n", "true");
    } else {
        printf("%s\n", "false");
    }
}


bool isPowerOfTwo(int n)
{
    return (n && !(n & (n - 1)));
}

bool isProthNumber(int n)
{
    int k = 1;
    while (k < (n / k)) {
        if (n % k == 0) {
            if (isPowerOfTwo(n / k))
                return true;
        }
        k = k + 2;
    }
    return false;
}
