#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    short data[] = { 79 + 256 * 80, 81 + 256 * 82,83 + 256 * 84, 85 + 256 * 86 };
    FILE* fp = stdout;
    fwrite(data, sizeof(short), sizeof(data) / sizeof(short), fp);
    printf("\n");
    fclose(fp);
}