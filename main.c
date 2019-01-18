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
                printf("di%dgexuesheng%sdegekechengjiruxia:\n", i + 1, arr[i].name);
                printf("yuwengcehngjiwei%d\n", arr[i].yuwen);
                printf("shuxuechengjiwei%d\n", arr[i].shuxue);
                printf("yingyucehngjiwei%d\n", arr[i].yingyu);
            }
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("suoyouzongfengbijigedexueshengchengjiruxia:\n");

            for (int i = 0; i < index; i++)
            {
                int sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if (sum < 180)
                {
                    printf("zongfendiyu180detongxueshi%s\nyuwen%dshuxue%dyingyu%d", arr[i].name, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
                }
            }
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            printf("meiyikedoubujigedexueshengruxia:\n");

            for (int i = 0; i < index; i++)
            {
                if (arr[i].yuwen < 60 && arr[i].shuxue < 60 && arr[i].yingyu < 60)
                {
                    printf("sandoubujigedetongxueshi%s\nyuwen%dshuxue%dyingyu%d", arr[i].name, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
                }
            }
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 6)
        {
            printf("zongengzuigaodechengwei:\n");
            int max = 0;
            int stuID = 0;

            for (int i = 0; i < index; i++)
            {
                int sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if (max < sum)
                {
                    max = sum;
                    stuID = i;
                }
            }
            printf("zongfengzuigaodedetongxueshi%s\nyuwen%dshuxue%dyingyu%d", arr[stuID ].name, arr[stuID ].yuwen, arr[stuID ].shuxue, arr[stuID ].yingyu);

            printf("dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 7)
        {
            double max = 0.0;
            int stuID = 0;

            for (int i = 0; i < index; i++)
            {
                if (arr[i].yuwen >= 60 && arr[i].shuxue >= 60 && arr[i].yingyu >= 60)
                {
                    double avg = (arr[i].yuwen + arr[i].shuxue + arr[i].yingyu) / 3.0;
                    if (max < avg)
                    {
                        max = avg;
                        stuID = i;
                    }
                }
                printf("平均分最高且没有不及格科目的学生姓名为%s，语文：%d，数学%d，英语%d\n", arr[stuID].name, arr[stuID].yuwen, arr[stuID].shuxue, arr[stuID].yingyu);

                printf("\n点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            if (code == 8)
            {
                printf("tuichuchengji\n");
                break;
            }
        }

        return 0;
    }
}