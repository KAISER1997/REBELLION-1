#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

const int N = 8;
int drow[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int dcol[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
std::vector<std::string> initialState(N);

bool dfs(int inrow, int incol, int step){
if(step==N)
    return(1);
for(int t=0;t<=N;t++)
{
int row,col;
row=inrow+drow[t];
col=incol+dcol[t];
if(row<0 || col<0 || row>=N || col>=N)
continue;
if(row-step>=0 && initialState[row-step][col]=='S')
continue;
if(row-step-1>=0 && initialState[row-step-1][col]=='S')
continue;
if(dfs(row,col,step+1))
    return(1);
}
return(0);
}

int main(){

    for(int p = 0; p < N; p++){getline(std::cin, initialState[p]);}
    puts(dfs(7, 0, 0) ? "WIN" : "LOSE");
    return 0;
}