
#include <stdio.h>

int main(void) {
    short data[] = { 79 + 256 * 80,81 + 256 * 82,83 + 256 * 84,85 + 256 * 86 };
    FILE* fp = stdout;
    fwrite(data, sizeof(short), sizeof(data) / sizeof(short), fp);
    //fclose(fp);
    return 0;
}