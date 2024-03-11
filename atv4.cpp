#include <stdio.h>
#include <stdlib.h>

int main(){
	int chapa1, chapa2, chapa3;
	int votoChapa;
	int totalVotos;
	int totalChapa;
	int totalBrancos;
	float pc1, pc2, pc3, pcB;
	
	FILE *fp;
	fp = fopen("C:\\Users\\unisanta\\Desktop\\u\\votos.txt","r");
	
	if(fp==0){
		printf("NÃO PODEMOS ABRIR O ARQUIVO!");
		exit(1);
	}
	
		rewind(fp);
		
		while(fscanf(fp, "%d", &votoChapa) != EOF){
			totalVotos++;
			
			if(votoChapa==0){
				chapa1++;
			}
			if(votoChapa==1){
				chapa2++;
			}
			if(votoChapa==2){
				chapa3++;
			}
			if(votoChapa==3){
				totalBrancos++;
			}
		}
		pc1= chapa1*100/totalVotos;
		pc2= chapa2*100/totalVotos;
		pc3= chapa3*100/totalVotos;
		pcB= totalBrancos*100/totalVotos;
		
		printf("O TOTAL DE VOTOS COMPUTADOS FOI: %d", totalVotos);
		printf("\nA CHAPA 1 OBTEVE %d VOTOS", chapa1);
		printf("\nA CHAPA 2 OBTEVE %d VOTOS", chapa2);
		printf("\nA CHAPA 3 OBTEVE %d VOTOS", chapa3);
		printf("\nTIVEMOS %d VOTOS NULOS", totalBrancos);
		printf("\nA CHAPA 1 OBTEVE %.2f%% DOS VOTOS", pc1);
		printf("\nA CHAPA 2 OBTEVE %.2f%% DOS VOTOS", pc2);
		printf("\nA CHAPA 3 OBTEVE %.2f%% DOS VOTOS", pc3);
		printf("\n%2.f%% DOS VOTOS FORAM BRANCOS OU NULOS", pcB);
		
	
	}
