#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# THIS CODE IS FOR SECURE.

const char base64chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

int base64_encode(const unsigned char *input, int input_len, char *output) {
    int i, j;
    unsigned char buffer[3];
    int output_len = 0;

    for (i = 0; i < input_len; i += 3) {
        for (j = 0; j < 3; j++) {
            if (i+j < input_len) {
                buffer[j] = input[i+j];
            } else {
                buffer[j] = 0;
            }
        }

        output[output_len++] = base64chars[buffer[0] >> 2];
        output[output_len++] = base64chars[((buffer[0] & 0x03) << 4) | ((buffer[1] & 0xf0) >> 4)];
        output[output_len++] = (i+1 < input_len) ? base64chars[((buffer[1] & 0x0f) << 2) | ((buffer[2] & 0xc0) >> 6)] : '=';
        output[output_len++] = (i+2 < input_len) ? base64chars[buffer[2] & 0x3f] : '=';
    }

    output[output_len] = '\0';
    return output_len;
}

int base64_decode(const char *input, unsigned char *output) {
    int i, j;
    unsigned char buffer[4];
    int input_len = strlen(input);
    int output_len = 0;

    for (i = 0; i < input_len; i += 4) {
        for (j = 0; j < 4; j++) {
            buffer[j] = strchr(base64chars, input[i+j]) - base64chars;
        }

        output[output_len++] = (buffer[0] << 2) | (buffer[1] >> 4);
        if (buffer[2] < 64) {
            output[output_len++] = (buffer[1] << 4) | (buffer[2] >> 2);
            if (buffer[3] < 64) {
                output[output_len++] = (buffer[2] << 6) | buffer[3];
            }
        }
    }

    output[output_len] = '\0';
    return output_len;
}

int main() {
    unsigned char input[256];
    scanf("%s", input);
    char encoded[256];
    unsigned char decoded[256];

    int encoded_len = base64_encode(input, strlen(input), encoded);
    printf("Encoded: %s\n", encoded);

    int decoded_len = base64_decode(encoded, decoded);
    decoded[decoded_len] = '\0';
    printf("Decoded: %s\n", decoded);

    return 0;
}
