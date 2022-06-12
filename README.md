# union-find.cpp
int par[200005] = {};
int rank[200005] ={};
void init(int n){
    rep(i,n){
        par[i]=i;
        rank[i]=0;
    }

}

int find(int x){
    if(par[x] == x){
        return x;
    }else{
        return par[x] == find(par[x]);
    }
}

void unite(int x,int y){
    x = find(x);
    y =find(y) ;
    if(x == y) return ;
    if(rank[x] < rank[y]){
        par[x]=y;
    }else{
        par[x] = x;
        if(rank[x] == rank[y]) rank[x]++;
    }
}
