void toUpper(char s[100]){
    for (int i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 97 && s[i] <= 122) {           /* ASCII VALUE FOR a is 97 and for z is 122.so we are checking if the character is in between this range of small alphabets */
         s[i] = s[i] - 32;                          /* coverting the lowercase alphabets into uppercase alphabets. for example A ASCII value is 65 and for Z is 90. */
      }
   }
   printf("String Upper Case: %s\n",s);
}
