#ifndef TVECHICLE_H
#define TVECHICLE_H
#include <string>
#include <tdatetime.h>
#include<ctime>
using namespace  std;

class TVehicle
{
public:
    TVehicle();//Ĭ�Ϲ��캯��
  void getstop_time();//��ȡͣ��ʱ��
   void getput_out_time();//��ȡ�ᳵʱ��
     virtual int EXPENSE();//�������
    int shichang();//����ʱ��
  string che_pai_hao;
    float H_shichang;
    TVehicle *next;
    TVehicle *pre;
};

#endif // TVECHICLE_H
