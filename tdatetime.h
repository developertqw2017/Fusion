#ifndef TDATETIME_H
#define TDATETIME_H
#include<iostream>
#include<ctime>
#include <string>
using namespace std;

class TDateTime
{
public:
    TDateTime();//ʹ�ø�����ʱ�䣨Ĭ�ϵ�ʱ��ֵΪ��ǰ��ϵͳʱ�䣩��������ʱ��ֵ
    TDateTime(const TDateTime &p);//ʹ��һ������ʱ��������µ�����ʱ�����
    int getyear();
    int getmonth();
    int getday();
    int gethour();
    int getminute();
    int getsecond();
     void printf();//�������
    TDateTime& operator=(const TDateTime&t);
    int operator-(const TDateTime &D1);//����ʱ���
   string change_TDateTime();//����ת��������������ʱ�����ת��Ϊ�ַ�������
    friend ostream&operator<< (ostream&,TDateTime&);  //��������

private:
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    char*ptr;
    time_t lp;
};


#endif // TDATETIME_H
