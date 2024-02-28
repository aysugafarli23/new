int sizeOfBiggestComponentHelper(
const IntMatrix& input
BoolMatrix& visited,
int row,
int col) {
/ / check visited  + input value
}

int sizeOfBiggestComponent(const IntMatrix& input) {
BoolMatrix visited;
int max_size = 0;
for(int row = 0; row <input.size(); ++row) {
for (int col = 0; col < input[row].size(); ++col) {
if (visited[row][col]) {
continue;
}
int current_size =  sizeOfBiggestComponentHelper(
input,
visited, 
row,
col);
if (current_size > max_size) {
max_size = current_size;
}
}
}
return max_size; 
}
