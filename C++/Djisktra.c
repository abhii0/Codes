#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void shortestPath(int cost[5][5],int n,int v){
    int s[n];
    int dist[n],min_vert;
    for(int i=0;i<n;i++){
        s[i]=0;
        dist[i]=cost[v][i];
    }
    s[v]=1;
    dist[v]=0; 
    for(int i=1;i<n;i++){
        int min=INT_MAX;
        for(int j=0;j<n;j++){
            if(dist[j]<min && s[j]==0){
                min=dist[j];
                min_vert=j;
            }
        }
        s[min_vert]=1;
        for(int k=0;k<n;k++){
            if(cost[min_vert][k]<INT_MAX && s[k]==0){
                if(dist[k]>dist[min_vert]+cost[min_vert][k]){
                    dist[k]=dist[min_vert]+cost[min_vert][k];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",dist[i]);
    }
}

int main(){
    int n=5,v;
    printf("Enter the vertex to find out min distance:\t");
    scanf("%d",&v);
    int cost[][5]={
        {0,INT_MAX,INT_MAX,INT_MAX,INT_MAX},
        {300,0,INT_MAX,INT_MAX,INT_MAX},
        {1000,800,0,INT_MAX,INT_MAX},
        {INT_MAX,INT_MAX,1200,0,INT_MAX},
        {INT_MAX,INT_MAX,INT_MAX,1500,0},
    };
    shortestPath(cost,n,v-1);
    return 0;

}