#include "main.h"

int main(void)
{
	//��ʼ�����ڣ��䲨������
	COM1Init(115200);
	printf("test!\r\n");
	
	//����sd����wave��ʽ��Ƶ�ļ��� "/WAV/melody1.wav��
	Wavplay();
  	while(1);
}


