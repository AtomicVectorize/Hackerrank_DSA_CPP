#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int max;
    if (a > b){
        max = a;
        if (c > max){
            max = c;
        } else if (d > max){
            max = d;
        }
    } else {
        max = b;
        if (c > max){
            max = c;
        } else if (d > max){
            max = d;
        }
    }

    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
