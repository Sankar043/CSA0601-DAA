#include <stdio.h>
#define INF 99999
void floydWarshall(int graph[][100], int V) 
{
    int dist[V][V],i,j,k;
    for ( i = 0; i < V; i++) 
	{
        for ( j = 0; j < V; j++) 
		{
            dist[i][j] = graph[i][j];
        }
    }
    for ( k = 0; k < V; k++) 
	{
        for ( i = 0; i < V; i++) 
		{
            for ( j = 0; j < V; j++) 
			{
                if (dist[i][k] + dist[k][j] < dist[i][j]) 
				{
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    printf("Shortest distance matrix:\n");
    for (i = 0; i < V; i++) 
	{
        for ( j = 0; j < V; j++) 
		{
            if (dist[i][j] == INF)
                printf("INF\t");
            else
                printf("%d\t", dist[i][j]);
        }
        printf("\n");
    }
}
int main() 
{
    int V,i,j;
    printf("Enter the number of vertices: ");
    scanf("%d", &V);
    int graph[100][100];
    printf("Enter the adjacency matrix (use 'INF' for unreachable edges):\n");
    for ( i = 0; i < V; i++) 
	{
        for ( j = 0; j < V; j++) 
		{
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == -1) 
			{
                graph[i][j] = INF;
            }
        }
    }
    floydWarshall(graph, V);
    return 0;
}
