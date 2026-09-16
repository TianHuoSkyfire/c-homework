#include <stdio.h>
int main ()
{
    const int MINOR_AGE = 35;
    
    int age = 0;
    printf("请输入年龄：");
    scanf("%d", &age);

    if (age < MINOR_AGE)
    {
        printf("年轻是美好的\n");
    }
     printf("年龄决定了你的精神世界，好好珍惜吧。\n");
    return 0;
}