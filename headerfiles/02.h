void toUpper(char s[100])
{
    int i = 0;
    while(s[i]!='\0')
    {
        if(s[i] >= 97 && s[i] <= 122)            // ASCII VALUE FOR a-z is 97-122 and A-Z is 65-90 so if the character is between 97-122, it means it is in lowercase 
            s[i] = s[i] - 32;                    // a-A=32 => a-32=A => A=a-32
        i++;
    }
    printf("String Upper Case : %s",s);
}
