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
//Purpose: main driving djikstra program 
int djikstra(int **graph,int size,int source){
	int distance[size];
	int previous[size];
	_Bool unvisitednodes[size]; 
	for(int  i = 0; i < size; i++){
		if(i == source){
			distance[source] = 0;
			unvisitednodes[source] = 0;
		}

		else{
			distance[i] = MAX;
		}
		previous[i] = NULL; 
		
		unvisitednodes[i] = 1; 
	}

	
	int totaltrue = totalTrue(unvisitednodes, size);
	int currentnode;
	int neighbors[size]; 
	while(totaltrue > 0){


		currentnode = findSmallest(distance);
		unvisitednodes[currentnode] = 0;
		

	}

}
//Purpose: to return the total of unvisited nodes so far  
int totalTrue(_Bool *nodes, int size){
	
	int totaltrue;
	for(int k = 0; k < size; k++){
		if(nodes[k] == 1){
			totaltrue++; 
		}

	}
	return totaltrue; 
}
//Purpose: find the smallest currently visible node
int findSmallest(int *dist, int size){
	int min = dist[0];
	int index;
	for(int i = 0; i < size; i++){
		if(min > dist[i]){
			min = dist[i];
			index = i;
		} 	
	}
	return index; 
}


//Name: findNeighbors
//Purpose: find all the neighbors of the currently visited node and return them
void findNeighbors(int **graph,int size, int current){

		
		_Bool neighbors[size]; 
		for(int j = 0; j < size; j++)
		{
			if(graph[current][j] > 0){
				neighbors[j] = 1;
		
			}			

			
		}
		return neighbors; 


}
//generate a graph for our program. This remains tentative to change.
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


