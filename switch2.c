#include <stdio.h>
int main() {
    char ch='a';
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("vowel\n");
        break;
        default:
        printf("consonant\n");
    
        
    }
    return 0;
}