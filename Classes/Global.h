#pragma once
#include <vector>
const int pkWidth = 71;//�ƵĿ�
const int pkHeight = 96;//�Ƶĸ�
const int pkJianJu = 20;//������֮��ļ��
//��ɫ
enum HuaSe	
{
	HeiTao = 0,//����
	HongTao,//����
	MeiHua,//÷��
	FangKuai,//����
	Gui,//��
	HuaSeBM = 4     //��ɫ����
};
//�ƺ�
enum PaiHao
{
	San = 0,Si,Wu,Liu,Qi,Ba,Jiu,Shi,ShiYi,ShiEr,ShiSan,Yi,Er,XiaoGui,DaGui,
	PaiHaoBM=2 //�ƺű���
};
//��ǩ
enum BiaoQian
{
	FenShu,
	NpcTwoBuChu,
	NpcOneBuChu
};
//����������13������
/*
�������˫����������С�����������ơ�
ը��������ͬ��ֵ�ƣ����ĸ� 7 ����
���ƣ������ƣ������ 5 ����
���ƣ���ֵ��ͬ�������ƣ���÷�� 4+ ���� 4 ����
�����ƣ���ֵ��ͬ�������ƣ������� J ����
����һ����ֵ��ͬ�������� + һ�ŵ��ƻ�һ���ơ����磺 333+6 �� 444+99
��˳�����Ż������������ƣ��磺 45678 �� 78910JQK ���������� 2 ���˫����
˫˳�����Ի������������ƣ��磺 334455 �� 7788991010JJ ���������� 2 ���˫����
��˳���������������������ƣ��磺 333444 �� 555666777888 ���������� 2 ���˫����
�ɻ��������˳��ͬ�����ĵ��ƣ���ͬ�����Ķ��ƣ���
�磺 444555+79 �� 333444555+7799JJ
�Ĵ����������ƣ������ơ���ע�⣺�Ĵ�������ը������
�磺 5555 �� 3 �� 8 �� 4444 �� 55 �� 77
*/
enum CARD_TYPE
{
	SINGLE_CARD = 1,		//����-
	DOUBLE_CARD,			//����-
	THREE_CARD,				//3����-
	BOMB_CARD,				//ը��
	THREE_ONE_CARD,			//3��1-
	THREE_TWO_CARD,			//3��2-
	BOMB_TWO_CARD,			//�ĸ���2�ŵ���
	BOMB_TWOOO_CARD,		//�ĸ���2��
	CONNECT_CARD,			//���Ƶ�˳-
	COMPANY_CARD,			//����˫˳-
	AIRCRAFT_CARD,			//�ɻ�������˳-
	AIRCRAFT_SINGLE_CARD,	//�ɻ���������˳������-
	AIRCRAFT_DOBULE_CARD,	//�ɻ���������˳������-
	ERROR_CARD				//���������
} ;
struct CRAD_INDEX//�����ɻ����Ĵ���
{
	std::vector<int> single_index;//����
	std::vector<int> duble_index;//˫��
	std::vector<int> three_index;//����
	std::vector<int> four_index;//����
};
