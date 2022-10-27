/*Descrição do Projeto 01:
Utilizando os conceitos de vetor, implemente um algoritmo que:
 //TODOS QUE TIVEREM Asterisco* JA FORAM FEITOS.
 //ATENÇAO PRA FUNCAO DE CADA UM 
 
    inclua até 1000 usuários; ****
    edite um usuário;//marcela(apoio do Daniel)
    exclua um usuário;//duda(apoio alisson)
    busque um usuário pelo email;//alisson
    imprima todos os usuários cadastrados;//Daniel
    faça backup dos usuários cadastrados;//Daniel e alisson
    faça restauração dos dados;//Duda e Marcela
    
    Por ultimo faremos uma reuniao pra editar e melhorar esse codigo , antes da entrega .//Daniel, Alisson, Marcela, Duda.
Dados do usuário:
    Id (int) => preenchido automaticamente por números randômicos ****
    Nome completo (string) ****
    Email (string) => validação do campo: verificar se o caractere "@" aparece ****
    Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Não declarar****
    Endereço (string) ****
    Altura (double) => validação do campo: aceitar valores entre 1 e 2 ****
    Vacina (tomou a vacina? boolean) -> usou int ****
Duas equipes serão sorteadas para realizar a apresentação do projeto, tendo 15 min para cada apresentação.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main (){
 	
 	int i,  id[1000] ;
	int tempo = time(0);
 	char nome[1000][50] , email[1000][50] , sexo[1000][15] , endereco[1000][50];
 	double altura[1000];
 	int vacina[1000];
 	
 	for(i = 0; i < 1000; i++){
 		int continua;	
		printf("Deseja inserir um usuário  1 ou 0?");
		fflush(stdin);
		scanf("%d", &continua);
		 
		 if(continua == 0){
		   	printf("Pessoas cadastradas %d\n",i);
		 	break;
		 }
		 
		//ID
	    srand(tempo);
	    id[i] = rand();
	    printf("%d\n",id[i]);
	 
	
	 	//NOME
	 	printf("Me forneca o nome:");
	 	fflush(stdin);
	 	fgets(nome[i],50,stdin);
	 
	 	
	 	//EMAIL
	 	printf("Me forneca o email:");
	 	fflush(stdin);
	 	fgets(email[i],50,stdin);
			
		printf("\n%s", email[i]);
		
		//printf("%d", strchr(email[i], '@')==0);
		if(strchr(email[i], '@') == 0){
			printf("Email invalido\n");
			
			printf("Me forneca o email:");
	 		fflush(stdin);
	 		fgets(email[i],50,stdin);
		
		}
		else{
			printf("Email valido\n");
		}
		
		//SEXO
		printf("Me o sexo (Feminino, Masculino e Não declarar):");
	 	fflush(stdin);
	 	fgets(sexo[i],50,stdin);
		
		if(strcmp(sexo[i], "Feminino") == 0 && strcmp(sexo[i], "Masculino") == 0 && strcmp(sexo[i], "Feminino") == 0){
			printf("Sexo invalido\n");
			
			printf("Me o sexo (Feminino, Masculino e Não declarar):");
	 		fflush(stdin);
	 		fgets(sexo[i],50,stdin);
		}else{
			printf("Sexo valido");
		}
		
		
	 	//ENDERECO
	 	printf("Me forneca o endereco:");
	 	fflush(stdin);
	 	fgets(endereco[i],50,stdin);
		
		
		//ALTURA
		printf("Me forneca a altura:");
	 	fflush(stdin);
	 	scanf("%lf", &altura[i]);
	 	
	 	printf("%.2lf", altura[i]);
	 	
	 	if(altura[i] > 1.00 && altura[i] < 2.00){
			printf("Tá valido\n"); 		
		 }
		 else{
		 	printf("Altura invalida\n");
		 	
		 	printf("Me forneca a altura:");
	 		fflush(stdin);
	 		scanf("%lf", &altura[i]);
		 }
		 
		 //VACINA
		 printf("Tomou vacina ? 1 - sim\n0 - nao\n> ");
		 fflush(stdin);
		 scanf("%d", &vacina[i]);
		 
		 printf("%i");
	}
	
	int editar;
	printf("Deseja editar algum usuário 1 ou 0? ");
	fflush(stdin);
	scanf("%d", &editar);//editar
	
	if(editar >= 1){
		int index;
		printf("Digite o index que você deseja editar: ");
		fflush(stdin);
		scanf("%d", &index); 
		
	}
	
	//excluir
	
	
	//busque
	
	
	
	//imprima
	
	
	//backup
	
	
	
	//restauracao
	
}