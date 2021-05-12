#include<stdio.h>
typedef struct date_rec
{
    int day ;
    int month ;
    int year ;
}DATE_REC ;
void input_date(struct date_rec *current_date);
void increment_date(struct date_rec *current_date);
void output_date(struct date_rec *current_date);
int main()
{
    DATE_REC date_rec={};

    input_date(&date_rec);
    increment_date(&date_rec);
    output_date(&date_rec);

    return 0;
}

void input_date(struct date_rec *current_date)
{
    printf("请输入当前日期（年 月 日）：");
    scanf("%d%d%d",&current_date->year,&current_date->month,&current_date->day);
}

void increment_date(struct date_rec *current_date)
{
    int year = current_date->year;
    int month = current_date->month;
    int day = current_date->day;
    int flag=1;
    int ERRO=0;
    current_date->day++;
    if(year%4!=0||year%100==0&&year%400!=0)
    {
       flag=0;
    }
    if(current_date->day>=1&&current_date->day<=28)
    {
        
    }
    else if(current_date->day==29)
    {
        if(current_date->month==2)
        {
            if(!flag)
            {
                current_date->day=1;
                current_date->month=3;
            }else
            {
                ERRO=1;
            }
        }
    }
    else if(current_date->day==31)
    {
        if(current_date->month==4||
        current_date->month==6||
        current_date->month==9||
        current_date->month==11)
        {
            current_date->day=1;
            current_date->month++;
        }
    }
    else if(current_date->day==32)
    {
        if(current_date->month==12)
        {
            current_date->year++;
            current_date->month=1;
            current_date->day=1;
        }
    }
  
}

void output_date(struct date_rec *current_date)
{
    printf("当前日期：%d年%d月%d日！" ,current_date->year,current_date->month,current_date->day);
}
