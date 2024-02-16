#include <stdio.h>

main() {
    char str[100];
    int i, len;
    int freq[26] ;

    printf("Enter any string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++){
		len++;	
	}
	printf("\n=> Length of %d \n\n", len);

    for(i = 0; i < 26; i++) {
        freq[i] = 0;
    }
    
    for(i = 0; i < len; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 97]++;
        }
    }

    printf("=> Frequency of each letter : \n");
    for(i = 0; i < 26; i++) {
        
        if(freq[i] != 0) {
            printf("%c => %d\n", (i + 97), freq[i]);
        }
    }
}
