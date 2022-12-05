int connectingTowns(int n, vector<int> routes) {
    int pro=1;
    for(int i=0;i<n-1;i++){
        pro=(pro*routes.at(i))%1234567;
    }
    return pro%1234567;

}