int solution(int param1, int param2) {
    int a, b, temp1, temp2, sum = 0, count = 0;
    temp1 = param1;
    temp2 = param2;
    int stop = 0;
    do
    {
        a = temp1%10;
        b = temp2%10;
        temp1 /= 10;
        temp2 /= 10;
        sum += ((a+b)%10)*pow(10, count);
        count++;
        if (temp1 == 0 && temp2 == 0) stop = 1;
    } while (stop == 0);
    return sum;
}
