#include "tvechicle.h"
#include"tdatetime.h"
#include "time.h"
TVehicle::TVehicle()//Ĭ�Ϲ��캯��
{
}
void TVehicle:: getstop_time()//��ȡͣ��ʱ��
{  TDateTime JRtime;
    JRtime.printf();
}
void TVehicle::getput_out_time()//��ȡ�ᳵʱ��
{
      TDateTime CQtime;
    CQtime.printf();
}
int TVehicle:: shichang()//����ʱ��
 {
       TDateTime  CQtime1;
      TDateTime JRtime1;
   return H_shichang=(CQtime1-JRtime1)/60;
 }

int TVehicle:: EXPENSE()//�������
{
    if(H_shichang*60<30)
        return 0;
    else if(H_shichang*60>60&&((H_shichang*60-60)>15))
    return ((H_shichang*60/60)+1)*6;
    else
        return 6;
}
