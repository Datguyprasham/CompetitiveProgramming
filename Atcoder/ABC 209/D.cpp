#include <bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
 
const int maxn=5e5+5;
 
struct edge
{
    int to,nxt;
}Edge[maxn<<1];
 
int n,m,root=1,tot=0;
int head[maxn];
int deep[maxn];
int fa[maxn][30];
int bs[30];
 
inline void addedge(int u,int v)
{
    Edge[++tot].to=v,Edge[tot].nxt=head[u],head[u]=tot;
    Edge[++tot].to=u,Edge[tot].nxt=head[v],head[v]=tot;
}
 
void dfs(int cur,int father)
{
    deep[cur]=deep[father]+1;
    fa[cur][0]=father;
    if(cur==root)
    {
        for(int i=0;i<=20;i++)
            fa[cur][i]=root;
        deep[cur]=0;
    }
    else
        for(int i=1;i<=20;i++)
            fa[cur][i]=fa[fa[cur][i-1]][i-1];
    for(int i=head[cur];i;i=Edge[i].nxt)
        if(Edge[i].to!=father)
            dfs(Edge[i].to,cur);
}
inline int skip(int x,int level)
{
    for(int i=20;i>=0;i--)
    {
        if(bs[i]&level)
            x=fa[x][i];
    }
    return x;
}
 
inline int LCA(int u,int v)
{
    if(deep[u]<deep[v])
        swap(u,v);
    u=skip(u,deep[u]-deep[v]);
    if(u==v)
        return u;
    for(int i=20;i>=0;i--)
        if(fa[u][i]!=fa[v][i])
            u=fa[u][i],v=fa[v][i];
    return fa[u][0];
}
 
int main()
{
    for(int i=0;i<=20;i++)
        bs[i]=1<<i;
    scanf("%d%d",&n,&m);
    int u,v;
    for(int i=1;i<n;i++)
    {
        scanf("%d%d",&u,&v);
        addedge(u,v);
    }
    dfs(root,0);
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&u,&v);
        int ans=LCA(u,v);
        if(ans==u || ans==v) cout<<"Road \n";
        else cout<<"Town \n";
    }
    return 0;
}