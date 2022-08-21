#include<unistd.h>

void repeat(void)
{
    write(1,"z",1);
    write(1,"\n",1);
}
int main(void)
{
    repeat();
}