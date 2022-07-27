//Left Rotation
//type easy

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    int temp[d];
    d = d%n;
    for(int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for(int i = d; i < n; i++ ){
        arr[i-d] = arr[i];
    }
    for(int i = 0 ; i < d; i++){
        arr[n-d+i] = temp[i];
    }
    return arr;
    
}
