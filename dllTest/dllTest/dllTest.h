// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� DLLTEST_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// DLLTEST_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef DLLTEST_EXPORTS
#define DLLTEST_API __declspec(dllexport)
#else
#define DLLTEST_API __declspec(dllimport)
#endif

// �����Ǵ� dllTest.dll ������
class DLLTEST_API CdllTest {
public:
	CdllTest(void);
	// TODO:  �ڴ�������ķ�����
	//int add_my(int a, int b);
};

extern DLLTEST_API int ndllTest;

DLLTEST_API int fndllTest(void);
//DLLTEST_API int add_my(int a, int b);
