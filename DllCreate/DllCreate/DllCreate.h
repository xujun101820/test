// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� DLLCREATE_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// DLLCREATE_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef DLLCREATE_EXPORTS
#define DLLCREATE_API __declspec(dllexport)
#else
#define DLLCREATE_API __declspec(dllimport)
#endif

// �����Ǵ� DllCreate.dll ������
class  DLLCREATE_API CDllCreate{
public:
	CDllCreate(void);
	int add_my(int a,int b);
	// TODO:  �ڴ�������ķ�����
};

extern DLLCREATE_API int nDllCreate;

EXTERN_C DLLCREATE_API int fnDllCreate(void);
