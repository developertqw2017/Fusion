#include <QCoreApplication>
#include <iostream>
#include<tdatetime.h>
#include<tvechicle.h>
#include <car_type.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct link
{
    TVehicle  Car;
    struct link*next;
};
struct link*AppendNode(struct link*head)           //�������ܣ��½�һ���ڵ㲢��ӵ�����ĩ�Σ�������ӽڵ�������ͷָ��
{
    struct link*p1 = NULL, *p2 = head;
   TVehicle Car;
    p1 = (struct link*)malloc(sizeof(struct link));        //��p1ָ���½��ڵ�
    if (p1 == NULL)                       //��Ϊ�½��ڵ������ڴ�ʧ�����˳�����
    {
        cout << "�ڴ治�㣡" << endl;
        exit(0);
    }
    if (head == NULL)                  //��ԭ����Ϊ�ձ�
    {
        head = p1;                     //���½��ڵ���Ϊͷ�ڵ�
    }
    else                             //��ԭ����Ϊ�ǿգ����½��ڵ���ӵ���β
    {
        while (p2->next != NULL)             //��δ����β�����ƶ�p2ֱ��p2ָ���β
        {
            p2 = p2->next;                     //��p2ָ����һ���ڵ�
        }
        p2->next = p1;                        //��ĩ�ڵ�ָ��ָ���½��ڵ�

    }
    cout << "�����복�ƺţ�";
    cin >>Car.che_pai_hao;
    p1->Car.che_pai_hao = Car.che_pai_hao;                   //���½��ڵ��������ֵΪ����Ľڵ������ֵ
    p1->next = NULL;                                         //���½��ڵ���Ϊ��β
    return head;                               //������ӽڵ�������ͷָ��
}
void DisplyNode(struct link*head)            //��ʾ���������нڵ�Ľڵ�ź͸ýڵ��е�����������
{
    struct link*p1 = head;
    string thenumber;
    if (thenumber == p1->Car.che_pai_hao)
    {
        cout << "���ƺţ�" << p1->Car.che_pai_hao;
        cout << "ͣ��ʱ����" << p1->Car.shichang();
        cout << "���ã�" << p1->Car.EXPENSE();
    }
    p1 = p1->next;
}


void DeleteMemory(struct link*head)                 //�ͷ�leadָ������������нڵ���ռ���ڴ�
{
    struct link*p1 = head, *p2 = NULL;
    while (p1 != NULL);
    {
        p2 = p1;
        p1 = p1->next;
        free(p2);
    }

}

void Checkinfro()
{
    struct link*head = NULL;                   //����ͷָ��
    head = AppendNode(head);                          //��headΪͷָ�������ĩβ��ӽڵ�
    DisplyNode(head);                      //��ʾ��Ϣ
    DeleteMemory(head);
}

int main()
{ void Checkinfro();
    int op1, op2,op3;
   TVehicle Car;
    A:cout << "�������ͣ���1������ ��2���γ� "<<endl;
    cin >> op1;
    switch (op1)
    {
    case 1:
        cout << "��ѡ�񣺣�1���������� ��2���������� (3)��ѯ������Ϣ"<<endl;
        cin >> op2;
        switch (op2)
        {
        case 1:
            cout << "�����복�ƺţ�";
            cin >> Car.che_pai_hao;
            Car.getstop_time();
            cout << endl;
            break;
        case 2:
            Car.getput_out_time();
           Car. shichang();
            Car.EXPENSE();
            cout << endl;
            break;
     case 3:
            Checkinfro();
        }
        goto A;
case 2:
        cout << "��ѡ�񣺣�1���������� ��2���������� ��3����ѯ������Ϣ ";
        cin >> op3;
        switch (op3)
        {
        case 1:
            cout << "�����복�ƺţ�";
            cin >> Car.che_pai_hao;
            Car.getstop_time();
            cout << endl;
            break;
        case 2:
            Car.getput_out_time();
           Car. shichang();
            Car.EXPENSE();
            cout << endl;
            break;
     case 3:
            Checkinfro();
            break;

        }
        goto A;

    }
return 0;
}
