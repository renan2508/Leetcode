#include <stdio.h>
#include <string.h>

int strStr(const char* haystack, const char* needle) {

    if(strlen(needle) > strlen(haystack) || strlen(needle) == 0){
        return -1;
    }
    const char *pHaystack = haystack;

    while(*pHaystack != '\0'){
        const char *pNeedle = needle;
        const char *pCurrentHaystack = pHaystack;
        while(*pNeedle != '\0' && *pNeedle == *pCurrentHaystack){
            pCurrentHaystack++;
            pNeedle++;
        }
        if(*pNeedle == '\0'){
            return pHaystack - haystack;
        }
        pHaystack++;
    }
    return -1;
}

int main() {
    const char haystack[100] = "sadbutsad";
    const char needle[100] = "sad";
    printf("%d\n", strStr(haystack, needle));
    return 0;
}