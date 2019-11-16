#include<stdio.h>
#include<stdlib.h>
#define max 10
int graph[max][max];
int visited[max];
int queue[max];
int f=-1;
int r=-1;
void DFS(int,int);
void BFS(int,int);
int isempty();
void enqueue(int);
int dequeue();
void DFS(int v,int n)
{
 int u;
 printf("%d",v);
 visited[v]=1;
 for(u=0;u<n;u++)
 {
  if(graph[v][u]==1&&visited[u]==0)
  {
   DFS(u,n);
  }
 }
}
void BFS(int v,int n)
{
 int u;
 enqueue(v);
 visited[v]=1;
 while(isempty()==0)
 {
  v=dequeue();
  printf("%d",v);
  visited[v]=2;
  for(u=0;u<n;u++)
  {
   if(graph[v][u]==1&&visited[u]==0)
   {
    enqueue(u);
    visited[u]=1;
   }
  }
 }
}
int isempty()
{
 if(f==-1||f>r)
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
void enqueue(int v)
{
 if(r==max-1)
 {
  printf("queue overflow");
 }
 else
 {
  if(f==-1)
  {
   f=0;
  }
  r=r+1;
  queue[r]=v;
 }
}
int dequeue()
{
 int item=queue[f];
 f=f+1;
 return item;
}
int main()
{
 int n,u,v,choice;
 printf("enter the number of vertices in the graph");
 scanf("%d",&n);
 printf("enter 1 if there exists an edge between u&v else 0");
 for(v=0;v<n;v++)
 {
  for(u=0;u<n;u++)
  {
   scanf("%d",&graph[v][u]);
  }
 }
 for(int i=0;i<n;i++)
 {
  visited[i]=0;
 }
 printf("DFS=1 \n BFS=2");
 scanf("%d",&choice);;
 if(choice==1)
 {
  DFS(0,n);
 }
 else
 {
  BFS(0,n);
 }
 return 0;
} 
 
