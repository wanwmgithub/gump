//## MyPkg, C���Է�� API

#ifdef __WIN32__
#define DECL_EXPORT_DLL 	__declspec(dllexport)
#else
#define DECL_EXPORT_DLL
#endif

#ifdef __cplusplus
extern "C"
{
#endif

	// ����һ��������
	DECL_EXPORT_DLL     void* ms_new();

	// �ͷ�һ��������
	DECL_EXPORT_DLL     void ms_free(void *hdl);

	// �����ļ��ܺ��ŵ�ָ����������(�ı���ʽ)
	DECL_EXPORT_DLL     int ms_enctxt(void *hdl, const char *indata, int inlen);

	// �����ļ��ܺ��ŵ�ָ����������(�����Ʒ�ʽ)
	DECL_EXPORT_DLL     int ms_encblock(void *hdl, const char *indata, int inlen);

	// �����Ľ��ܺ��ŵ�ָ����������(�����Ʒ�ʽ)
	DECL_EXPORT_DLL     int ms_decblock(void *hdl, const char *indata, int inlen);

	// �����������е�������
	DECL_EXPORT_DLL     int ms_get_outdata(void *hdl, char* outbuf);

	// �����������е�����������
	DECL_EXPORT_DLL     int ms_get_outlen(void *hdl);
	
#ifdef __cplusplus
}
#endif
