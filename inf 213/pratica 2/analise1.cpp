// Vitoria Maria Ferreira de Oliveira - 108211
//Exemplo de analise de complexidade:
//Note que simplificamos ao máximo na notacao O (removendo o n, ja que O(n^2 +n) = O(n^2), pois a parte quadratica "pesa mais")
//Complexidade: O(n^2 + m + n) = O(n^2 + m)
void funcao1(int n, int m) {
	for(int i=0;i<n;i++) 
		for(int j=0;j<n;j++)
			ct *= j;
	
	for(int k=0;k<m;k++) 
		ct += 10;

	for(int k=0;k<n;k++) 
		ct += 10;
}

//Complexidade: O((n^2) + m *(30^2 + 40)+   n*(n^2 + 200))= O (n^2 + m + n^3 + n) = O (n^3 + m)

void funcao2(int n, int m) {
	for(int i=0;i<n;i++) 
		for(int j=0;j<n;j++)
			ct *= j;
	
	for(int k=0;k<m;k++) 
		funcao1(30,40);

	for(int k=0;k<n;k++) 
		funcao1(n,200);
}

// Complexidade: O (n * k + m/100000) = O (n * k + m)

void funcao3(int n, int m, int k) {
	for(int i=0;i<n;i++) 
		for(int j=0;j<k;j++)
			ct *= m;

	for(int i=0;i<m/100000;i++) {
		ct += k;
	}
}

// Complexidade: O(n^2)

void funcao4(int n, int m, int k, int v[]) {
	int ct = 0;
	for(int i=0;i<n;i++) {
		if(v[i]%2==0) break;
		for(int j=0;j<n;j++) {
			ct += v[i] + v[j];
		}
	}
}

//Complexidade: O (n^2) no pior caso
void funcao5(int n, int m, int k, int v[]) {
	int ct = 0;
	for(int i=0;i<n;i++) {		
		for(int j=0;j<n;j++) {
			ct++;
			if(ct%2==0) break;
		}
	}
}

//Complexidade: O (n^2)
void funcao6(int n, int m, int k, int v[]) {
	int ct = 0;
	for(int i=0;i<n;i++) {		
		for(int j=0;j<n;j++) {
			ct+= log(n);
		}
	}
}

// Complexidade: O (n^2)
void funcao7(int n, int m, int k, int v[]) {
	int ct = 0;
	for(int i=1;i<n;i++) {		
		for(int j=i;j<n;j++) {
			ct+= log(n);
		}
	}
}

// Complexidade: O (n * log(m))
void funcao8(int n, int m, int k, int v[]) {
	int ct = 0;
	for(int i=0;i<n;i++) {		
		for(int j=0;j<log(m);j++) {
			ct += sin(k);
		}
	}
}

//Responda (alem de analisar a complexidade): o que essa funcao faz?
// Essa funcao usa a recursividade para encontrar o numero de digitos de um numero.
// A complexidade é O(log n)
void funcao9(int n) {
	if(n==0) return 0;
	return funcao9(n/10)+1;
}

// Complexidade: O (log n + log m)
void funcao10(int n, int m, int k, int v[]) {
	if(n==0 && m==0) return 1;
	if(n==0) return funcao10(n,m/2,k,v);
	else return funcao10(n/2,m,k,v);
}

// Complexidade: O (n * s) s = num de elementos de v;

void funcao11(int n, int m, int k, int v[]) {
	int ct = 0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<v[i];j++) {
			ct += k;
		}
	}
}

// Complexidade O(n^3)
int funcao12(int n) {
    int ans = 0;
    for(int i=5;i<n;i++) 
		for(int j=3;j<n;j++) 
	          for(int k=1;k<n;k++) {
	             ans += 2;
	             if(ans%10==0) break;
	          }
     return ans;
}

// Complexidade O(u * v * f/2 * v/2) = O(u * v * f);
double funcao13(int v,int u, int f) {
	double ans = 0;
	for(int i=0;i<u;i++) {
	   for(int j=0;j<v;j++) ans -= log(i*j);
	   ans += log(u+i);
	   for(int j2=0;j2<f/2;j2++)
	   	for(int k=v/2;k<v;k++)
	   		ans += log(j2*k); 
	}
	return ans;
}


//Analise a complexidade de melhor e pior caso dessa função
//Diga não apenas a complexidade, mas também explique quando esses tempos ocorrem

// Melhor caso é O (1), onde o primeiro elemento v é igual a m;
// O pior caso é O (n), onde precisa percorrer todo vetor para encontrar o elemento = m;
void funcao14(int n, int m, int k, int v[]) {
	int ct = 0;
	for(int i=0;i<n;i++) {
		if(v[i]==m)
			return i;		
	}
	return -1;
}

//Analise a complexidade de melhor e pior caso dessa função
//Diga não apenas a complexidade, mas também explique quando esses tempos ocorrem

// A complexidade do pior e do melhor caso é O (n^3), porque independente de quantas vezes 
// o loop é executado a complexidade continua sendo O(n^3), que é o valor da entrada.
int funcao15(int n, int w) {
    int ans = w;
    for(int i=5;i<n;i++) 
		for(int j=3;j<n;j++) 
	          for(int k=1;k<n;k++) {
	             ans += 2;
	             if(ans%10==0) break;
	          }
     return ans;
}

// A complexidade é O (n^2 + m);
int funcao16(int n, int w, int m) {
    double ans = w;
    for(int i=0;i<n;i++) 
    	for(int j=0;j<n;n--) 
    		for(int k=0;k<m;k++)
    			ans += 3.14;
    	
    
    return ans;
}