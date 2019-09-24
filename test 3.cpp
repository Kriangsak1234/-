#include<stdio.h>
#include<string.h>


/*void reverse(char myUni[]){
    int L;
	L=strlen(myUni);
	
	
	for(int i=L; i>=0 ; i--){
		
		printf("%c",myUni[i]);
	}
}
*/
void reverse(char myUni[]){
	int L = strlen(myUni);
	char*scr=&myUni[L];                   /*-------*scr 16*/
	for(int i=0;i<=L;i++){
		printf("%c",*scr);
			scr--;
	}
	}
main(){
	char myUni[] = "I love the RMUTL";	
	reverse(myUni);
}
