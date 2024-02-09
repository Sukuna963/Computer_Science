#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int it{};
    long ln{};
    char ch{};
    float fl{};
    double db{};

    scanf("%d %ld %c %f %lf", &it, &ln, &ch, &fl, &db);

    printf("%d\n%ld\n%c\n%.3f\n%.9lf", it, ln, ch, fl, db);

    return 0;
}