#include <stdio.h>
#include <string.h>
// ASCII of a-z is from 97-122
int main() {
    short alpha=97, no_of_alphabets=0;
    char str[1000];
    gets(str);
    strlwr(str);
    for (; alpha <= 122; ++alpha)
    {short flag = 0;
		for (int i = 0; i < strlen(str); ++i)
    	{
    		if(str[i] == alpha)
    			flag++;
    	}

    	if(flag == 0){
    		printf("not pangram\n");
    		break;
    	}
    	else no_of_alphabets++;
    }
    if(no_of_alphabets == 26)
    	printf("pangram\n");
    return 0;
}
