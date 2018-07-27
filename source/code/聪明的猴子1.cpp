#include<bits/stdc++.h>
using namespace std;
#define MAXN 200000+10
#define INF 0x3f3f3f
int f[MAXN],hd[MAXN],x[MAXN],y[MAXN],cnt;
struct point{
    int u,v,s;
}a[MAXN];
int read(){
    int f=1,x=0;
    char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
int find(int x){
    if(f[x]==x)return f[x];
    return f[x]=find(f[x]);
}
int link(int x,int y){
    f[find(x)]=find(y);
}
bool cmp(point a,point b){
    return a.s<b.s;
}
int dist(int x1,int x2,int y1,int y2){
    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}
int main(){
    int m=read();
    for(int i=1;i<=m;i++)hd[i]=read();
    int n=read();
    for(int i=1;i<=n;i++)x[i]=read(),y[i]=read();
    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++){
            cnt++;
            a[cnt].u=i;
            a[cnt].v=j;
            a[cnt].s=dist(x[i],x[j],y[i],y[j]);
        }

    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;i++)f[i]=i;
    int ans=0,s=0;
    for(int i=1;i<=n;i++){
        if(find(a[i].u)!=find(a[i].v)){
            link(a[i].u,a[i].v);
            s++;
            if(s==n-1){
                ans=a[i].s;
                break;
            }
        }
    }
    int shu=0;
    for(int i=1;i<=m;i++)if(hd[i]>=ans)shu++;
    cout<<shu<<endl;
    return 0;
} 