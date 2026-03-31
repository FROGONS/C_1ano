int PegaMaior(int dados[], int Ndados){
    int i;
    int maior;
    maior = dados[0];
    for(i=0; i<Ndados; i++){
        if(maior < dados[i]){
            maior = dados[i];
        }
        
    }
    return maior;
}

void ContaDigitos(int dados[], int Ndados, int Base){
    int i;
    int algarismos [10] = {0};
    int saida[Ndados];
    int mod;
    
    //conta frequência de cada dígito
    for(i=0; i<Ndados; i++){
        mod = dados[i]/Base;
        mod %= 10;
        algarismos[mod]++;
    }
    
    for(i=1; i<10; i++){
        //ajusta o array para conter a posição do último dígito do algarismo
        algarismos[i] += algarismos[i-1];
    }
    
    for(i= Ndados-1; i>=0; i--){
        mod = dados[i]/Base;
        mod %= 10;
        saida[(algarismos[mod]-1)] = dados[i];
        algarismos[mod]--;
    }
    
    for(i= 0; i<Ndados; i++){
        dados[i] = saida[i];
    }
    
    
}

void RadixSort(int dados[], int Ndados, int maior, int base){
    if(maior/base ==0){
        return;
    }
    ContaDigitos(dados, Ndados, base);
    
    RadixSort(dados, Ndados, maior, (base*10));
}
    