vector<int> multiplyByTen( vector<int>& arr) {
    // Start completing the function 
   int size =arr.size();
   for(int i=0;i<size;i++){
    arr[i]=arr[i]*10;
   }
   return arr;
}