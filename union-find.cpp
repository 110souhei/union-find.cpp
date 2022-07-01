int par[200005] = {};
int rak[200005] ={};
void init(int n){
    rep(i,n){
        par[i]=i;
        rak[i]=0;
    }

}

int find(int x){
    if(par[x] == x){
        return x;
    }else{
        return par[x] = find(par[x]);
    }
}

void unite(int x,int y){
    x = find(x);
    y =find(y) ;
    if(x == y) return ;
    if(rank[x] < rank[y]){
        par[x]=y;
    }else{
        par[y] = x;
        if(rak[x] == rank[y]) rak[x]++;
    }
}
