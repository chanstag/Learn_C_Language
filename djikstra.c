#include <stdio.h>
#include <time.h>
#include<stdlib.h>


//struct Matrix{

//	int graph[][]; 
//}Matrix;


#define MAX 99


void findNeighbors(int **graph,int size, int current, _Bool *neighbors);

int main(){

	char input[256];

	printf("please enter an integer value: ");
	fgets(input, 256, stdin);
	printf("the value provided is: %d\n", atoi(input)); 

	int size = atoi(input);	
	int **graph;

	graph = malloc(size * sizeof *graph);
	for(int k = 0; k < size; k++){
		graph[k] = malloc(size * sizeof *graph[k]);

	}


	buildMatrixGraph(graph, size);
	int previous[size];

/*	for(int i = 0; i < size;i++){
		for(int j = 0; j < size; j++){
			printf("value outside buildMatrixGraph: %d", graph[i][j]); 
		}	
	}
*/
	djikstra(graph, size, 1, previous);
	
	for(int k = 0; k < size; k++){
		printf("Node: %d", previous[k]);
	}	
	return 0;


}	 
//Purpose: main driving djikstra program 
int djikstra(int **graph,int size,int source, int *previous){
	int distance[size];
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
	_Bool neighbors[size]; 
	while(totaltrue > 0){

		//find the next smallest distance
		currentnode = findSmallest(distance);
		printf("current %d", currentnode); 
		//remove from visited list
		unvisitednodes[currentnode] = 0;
	
		//get an array of neighbors from findNeighbors function	
		//memcpy(neighbors, findNeighbors(graph, size, currentnode), sizeof(_Bool) * size);

		findNeighbors(graph, size, currentnode, neighbors);
		//for each neighbor of currentnode update distance
		for(int j = 0; j < size; j++){
			
			//1 indicates neighbor
			if(neighbors[j] == 1){
				int newroute = distance[currentnode] + findDistanceBetween(graph, size, currentnode, j);
				if(newroute < distance[j]){
					distance[j] = newroute;
					previous[j] = currentnode;  

			}

		}
		
		

	}

	return previous; 

}
}
//Purpose: find the distance between the two given nodes
int findDistanceBetween(int **graph, int size,int current,int neighbor){
	int totaldistance = graph[current][neighbor]; 
	printf("distance bewteen current and neighbor: %d", totaldistance);

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
void findNeighbors(int **graph, int size, int current, _Bool *neighbors){

		
		for(int j = 0; j < size; j++)
		{
			printf("on node: %d", graph[current][j]);

			if((graph[current][j] > 0) && (j != current)){
				neighbors[j] = 1;
		
			}
			else{
				neighbors[j] = 0; 
			}	

			
		}
		 


}
//generate a graph for our program. This remains tentative to change.
void buildMatrixGraph(int **graph, int size){ 
	srand(time(NULL));

	int num = size; 
	int row[size];
	int col[size];
	while(num > 0){
		for (int i = size - num; i < size; i++){
			int num = rand()%20;

			else if(num >= 10){
				row[i] = num%10;
			}
			else{
				row[i] = 0;
			}
		}
		for(int j = size - num; j < size; j++){
			col[j] == row[j];	
				
		}   
		num--;
		
	}

	for(int k = 0; k < size; k++){
		for(int l = 0; l < size; l++){
			printf("Value: %d", 
		
		}
	}
	
	 

	return; 

	
}


