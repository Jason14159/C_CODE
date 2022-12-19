    while (feof(fp)) {
        fgets(buff, 255, fp);
        printf("%s", fp);
    }