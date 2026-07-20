#include <iostream>
using namespace std;
/*
   There is two player present in the class room.
   there is a box of ball is present there.
   So one player remove the ball from box after the first player.
   One player at a time can remove only one or 3 ball.
   No.of ball will given by the user.
   The winner is to remove the ball at last.

*/

int main()
{
    int ball;
    cout <<"Enter no. of Balls: ";
    cin >>ball;

    if(ball % 2 != 0){
        cout<<"A win";
    }
    else{
        cout<<"B win";
    }

    return 0;
}