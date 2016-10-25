#include "stdio.h"

int main(void) {
	/*float n1;
    printf("Digite a nota do primeiro bimestre\n");
    scanf("%f\n", &n1);
    float n2;
    printf("Digite a nota do segundo bimestre\n");
    scanf("%f\n", &n2);
    float media = (n1 + n2)/2;
    if (media>=6) {
    	printf("Aprovado\n");
    } 
    else if (media>=3 && media<6) {
    	printf("Recuperação\n");
    }
    else {
    	printf("Reprovado\n");
    }
    return 0;
}*/

	/*int v1;
	printf("Digite um valor inteiro\n");
    scanf("%i\n", &v1);
    int v2;
    printf("Digite outro valor\n");
    scanf("%i\n", &v2);
    int v3;
    printf("Digite outro valor\n");
    scanf("%i\n", &v3);
    if (v1>v2 && v2>v3) {
    	return v3, v2, v1;
    }
    else if (v3>v2 && v2>v1) {
    	return v1, v2, v3;
    }
    else if (v2>v3 && v3>v1) {
    	return v1, v3, v2;
    }
    else if (v2>v1 && v1>v3) {
    	return v3, v1, v2;
    }
    else if (v3>v1 && v1>v2) {
    	return v2, v1, v3;
    }
    else if (v1>v3 && v3>v2) {
    	return v2, v3, v1;
    }
    return 0;
}*/

	/*int dia;
    printf("Digite o dia\n");
    scanf("%i\n", &dia);
    int mes;
    printf("Digite o mês\n");
    scanf("%i\n", &mes);
    int ano;
    printf("Digite o ano\n");
    scanf("%i\n", &ano);
    if (mes="fevereiro" && dia>28) {
    	printf("Data inválida");
    }
    if (mes=="janeiro" && dia>31) {
    	printf("Data inválida");
    }
    if (mes=="março" && dia>31) {
    	printf("Data inválida");
    }
    if (mes=="abril" && dia>30) {
    	printf("Data inválida");
    }
    if (mes=="maio" && dia>31) {
    	printf("Data inválida");
    }
    if (mes=="junho" && dia>30) {
    	printf("Data inválida");
    }
    if (mes=="julho" && dia>31) {
    	printf("Data inválida");
    }
    if (mes=="agosto" && dia>31) {
    	printf("Data inválida");
    }
    if (mes=="setembro" && dia>30) {
    	printf("Data inválida");
    }
    if (mes=="outubro" && dia>31) {
    	printf("Data inválida");
    }
    if (mes=="novembro" && dia>30) {
    	printf("Data inválida");
    }
    if (mes=="dezembro" && dia>31) {
    	printf("Data inválida");
    }
    if (ano<0) {
    	printf("Data inválida");
    }
    else {
    	printf("Data válida");
    }
    return 0;
}*/

/*	int n;
	int n1;
    printf("Digite um valor inteiro\n");
    scanf("%i\n", &n);
    if (n>=0) {
    	printf("Valor inválido\n");
    }
    if (n>1) {
    	for (n1=1; n1<n; n1 = n1+1) {
    		printf("n1\n");
    	}
    }
    if (n=1) {
    	printf("n");
    }
    return 0;
}*/

/*	int n;
	int i;
    printf("Digite um valor inteiro\n");
    scanf("%i\n", &n);
    if (n>0) {
    	for(i=1; i<=10; i=i+1){
   	if(n==2*i && n==3*i && n==5*i){
   		printf("Não é primo\n");
   	}
   		else{
   			printf("É primo\n");
   		}
   }
    return 0;
}*/
   
 /*	int i;
   	int n;
    printf("Digite um número inteiro\n");
    scanf("%i\n", &n);
    int n2;
    printf("Digite outro número inteiro\n");
    scanf("%i\n", &n2);
    if (n>0) {
    		while (n%2=0 && n2%2=0) {
    			for (i=2; i<=100; i=i*2) {
    			int d1 = 1*i;
    			}
    		}
    		while (n%3=0 && n2%3=0) {
    			for (i=3; i<=100; i=i*3) {
    			int d2 = 1*i;
    			}
    		}
    		while (n%5=0 && n2%5=0) {
    			for (i=5; i<=100; i=i*5) {
    			int d3 = 1*i;
    			}
    		}
    		while (n%7=0 && n2%7=0) {
    			for (i=7; i<=100; i=i*7) {
    			int d4 = 1*i;
    			}
    		}
    	}
    int mdc = d1 * d2 * d3 * d4;
    printf("%i\n", &mdc);
    return 0;
 }*/
 
	/*int x;
    printf("Digite um número inteiro\n");
    scanf("%i\n", &x);
    int y;
    printf("Digite outro número inteiro\n");
    scanf("%i\n", &y);
    if (y>0) {
    	int pot = x*x*y;
    	printf(pot);
    }
    if (x<0 && y>0) {
		int pot = (1/y)*(1/y)*x;
		printf(pot);
	}
	if (x>0 && y<0) {
		int pot = (1/x)*(1/x)*y;
		printf(pot);
	}
	if (x<0 && y<0) {
		int pot = (1/x)*(1/x)*y;
		printf(pot);
	}
	return 0;
}*/

float m;
printf("Digite o valor inicial da massa em gramas: \n");
    scanf("%f\n", &m);
 int x;
printf("Digite o valor de x em segundos: \n");
    scanf("%i\n", &x);   
int t = (1 < m/2*x);

	