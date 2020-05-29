#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N (3) // matrix dimension
#define N_STATES (362880/2) //9!/2
#define N_SOLUTION ((987654321)/10)
 
char prime[] = {
    0, /* 0 */
    1, /* 1 */
    1, /* 2 */
    1, /* 3 */
    0, /* 4 */
    1, /* 5 */
    0, /* 6 */
    1, /* 7 */
    0, /* 8 */
    0, /* 9 */
    0, /* 10 */
    1, /* 11 */
    0, /* 12 */
    1, /* 13 */
    0, /* 14 */
    0, /* 15 */
    0, /* 16 */
    1, /* 17 */
};

int tenpow[] = {
    1000000000, /* (10^8) */
    100000000, /* (10^7) */
    10000000, /* (10^6) */
    1000000, /* (10^5) */
    10000,  /* (10^4) */
    1000,  /* (10^3) */
    100,  /* (10^2) */
    10,  /* (10^1) */
    1   /* (10^0) */
};

int board[N*N];
char visited[N_SOLUTION];
int queue[N_STATES];
int head, tail;
int current_index;
 
void move(int i, int j) {
    int diff = board[j] - board[i];
    int next_index = current_index + diff*tenpow[i] - diff*tenpow[j];
    if ( visited[(next_index)/10] == 0 ) {
        visited[(next_index)/10] = visited[(current_index)/10] + 1;
    }
}

void createRandomBoard() {
    int i;
    int stateIndex;
    head = 0;
    while ( head < tail ) {
        current_index = stateIndex = queue[head];
        for ( i=8; i >= 0; stateIndex /= 10, i--) 
            board[i] = stateIndex % 10;
            
        if ( prime[board[0] + board[1]] ) move(0, 1);
        if ( prime[board[0] + board[3]] ) move(0, 3);
        if ( prime[board[1] + board[2]] ) move(1, 2);
        if ( prime[board[1] + board[4]] ) move(1, 4);
        if ( prime[board[2] + board[5]] ) move(2, 5);
        if ( prime[board[3] + board[4]] ) move(3, 4);
        if ( prime[board[3] + board[6]] ) move(3, 6);
        if ( prime[board[4] + board[5]] ) move(4, 5);
        if ( prime[board[4] + board[7]] ) move(4, 7);
        if ( prime[board[5] + board[8]] ) move(5, 8);
        if ( prime[board[6] + board[7]] ) move(6, 7);
        if ( prime[board[7] + board[8]] ) move(7, 8);
        head++;
    }
}

int main() 
{
    int testCases;
    int stateIndex;
    int tmp;
    
    tail = 0;
    queue[tail++] = 123456789;
    visited[123456789/10] = 1;
    createRandomBoard();
    scanf("%d", &testCases);
    for ( int i=0; i < testCases; i++ ) {
        stateIndex = 0;
        for ( int j=0; j < N*N; j++ ) {
            scanf("%d", &tmp);
            stateIndex = (stateIndex << 3) + (stateIndex << 1) + 1;
        }
        printf("%d\n", visited[stateIndex/10] - 1);
    }
    return 0;
}    
