#include <stdio.h>
#include <time.h>

//struct Matrix{

//	int graph[][]; 
//}Matrix;


int main(){

	int input;

	printf("please enter an integer value: ");
	scanf("%d", &input);
	printf("the value provided is: %d", input); 
	
	int graph[input][input];
	buildMatrixGraph(graph, input);


	for(int i = 0; i < input;i++){
		for(int j = 0; j < input; j++){
			printf("value outside buildMatrixGraph: %d", graph[i][j]); 
		}	
	}
	return 0;
}	 





void  buildMatrixGraph(int **graph, int size){ 
	srand(time(NULL));
	for (int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			
			graph[i][j] = rand();
			printf("Value: %d", graph[i][j]);
		}   
	} 

	return; 

	
}


