#include <stdio.h>
#include <stdlib.h>


int main() {
	FILE *ar;
	ar=fopen("LLC.txt","r");
	char cad[1500];
	
	while(fgets(cad,1500,ar) != NULL){
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	int m=0;
	int o=0;
	char macd[13];
	char maco[13];
	char size[3];
	char control[5];
	char dsap[3];
	char ssap[3];
	printf("\n\n");
	
	while (cad[i] != '\n'){
		if(i<12){
			macd[i]=cad[i];}
			macd[12]='\0';
		if(i>=12 && i<24){
			maco[j]=cad[i];
			j++;}
			maco[12]='\0';
		if(i>=26 && i<28){
			size[k]=cad[i];
			k++;}
			size[2]='\0';
		if(i>=28 && i<30){
			dsap[l]=cad[i];
			l++;}
			dsap[2]='\0';
		if(i>=30 && i<32){
			ssap[m]=cad[i];
			m++;}
			ssap[2]='\0';
		if(i>=32 && i<36){
			control[o]=cad[i];
			o++;}
			control[5]='\0';
			
		printf("%c",cad[i]);
		i++;
		if(i%2==0){printf(" ");}
		}
		
	if(control[1]=='0' || control[1]=='2' || control[1]=='4' || control[1]=='6' || control[1]=='8' || control[1]=='a' || control[1]=='c' || control[1]=='e'){
	printf("\n\nLa trama es I: informacion");}
	if(control[1]=='1' || control[1]=='5' || control[1]=='9' || control[1]=='d'){
	printf("\n\nLa trama es S: Supervision");}
	if(control[1]=='3' || control[1]=='7' || control[1]=='b' || control[1]=='f'){
	printf("\n\nLa trama es U: no numerada");}		
	printf("\nMAC destino: %s\n",macd);
	printf("MAC origen: %s\n",maco);
	printf("Size: 00 %s\n",size);
	printf("DSAP: %s\n",dsap);
	printf("SSAP: %s\n",ssap);
	printf("Campo de control: %s\n\n",control);

}
	fclose(ar);
	return 0;
}
