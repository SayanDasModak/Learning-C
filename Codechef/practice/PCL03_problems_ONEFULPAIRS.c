// Oneful Pairs
// Chef defines a pair of positive integers 
// (
// �
// , � ) (a,b) to be a  Oneful Pair Oneful Pair, i +  + ( � ⋅ � ),=111 a+b+(a⋅b)=111For example, (1,55)(1,55) is a Oneful PairOneful Pair, since 1+55+(1⋅55)=56+55=1111+55+(1⋅55)=56+55=111.But (1,56)(1,56) is not a  Oneful Pair Oneful Pair, since  1 + 56 + ( 1 ⋅ 56 ) = 57 + 56 = 113 ≠ 111 1+56+(1⋅56)=57+56=113=111. Given two positive integers  � a and  � b, output Yes if they are a  Oneful Pair Oneful Pair. And No otherwise

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a + b + (a *b) == 111){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}