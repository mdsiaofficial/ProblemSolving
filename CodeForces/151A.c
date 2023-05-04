#include <stdio.h>

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int ml = k * l; // total milliliters of drink
    int slices = c * d; // total slices of lime
    int salt = p; // total grams of salt

    int toasts = (ml / nl < slices) ? (ml / nl) : slices;
    toasts = (toasts < salt / np) ? toasts : (salt / np); // maximum number of toasts

    int per_friend = toasts / n; // number of toasts per friend

    printf("%d\n", per_friend);

    return 0;
}
