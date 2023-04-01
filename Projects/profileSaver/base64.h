#ifndef BASE64_H
#define BASE64_H

/* This code is for secure. */

/* Encodes the input byte array as a Base64 string.
   Returns the length of the output string. */
int base64_encode(const unsigned char *input, int input_len, char *output);

/* Decodes the input Base64 string into a byte array.
   Returns the length of the output byte array. */
int base64_decode(const char *input, unsigned char *output);

#endif /* BASE64_H */
