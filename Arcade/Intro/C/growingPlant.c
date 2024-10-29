int solution(int upSpeed, int downSpeed, int desiredHeight) {
    /*
    if(upSpeed >= desiredHeight){
        return 1;
    }
    if(desiredHeight % (upSpeed - downSpeed) > downSpeed){
        return desiredHeight / (upSpeed - downSpeed) + 1;
    }
    if(upSpeed - downSpeed <= 2){
        return desiredHeight / (upSpeed - downSpeed) - downSpeed;
    }
    return desiredHeight / (upSpeed - downSpeed);
    
    int count = 0, check = 0;
    while(1){
        count++;
        check += upSpeed;
        if(check >= desiredHeight) return count;
        check -= downSpeed;
    }
    
    */
    return (desiredHeight < upSpeed) ? 1 : 1 + (((desiredHeight - upSpeed) < (upSpeed - downSpeed))?1:(desiredHeight - upSpeed) / (upSpeed - downSpeed) );
}
