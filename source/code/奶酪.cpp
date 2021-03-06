#include<bits/stdc++.h>
#define MAXN 1000+10
#define MAXM 10000+10
using namespace std;

double read(){
    double x=0,f=1;
    char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}

struct point{
    double x,y,z;
}a[MAXN];

double dist(point a,point b){
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)+pow(a.z-b.z,2));
}

bool have[MAXM],arr;
long long n,h,r;

int s=0;
void dfs(long long x){
    if(arr||x>n)return;
    //cout<<"in:"<<x<<endl;
    if(a[x].z+r>=h){arr=1;return;}
    for(long long i=1;i<=n;i++){
        if(have[i]||dist(a[i],a[x])>2*r)continue;
        have[i]=1;
        dfs(i);
        //have[i]=0;
    }
}
int main(){
    double H=read();
    for(double i=1;i<=H;i++){
        arr=0;
        s=0;

        n=read(),h=read(),r=read();
        for(int i=1;i<=n;i++)have[i]=0;

        for(long long i=1;i<=n;i++){
            a[i].x=read();
            a[i].y=read();
            a[i].z=read();
        }
        for(long long i=1;i<=n;i++)
            if(abs(a[i].z)<=r){
                have[i]=1;
                dfs(i);
                for(int i=1;i<=n;i++)have[i]=0;
            }
        if(arr)cout<<"Yes \n";
        else cout<<"No \n";
    }
    
    return 0;
}