void count_vowels_and_consonants(char *array, int *vowel, int *consonant){
 	*vowel= 0;
	*consonant= 0;

	for(; *array; array++){
    		if((*array>=65 && *array<=90) || (*array>=97 && *array<=122))
			switch(*array){
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
						*vowel+= 1;
						break;
				default:	*consonant+= 1;
			}
 	}
}
