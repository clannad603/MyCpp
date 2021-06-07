#include<iostream>
using namespace std;
int e[111][111],dis[111],visit[111];
int n,m;
const int inf=999999;
void init1()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j)
			e[i][j]=0;
			else
			e[i][j]=inf;
		}
	}
}
void init2()
{
	//初始化dis数组，1号顶点到其余各个顶点的初始距离 
	for(int i=1;i<=n;i++)
	{
		dis[i]=e[1][i];
	}
	//初始化visit数组
	for(int i=1;i<=n;i++)
	{
		visit[i]=0;
	}
	visit[1]=1; 
}
void dijkstra()
{
	int i,j,u,v,min;
	for(i=1;i<=n-1;i++)
	{
		//找离1号顶点最近的顶点 
		min=inf;
		for(j=1;j<=n;j++)
		{
			if(visit[j]==0&&dis[j]<min)
			{
				min=dis[j];
				u=j;
			}
		}
		visit[u]=1;
		for(v=1;v<=n;v++)
		{
			if(e[u][v]<inf)
			{
				if(visit[v]==0&&dis[v]>dis[u]+e[u][v])
				dis[v]=dis[u]+e[u][v];
			}
		}
	}
}
int main()
{
	int i,j,t1,t2,t3;
	cin>>n>>m;
	init1();
	//读入边 
	for(i=1;i<=m;i++)
	{
		cin>>t1>>t2>>t3;
		e[t1][t2]=t3;
	}
	init2(); 
	dijkstra();
	for(i=1;i<=n;i++)
	{
		cout<<dis[i]<<endl;
	}
	return 0;
}
