#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
#include<unistd.h>
//#include <locale.h>
//#include <ctype.h>
int i,q;              // i usado no for, q usado no for dentro do for...
char d[100];          //determina Criptografar ou descriptografar
//int s=2;             
int g;        //
int a=0;      //
int w=0;      //
int z=0;      //
int u=0;      //serve para o for nao repedi p processo aonde nao e mais nessecario
char x[100],  //Palavra chave
y[100000000], //Entrada de Texto Grande
t[100],       // alfabeto que é transformado em um novo
r[100];       //serve de compração ao alterado alfabeto
char h[100];  // alfabeto de comparaçãe  em maiusculo
int k;        //
int b=0;      //determina um local a comparar ao anterior
int s=2;

int main(){
	
   //setlocale (LC_ALL,"portuguese");
   strcpy(r,"abcdefghijklmnopqrstuvwxyz");
	while(s==2){
	system ("cls");
	printf("-Keys words-\n");
	printf("Criptografar(1).\n");
	printf("Descriptografar(2):");
	gets( d);
	
	if  (strcmp(d ,"1")==0){ 
	b=0;
	
	printf("Digite a Palavra Chave:");
	gets( x);
    
	for(i=0;i<strlen(x);i++){        //Palavra chave transforma caracteres repetidos em espaço
	u=1;
	for(q=i+1;q<strlen(x);q++){
	if((x[i]==x[q])&&(u==1)){
	u=0;
	x[q]=' ';
	}}}
	
	for(i=0;i<strlen(x);i++){       //exclui csracteres repetidos os realocando no vetor
	if(x[i]!=' '){
	x[b]=x[i];
    b++; 
	}}
	
strcpy(h,"ABCDEFGHIJKLMNOPQRSTUVWXYZ");
strcpy(t,"abcdefghijklmnopqrstuvwxyz");
    
	for(i=0;i<strlen(t);i++){
	for(q=0;q<b;q++){
	if(t[i]==x[q]){
		t[i]=' ';
      	}}}
    
	for(i=0;i<b;i++){
	if(t[i]!= ' '){
	a++;
	y[a]=t[i];
	t[i]=' ';
	}}
	
        for(i=b;i<strlen(t);i++){
   	    for(q=b;q<strlen(t);q++){
		if(t[q]==' ')t[q]=t[q-1];
		if(t[q]==t[q+1])t[q]=t[q-1];
	}}	
	
	for(i=0;i<b;i++){
	t[i]=x[i];
	}
	
	for(i=b;i<b+a;i++){
	if(t[i]== ' '){
	z++;
	t[i]=y[z];
	}}
//	printf("Igual a==");
//	printf(x);
//	printf(",  ");
//	printf(y);
//	printf(",   ");
//	printf(t);
//	printf("\n");
//	printf("Digite o Texto:");
	
    gets( y);
    for(i=0;i<strlen(y);i++){	//crip
	u=1;
	for(q=0;q<strlen(r);q++){
	if((y[i]==r[q])&&(u==1)){
	y[i]=t[q];
	u=0;
	}
	}}
	
	for(i=0;i<strlen(y);i++){	
	u=1;
	for(q=0;q<strlen(h);q++){
	if((y[i]==h[q])&&(u==1)){
	y[i]=t[q];
	u=0;
	}
	}}
	
	k=0;
	
	for(i=0;i<strlen(y);i++){
	k=strlen(t)/strlen(x);
	 if(y[i]==' '){
      y[i]=y[i];
	 }
	 else{
	   y[i]=y[i]+k;
	 }}
	
	printf("Criptografia Concluida:\n");
	printf("%s\n",y);
	printf("Continuar(Enter)");
	gets( d);
	}
	
	if  (strcmp(d ,"2")==0){ 
	b=0;
	printf("Digite a Palavra Chave:");
	gets( x);
	
	for(i=0;i<strlen(x);i++){
	u=1;
	for(q=i+1;q<strlen(x);q++){
	if((x[i]==x[q])&&(u=1)){
	u=0;
	x[q]=' ';
	}}}
	
	for(i=0;i<strlen(x);i++){
	if(x[i]!=' '){
	x[b]=x[i];
    b++; 
	}}
	
	strcpy(t,"abcdefghijklmnopqrstuvwxyz");  //
	
	for(i=0;i<strlen(t);i++){
	for(q=0;q<b;q++){
	if(t[i]==x[q]){
		t[i]=' ';
      	}}}
      	
	for(i=0;i<b;i++){
	if(t[i]!= ' '){
	a++;
	y[a]=t[i];
	t[i]=' ';
	}}
	
     for(i=b;i<strlen(t);i++){
   	 for(q=b;q<strlen(t);q++){
		if(t[q]==' ')t[q]=t[q-1];
		if(t[q]==t[q+1])t[q]=t[q-1];
	}}	                                
	
	for(i=0;i<b;i++){
	t[i]=x[i];
	}
	
	for(i=b;i<b+a;i++){
	if(t[i]== ' '){
	z++;
	t[i]=y[z];
	}}
	
	printf("Digite o Texto:");
	
    gets( y);
    
    k=0;
    
    for(i=0;i<strlen(y);i++){  
    k=strlen(t)/strlen(x);
	 if(y[i]==' '){
      y[i]=y[i];
	 }
	 else{
	   y[i]=y[i]-k;
	 }}
	
	for(i=0;i<strlen(y);i++){	//Des
	u=1;
	for(q=0;q<strlen(t);q++){
	if((y[i]==t[q])&&(u==1)){
	y[i]=r[q];
	u=0;
	}}}
	
	printf("DesCriptografia Concluida:\n");
	printf("%s\n",y);
	printf("Continuar(Enter)");
	gets( d);
	}
	
}}
