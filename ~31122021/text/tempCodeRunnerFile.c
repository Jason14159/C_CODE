while (p[n] != '\0') {
        a = p[n];
        if ((a >= '0' && a <= '9') || (a == ':') || (a == ',')) {
            s1[x] = a;
            x++;
        }
        else if ((a >= 'a' && a <= 'z') || a == ' ') {
            s2[y] = a;
            y++;
        }
        else if (a == '<') {
            while (p[n] != '>') {
                n += 1;
            }
            s2[y] = ' ';
            y++;
        }
        n += 1;
    }
    char s3[100] = {0};
    char t;
    int k = 0;
    while (k <= 7) {
        t = s1[k + 3];
        s3[k] = t;
        k++;
    }
    printf("[");
    printf("%s", s3);
    printf("]");
    printf("%s\n", s2);