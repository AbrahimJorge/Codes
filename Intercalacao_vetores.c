#include <stdio.h>

void intercalar(double notas01[], int tam_notas01, double notas02[], int tam_notas02, double resultado[]){
    int j=0, k=0, l=0;
    while((j<tam_notas01) && (k<tam_notas02)){
        if (notas01[j] > notas02[k]){
            resultado[l] = notas02[k];
            k++;
        }else{
            resultado[l] = notas01[j];
            j++;        
        }
        l++;    
    }
    while(j<tam_notas01){
        resultado[l] = notas01[j];
        l++;j++;
    }
    while(k<tam_notas02){
        resultado[l] = notas02[k];
        l++;k++;
    }

}

void imprimir(int tamanho, double notas[]){
	int i = 1;
	for(int cont = 0; cont < tamanho; cont++){
		printf("notas %d:\n", i);
		scanf("%lf", &notas[cont]);
		i++;
	}
	printf("ok\n");
}

int main(int argc, char const *argv[])
{
    int tam_EC;
	 scanf("%d", &tam_EC);
	 double notas_EC[tam_EC];
	 imprimir(tam_EC, notas_EC);
	
    int tam_CC;
	 scanf("%d", &tam_CC);
    double notas_CC[tam_CC];
	 imprimir(tam_CC, notas_CC);
	
    int tam_ES;
	 scanf("%d", &tam_ES);
    double notas_ES[tam_ES];
	 imprimir(tam_ES, notas_ES);
	
    double medias_CC_EC[tam_CC+tam_EC];
    double medias[tam_CC+tam_EC+tam_ES];
    
    intercalar(notas_CC, tam_CC, notas_EC, tam_EC, medias_CC_EC);
    intercalar(medias_CC_EC, tam_CC+tam_EC, notas_ES, tam_ES, medias);

    for(int i=0;i<tam_CC+tam_EC+tam_ES;i++){
        printf("%.2lf ",medias[i]);
    }
    printf("\n");
    return 0;

}
