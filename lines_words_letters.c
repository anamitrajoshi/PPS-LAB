#include<stdio.h>
void main(){
	char para[50];
	int letter=0,word=1,line=0,i;
	printf("enter a paragraph, to terminate it, type '$'");
	scanf("%[^$]s",para);
	for(i=0;para[i]!='\0';i++){
		if(para[i]!=' ' && para[i]!='.'){
			letter++;}
		if(para[i]==' '){
			word++;}
		if(para[i]=='.'){
			line++;}
		}
	printf("the number of letters in the given paragraph is %d\n",letter);
	printf("the number of words in the given paragraph is %d\n",word);
	printf("the number of sentences in the given paragraph is %d",line);
	return;
	}
	
			
