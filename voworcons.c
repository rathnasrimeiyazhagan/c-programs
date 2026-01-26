#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='a'|| a=='e'||a=='i'|| a=='e'||a=='o'|| a=='e'||a=='u'|| a=='A'||a=='E'|| a=='I'||a=='O'|| a=='U'){
        printf("%C is vowel",a);
    }
    else{
        printf("%c is not a vowel",a);
    }
    return 0;
   
}