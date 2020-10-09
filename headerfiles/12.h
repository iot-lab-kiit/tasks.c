
void count_vowels_and_consonants(char *str, int *vowel, int *consonant){
 	*vowel= 0;
	*consonant= 0;
	int i;
	for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>= 97 && str[i] <= 122) ||(str[i]>= 65 && str[i] <= 90))
        {
            if(str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' || str[i]=='A' || str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                *vowel+=1;
            else
                *consonant+=1;
        }
    }
}
