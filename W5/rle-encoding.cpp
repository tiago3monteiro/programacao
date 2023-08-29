
int compimento(const char str[])
{
    int res = 0;
    for (int i = 0; str[i] != '\0' ;i++)res++;
    return res;

}
void int_to_aa(int n, char str[], int& pos) {
    if (n < 0) {
        str[pos++] = '-';
        n = -n;
    }
    if (n >= 10) {
        int_to_aa(n / 10, str, pos);
    }
    str[pos++] = '0' + n % 10;
}

void rle_encode(const char str[], char rle[]) {
    int len = compimento(str);
    int rle_pos = 0;
    for (int i = 0; i < len; ) {
        int j = i + 1;
        while (j < len && str[j] == str[i]) {
            j++;
        }
        int count = j - i;
        char count_str[10];
        int count_pos = 0;
        int_to_aa(count, count_str, count_pos);
        for (int k = 0; k < count_pos; k++) {
            rle[rle_pos++] = count_str[k];
        }
        rle[rle_pos++] = str[i];
        i = j;
    }
    rle[rle_pos] = '\0';
}