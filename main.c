#include <stdio.h>
#include <string.h>
int main(void) {
 char password[11];
 char enwpassword[11];
 int i = 0;
 int check;
 int stack;
 while(1){
 printf("Enter New Password ( Number 10 ) : ");
 gets(password);
 while(password[i] != '\0'){
 i++;
 }
 if(i > 10){
 printf("Enter Password Again \n");
 i = 0;
 continue;
 }
 while(1){
 printf("Enter Your Password : ");
 gets(enwpassword);
 if(strcmp(password,enwpassword) == 0){
 check = 1 ;
 printf("Your Password is Correct !!!!!!!\n"); 
 break;
 }
 else{
 printf("Your Password is Not Correct !!!!!!!\n");
 stack += 1;
if(stack == 3){
 check = 0;
 break;
 }
 }
 }
 if(check == 1){
  i = 0;
  stack = 0;
 continue;
 }
 else{
 printf("Close Programs !!!!!\n");
 break;
 }
 }
return 0;
}