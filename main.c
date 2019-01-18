#include <stdio.h>
struct student
{
    char name[100];
    int yuwen;
    int shuxue;
    int yingyu;
};
int main()
{
    int index = 0;
    struct student arr[1000];
    printf("huanyingjinruxueshengchengjiguanlixitong\n");
    while (1)
    {

        printf("1---tianjiaxueshengchengji\n");
        printf("2---shanchuxueshengchengji\n");
        printf("3---chakansuoyouxueshengchengji\n");
        printf("4---yewu1:suoyouzongfengbujigedechengji\n");
        printf("5---yewu2:meiyikedoubujigedexueshengchengji\n");
        printf("6---yewu3:xianshizongfengzuigaochenhji\n");
        printf("7---yewu4:xspjcj\n");
        printf("8---tuichuchengxu\n");

        printf("qingshurugongnengbianhao\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {

            char name;
            int yuwen;
            int shuxue;
            int yingyu;
            printf("qingshuruxueshengxingmin\n");
            scanf("%s", (arr[index].name));

            printf("qingshuruyuwengchengji\n");
            scanf("%d", &(arr[index].yuwen));
            printf("qingshurushuxuechengji\n");
            scanf("%d", &(arr[index].shuxue));
            printf("qingshuruyingyuchengji\n");
            scanf("%d", &(arr[index].yingyu));
            index++;
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("shnachu\n");
            if (index > 0)
            {
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("wuxueshengchengji,shanchushibai,dianjihuichejixu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 3)
        {
            printf("suoyouxueshengchengjiruxia:\n");

            for (int i = 0; i < index; i++)
            {
                printf("di%dgexuesheng%sdegekechengjiruxia:\n", i + 1, arr[i].name );
                printf("yuwengcehngjiwei%d\n",arr[i].yuwen);
                printf("shuxuechengjiwei%d\n",arr[i].shuxue);
                printf("yingyucehngjiwei%d\n",arr[i].yingyu);
            }
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
        }
        if (code == 6)
        {
        }
        if (code == 7)
        {
        }
        if (code == 8)
        {
            printf("tuichuchengji\n");
            break;
        }
    }

    return 0;
}