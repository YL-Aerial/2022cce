///�Ʋ�: ����ܼƪ��ŧi int a; a�O��ƪ��Ϊ�
///�Ʋ�: �������ŧi(�������Ϊ�)
///int sum( int a,int b);�ŧi�����Ϊ�
#include <stdio.h>
int sum (int a,int b);///���ŧi declare
int main()
{///�b�Τ��e�A�n���ŧi declare�Ωw�q define
    int ans=sum(2,3);
    printf("ans: %d\n",ans);
}
int sum (int a,int b)///�w�q define
{
    return a+b;
}///�^�� �^�ФH�a
