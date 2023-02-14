#include <iostream>
#pragma warning(disable: 4996)

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}
char* decodeRLE(char* input) {
    // Base case: if the input string is empty, return null
    if (*input == '\0') {
        return nullptr;
    }

    int resultLen = strlen(input)*2;
    // The result string
    char* result = new char[resultLen + 1]();
    int resultIdx = 0;
    // Iterate through the input string
    for (int i = 0; input[i] != '\0'; i++) {
        // Check if the current character is a digit
        if (isDigit(input[i])) {
            // Extract the number
            int num = 0;
            while (isdigit(input[i])) {
                num = num * 10 + (input[i] - '0');
                i++;
            }
            i--; // Decrement i to account for the last digit

            // Find the end of the next group
            int j = i + 2;
            int openBrackets = 1;
            while (openBrackets > 0) {
                if (input[j] == '(') {
                    openBrackets++;
                }
                else if (input[j] == ')') {
                    openBrackets--;
                }
                j++;
            }
            j--; // Decrement j to account for the last ')'

            // Process the next group of characters recursively
            int nextGroupLen = j - i - 2;
            char* nextGroup = new char[nextGroupLen + 1];
            strncpy(nextGroup, input + i + 2, nextGroupLen);
            nextGroup[nextGroupLen] = '\0';
            char* nextGroupDecoded = decodeRLE(nextGroup);
            int nextGroupDecodedLen = strlen(nextGroupDecoded);
            if (resultIdx + nextGroupDecodedLen > resultLen) {
                return nullptr;
            }

            resultLen += (num - 1) * nextGroupDecodedLen;

            // Append the next group to the result num times
            for (int k = 0; k < num; k++) {
                if (resultIdx + nextGroupDecodedLen <= resultLen) {
                    for (int l = 0; l < nextGroupDecodedLen; l++) {
                        result[resultIdx++] = nextGroupDecoded[l];
                    }
                }
                else {
                    break;
                }
            }


            i = j; // update the position in the input string

            // Free the memory allocated for the next group
            delete[] nextGroup;
            delete[] nextGroupDecoded;
        }
        else if (input[i] != ')') {
            // If it's not a digit and not a ')', add the character to the result
            result[resultIdx++] = input[i];
        }
    }
    char* tmp = new char[resultIdx + 1]; // allocating new memory to fit the size of the decoded string
    strncpy(tmp, result, resultIdx); // copy the decoded string to the new memory
    tmp[resultIdx] = '\0'; // add the null terminator at the end of the string
    delete[] result; // deallocate the old memory
    result = tmp; // set the result to the new memory

    return result;
}





int main() {
    char input1[] = "AABC";
    char* decoded1 = decodeRLE(input1);
    std::cout << "Encoded string1: " << input1 << std::endl;
    std::cout << "Decoded string1: " << decoded1 << std::endl;
    putchar('\n');
    delete[] decoded1;

    char input2[] = "R2(AB)3(Z)";
    char* decoded2 = decodeRLE(input2);
    std::cout << "Encoded string2: " << input2 << std::endl;
    std::cout << "Decoded string2: " << decoded2 << std::endl;
    putchar('\n');
    delete[] decoded2;

    char input3[] = "AB12(X)2(B3(A))";
    char* decoded3 = decodeRLE(input3);
    std::cout << "Encoded string3: " << input3 << std::endl;
    std::cout << "Decoded string3: " << decoded3 << std::endl;
    putchar('\n');
    delete[] decoded3;

    char input4[] = "2(A2(B3(C)))";
    char* decoded4 = decodeRLE(input4);
    std::cout << "Encoded string4: " << input4 << std::endl;
    std::cout << "Decoded string4: " << decoded4 << std::endl;
    delete[] decoded4;
    return 0;
}
