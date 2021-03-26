#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
FILE *yaz;
int ss=0;
int asalMi(int a,int b){
	
	yaz = fopen("log.txt","a");
	int i,ks,kontrol=0;
	if(a<b){
		ks=a;	
	}	
	else{
		ks=b;
	}
	for(i=2;i<=ks;i++){
		if(a%i==0 && b%i==0)
			kontrol=1;
	}
	if(kontrol==0){
	
		fprintf(yaz,"\n%d ve %d sayilari aralarinda asaldir..",a,b);
		a=a-b;
		fprintf(yaz,"\n %d Yasampuaniniz kaldi..",a);
		}
				
	else{
		fprintf(yaz,"\n%d ve %d sayilari aralarinda asal degildir..",a,b);
		fprintf(yaz,"\n %d Yasampuaniniz kaldi..",a);
		
	}
	
	return a;
}


void Kazandiniz(){
	FILE *yaz;
	yaz = fopen("log.txt","a");
	fprintf(yaz,"\nTebrikler Yarismayi Kazandiniz");
	fclose(yaz);
}
void Kaybettiniz(){
	FILE *yaz;
	yaz = fopen("log.txt","a");
	fprintf(yaz,"\nOyunu Kaybettiniz..");
	fclose(yaz);
}


int main(){
	yaz = fopen("log.txt","a");
	
	srand(time(NULL));
	int yasampuani=100;
	int haritauzunlugu;
	int engelsayisi;
	int engel1,engel2,engel3,engel4,engel5;
	int engel1nerede,engel2nerede,engel3nerede,engel4nerede,engel5nerede;
	
	fprintf(yaz,"\n<---Yarisma Basladiii--->");
	fprintf(yaz,"\nYarismaci HP---> %d",yasampuani);
	haritauzunlugu = 50+rand() %50; 
	engelsayisi = 2+rand() %4;
	fprintf(yaz,"\nHarita Uzunlugu---> %d",haritauzunlugu);
	fprintf(yaz,"\nEngel Sayisi--> %d",engelsayisi);
	if(engelsayisi==2){
		
		engel2nerede = 5+rand() %haritauzunlugu;
		engel1nerede = 5+rand() %(engel2nerede-5);
		
		fprintf(yaz,"\n1. Engel %d.metrede",engel1nerede);
		yasampuani=asalMi(yasampuani,engel1nerede);
		if(yasampuani<=0){
			fprintf(yaz,"\nOyunu Kaybettiniz..");
		}else{
			fprintf(yaz,"\n2. Engel %d.metrede",engel2nerede);
			yasampuani=asalMi(yasampuani,engel2nerede); 
			if(yasampuani>0)
				fprintf(yaz,"\nTebrikler Yarismayi Kazandiniz");
			if(yasampuani<=0)
				fprintf(yaz,"\nOyunu Kaybettiniz..");
		}
			
		
		
	}
	else if(engelsayisi==3){
		engel3nerede = 5+rand() %haritauzunlugu;
		engel2nerede = 5+rand() %(engel3nerede-5);
		engel1nerede = 5+rand() %(engel2nerede-5);
		fprintf(yaz,"\n1. Engel %d.metrede",engel1nerede);
		yasampuani=asalMi(yasampuani,engel1nerede);
		fprintf(yaz,"\n2. Engel %d.metrede",engel2nerede);
		yasampuani=asalMi(yasampuani,engel2nerede);
		if(yasampuani<=0){
			fprintf(yaz,"\nOyunu Kaybettiniz..");
		}else{
			fprintf(yaz,"\n3. Engel %d.metrede",engel3nerede);
			yasampuani=asalMi(yasampuani,engel3nerede);
			if(yasampuani>0)
				fprintf(yaz,"\nTebrikler Yarismayi Kazandiniz");
			if(yasampuani<=0)
				fprintf(yaz,"\nOyunu Kaybettiniz..");
		}	
	}
	else if(engelsayisi==4){
		engel4nerede = 5+rand() %haritauzunlugu;
		engel3nerede = 5+rand() %(engel4nerede-5);
		engel2nerede = 5+rand() %(engel3nerede-5);
		engel1nerede = 5+rand() %(engel2nerede-5);
		fprintf(yaz,"\n1. Engel %d.metrede",engel1nerede);
		yasampuani=asalMi(yasampuani,engel1nerede);
		fprintf(yaz,"\n2. Engel %d.metrede",engel2nerede);
		yasampuani=asalMi(yasampuani,engel2nerede);
		fprintf(yaz,"\n3. Engel %d.metrede",engel3nerede);
		yasampuani=asalMi(yasampuani,engel3nerede);
		if(yasampuani<=0){
			fprintf(yaz,"\nOyunu Kaybettiniz..");
		}else{
			fprintf(yaz,"\n4. Engel %d.metrede",engel4nerede);
			yasampuani=asalMi(yasampuani,engel4nerede);
			if(yasampuani>0)
				fprintf(yaz,"\nTebrikler Yarismayi Kazandiniz");
			if(yasampuani<=0)
				fprintf(yaz,"\nOyunu Kaybettiniz..");	
		}
		
	}
	else if(engelsayisi==5){
		engel5nerede = 5+rand() %haritauzunlugu;
		engel4nerede = 5+rand() %(engel5nerede-5);
		engel3nerede = 5+rand() %(engel4nerede-5);
		engel2nerede = 5+rand() %(engel3nerede-5);
		engel1nerede = 5+rand() %(engel2nerede-5);
		fprintf(yaz,"\n1. Engel %d.metrede",engel1nerede);
		yasampuani=asalMi(yasampuani,engel1nerede);
		fprintf(yaz,"\n2. Engel %d.metrede",engel2nerede);
		yasampuani=asalMi(yasampuani,engel2nerede);
		fprintf(yaz,"\n3. Engel %d.metrede",engel3nerede);
		yasampuani=asalMi(yasampuani,engel3nerede);
		fprintf(yaz,"\n4. Engel %d.metrede",engel4nerede);
		yasampuani=asalMi(yasampuani,engel4nerede);
		if(yasampuani<=0){
			fprintf(yaz,"\nOyunu Kaybettiniz..");
		}else{
			fprintf(yaz,"\n5. Engel %d.metrede",engel5nerede);
			yasampuani=asalMi(yasampuani,engel5nerede);
			if(yasampuani>0)
				fprintf(yaz,"\nTebrikler Yarismayi Kazandiniz");
			if(yasampuani<=0)
				fprintf(yaz,"\nOyunu Kaybettiniz..");
		}
		
	}
	return 0;
	
}fclose(yaz);
