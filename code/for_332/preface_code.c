#include <stdlib.h>

typedef struct {
    int a;
    short s[2];
} MSG;

int main() {

    MSG *mp, m =  {4,1,0};
    char *fp, *tp;
    mp = (MSG *) malloc(sizeof(MSG));
    for (fp = (char *)m.s, tp = (char *)mp->s; tp < (char *)(mp+1);) {
        *tp++ = *fp++;
    }
}




