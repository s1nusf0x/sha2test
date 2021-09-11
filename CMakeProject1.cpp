// CMakeProject1.cpp: определяет точку входа для приложения.
//

#include "CMakeProject1.h"

void sha256d(const char* in, const char* out) {
    static int test_count = 0;

    char buffer[65] = { 0 };
    char hash[65] = { 0 };
    sha256_easy_hash_hex(in, strlen(in), buffer);
    sha256_easy_hash_hex(buffer, strlen(buffer), hash);
    printf("%s\n", buffer);
    printf("%s\n", hash);
}


int main() {

    const char* str = "0100000050120119172a610421a6c3011dd330d9df07b63616c2cc1f1cd00200000000006657a9252aacd5c0b2940996ecff952228c3067cc38d4885efb5a4ac4247e9f337221b4d4c86041b00000000";
    char hash[65] = { 0 };
    /*sha256_easy_hash_hex(str, strlen(str), hash);*/
    sha256d(str, hash);
    printf("%s\n", hash);
    return 0;
}
