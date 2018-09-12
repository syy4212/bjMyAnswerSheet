main(){
    char rank[3];
    float score;
    scanf("%s",rank);
    switch(rank[0]){
        case 'A':
            score = 4;
            break;
        case 'B':
            score = 3;
            break;
        case 'C':
            score = 2;
            break;
        case 'D':
            score = 1;
            break;
        default :
            score = 0;  
    }
        switch(rank[1]){
        case '+':
            score += 0.3;
            break;
        case '0':
            break;
        case '-':
            score -= 0.3;
            break;
        default :
            score = 0;  
    }
    printf("%1.1f\n",score);
}