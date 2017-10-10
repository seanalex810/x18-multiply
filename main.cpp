#include <iostream> 
#include <vector> 

using namespace std; 
int main(){ 

vector < vector < int > > matrix; 

for(int row=0;row < matrix.size();row++){
   matrix[row].resize(13); 
for(int col = 0; col < matrix[row].size(); col++){ 
     if (row ==0){   
      matrix[row][col] = col;
     }
     else if (col ==0){ 
     matrix[row][col] = row; 
     } 
     else { 
     matrix[row][col] = row * col; 
     } 
 
} 
}
for (int row =0; row< matrix.size();row++){ 
    matrix[row].resize(13); 
for (int col=0; col< matrix[row].size(); col++){
if (row == 0 && col == 0){ 
   cout<<'x'<<'|'; 
   } 
else { 
  cout<<matrix[row][col]<<'|'; 
  } 
} 
} 
return 0;
}
