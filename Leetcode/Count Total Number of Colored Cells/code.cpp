long long coloredCells(int n) {
    long long time = 1;
    long long cell = 1;
    while(time<=n){
        cell += (4*(time-1));
        time++;
    }
    return cell;

}