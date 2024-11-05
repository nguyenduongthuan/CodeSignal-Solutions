int solution(int min1, int min2_10, int min11, int s) {
return (s<=min1) ? (s/min1) : ((s <= (min2_10*9) + min1) ? ((s-min1)/min2_10 + 1) : ((s-min1-(min2_10*9)) / min11) + 10);
}
