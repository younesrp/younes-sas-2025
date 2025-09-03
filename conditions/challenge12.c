#include <stdio.h>

int main() {
    char t1[9], t2[9];
    int h1, m1, s1, h2, m2, s2;

    printf("Entrez les deux temps à comparer :\n");
    scanf("%s", t1);
    scanf("%s", t2);

    sscanf(t1, "%d:%d:%d", &h1, &m1, &s1);
    sscanf(t2, "%d:%d:%d", &h2, &m2, &s2);

    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2))
        printf("Le premier instant précède le second\n");
    else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2))
        printf("Le second précède le premier\n");
    else
        printf("Les deux sont identiques\n");

    return 0;
}
