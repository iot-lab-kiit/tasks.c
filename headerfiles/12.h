
char LUT[27] = {1, 0, 0, 0, 1, 0 , 0,
				0, 1, 0, 0, 0, 0, 0, 
				1, 0, 0, 0, 0, 0, 1,
				0, 0, 0, 0, 0};	

void count_vowels_and_consonants(char *array, int *vowel, int *consonant){
 	*vowel= 0;
	*consonant= 0;
	
	while(*array){
		*array |= 0x20;

		if(*array >= 97 && *array <= 122){
			int temp = LUT[*array-97];; 
			*vowel += temp;
			*consonant += !temp;
		}
		array++;
	}
}
