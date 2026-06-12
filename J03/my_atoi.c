#pragma once

int my_atoi(char *str)
{
    int num[] = {'0','1','2','3','4','5','6','7','8','9'};

    int count = 0;
    while (*(str + count) != '\0')
        count++;

    int result = 0;
    int i = 0;
    while (*(str + i) != '\0') {
        for (int j = 0; j < 10; j++) {
            if (*(str + i) == num[j]) {
                int p = 1;
                for (int k = 0; k < count - i - 1; k++) {
                    p *= 10;
                }
                result += j * p;
            }
        }
        i++;
    }
    return result;
}