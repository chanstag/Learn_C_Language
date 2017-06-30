#include <stdio.h>
#include <time.h>
#include<stdlib.h>


//struct Matrix{

//	int graph[][]; 
//}Matrix;


#define MAX 99

int main(){

	char input[256];

	printf("please enter an integer value: ");
	fgets(input, 256, stdin);
	printf("the value provided is: %d", atoi(input)); 

	int size = atoi(input);	
	int **graph;

	graph = malloc(size * sizeof *graph);
	for(int k = 0; k < size; k++){
		graph[k] = malloc(size * sizeof *graph[k]);

	}


	buildMatrixGraph(graph, size);


	for(int i = 0; i < size;i++){
		for(int j = 0; j < size; j++){
			printf("value outside buildMatrixGraph: %d", graph[i][j]); 
		}	
	}


	
	return 0;


}	 

int djikstra(int **graph,int size, source){
	int distance[size];
	int previous[size];
	bool nodes[size] 
	for(int  i = 0; i < size; i++){
		if(i == source){
			distance[source] = 0;
		}

		else{
			distance[i] = MAX;
		}
		previous[i] = NULL; 
		
		nodes[i] = true; 
	}

	
	int totaltrue = totalTrue(nodes, size);

	while(totaltrue > 0){


		int smallestdist = findSmallest(distance);

	}

}

int totalTrue(bool *nodes, int size){
	
	int totaltrue
	for(int k = 0; k < size; k++){
		if(nodes[k] == true){
			totaltrue++; 
		}

	}
}

int findSmallest(int *dist, int size){
	int min = dist[0];
	int index;
	for(int i = 0; i < size; i++){
		if(min > dist[i]){
			min = dist[i];
			index = i;
		} 	
	}
}



void buildMatrixGraph(int **graph, int size){ 
	srand(time(NULL));
	for (int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			int num = rand()%20;
			if(num >= 10){
				graph[i][j] = num%10;
			}
			else{
				graph[i][j] = 0;
			}
			printf("Value: %d", graph[i][j]);
		}   
	} 

	return; 

	
}


