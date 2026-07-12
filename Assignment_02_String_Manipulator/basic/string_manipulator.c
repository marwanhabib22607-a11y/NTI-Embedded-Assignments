#include<stdio.h>

void modifyString(char (*str)[50]);
static int vcount = 0; 

int main(){

    char word[50];
    printf("Enter the Word: ") ;
    scanf("%s",word) ;
    modifyString(&word) ;

    printf("Your Word Traversed: \n");
    int act_len = 0 , check = 0;
    while((word[check] !=  '\0' && act_len < sizeof(word) )){
            ++act_len;
            ++check ;  
    }
    for(int i = 0 ; i < act_len ; i++){
        printf("%c", word[i]);      
    }
    printf("\nNumber of Vowels: %d" , vcount) ;
}

void modifyString(char (*str)[50]){
    
    int act_len = 0 ;
    int check = 0 ;
    
    while(*(*str+check) !=  '\0' && act_len < sizeof(*str) ){
            ++act_len; 
            ++check ; 
    }
    char temp ;
    for(int i = 0 ; i < act_len/2 ; i++){
        temp = *(*str + i) ;
        *(*str + i) = *(*str + act_len - 1 -i) ;
        *(*str + act_len - 1 -i) = temp ;
    }
    for(int i = 0 ; i < act_len ; i++){
        if(*(*str + i) > 96){
            *(*str+i) -= 32;
        } 

        if(*(*str+i)=='a' || *(*str+i)=='A' || *(*str+i)=='e' || *(*str+i)=='E' || *(*str+i)=='o' || *(*str+i)=='O' || *(*str+i)=='i' || *(*str+i)=='I' || *(*str+i)=='u' || *(*str+i)=='U' || *(*str+i)=='y' || *(*str+i)=='Y'){
            vcount++ ;
        } 
        else 
            continue;
    }
    
}