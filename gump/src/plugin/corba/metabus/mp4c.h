/* MyPkg, C���Է�� API */

#ifdef __WIN32__
#define DECL_EXPORT_DLL 	__declspec(dllexport)
#else
#define DECL_EXPORT_DLL
#endif

#ifdef __cplusplus
extern "C"
{
#endif

/******************* Simple api with no default parameters *******************/

/*+++++++++���������+++++++++++*/

	/* ���Ƴ�һ���µ����ݰ� */
	DECL_EXPORT_DLL void* mp_clone(const void *srcpkg);

	/* ����һ���µ����ݰ� */
	DECL_EXPORT_DLL void* mp_new();

	/* �ͷ����ݰ� */
	DECL_EXPORT_DLL void mp_free(void *pkg);

	/* �����ݰ�������ַ��� */
	DECL_EXPORT_DLL int mp_pack(void *pkg, char *buf, int *len);

	/* ���ַ�����������ݰ��� */
	DECL_EXPORT_DLL int mp_unpack(void *pkg, const char *buf);

	/* ������ݰ����� */
	DECL_EXPORT_DLL void mp_clear(void *pkg);

	/* �������ݰ��Ĵ�С */
	DECL_EXPORT_DLL int mp_get_size(void *pkg);

	/* ��ȡ���ݰ��ϴβ����������ϸ��Ϣ */
	DECL_EXPORT_DLL const char* mp_errmsg(void* pkg);

	/* �����ݰ��������Կ���ʾ��ʽ��ӡ */
	DECL_EXPORT_DLL void mp_print(void *pkg);

	/* �����ݰ�ת�����׳��� CEasyPkg ���ݰ� */
	DECL_EXPORT_DLL int ep_to_mp(void* from_epkg, void* to_mpkg);

	/* ���׳��� CEasyPkg ���ݰ�ת����MyPkg���ݰ� */
	DECL_EXPORT_DLL int mp_to_ep(void* from_mpkg, void* to_epkg);

/*+++++++++�����ռ䳣�ò���+++++++++++*/

	/* �������ݰ��е������ռ���� */
	DECL_EXPORT_DLL unsigned short mp_get_nsnum(void *pkg);

	/* ���������ռ�λ�� (�� 0 ��ʼ) */
	DECL_EXPORT_DLL unsigned short mp_get_nsidx(void *pkg, const char* ns);


	/* �����ݰ���ɾ��һ�������ռ� */
	DECL_EXPORT_DLL int mp_del_ns(void *pkg, const char *ns);

	/* �����ݰ���ǰ��������Ϊ���������ͱ��ʽ��ֵ */
	DECL_EXPORT_DLL int	mp_parse(void *pkg, char *inbuf, char *outval, 
									char *outtype,int *outlen);

/*+++++++++�ļ�������+++++++++++*/

	/* �����ݰ��в���/����һ���ļ��� */
	DECL_EXPORT_DLL int mp_add_file(void *pkg, const char *filename);

	/* ȡ���ݰ��е��ļ��� */
	DECL_EXPORT_DLL int mp_get_filenum(void *pkg);

	/* ȡ���ݰ��е��ļ�����( ��'+'���� ) */
	DECL_EXPORT_DLL int mp_get_files(void *pkg, char* filenames);

	/* ȡ���ݰ��еĵ� idx �� (��0��ʼ) �ļ��� */
	DECL_EXPORT_DLL const char* mp_get_file(void *pkg, int idx);

/*+++++++++������������+++++++++++*/

	/* ȡ���ݰ��������� */
	DECL_EXPORT_DLL unsigned short mp_get_fldnum(void *pkg);

	/* ����ĳ�������ռ� (������) �ı������� */
	DECL_EXPORT_DLL unsigned short mp_get_ns_fldnum(void *pkg, const char* ns);

	/* ����ĳ�������ռ�(��λ��, �� 0 ��ʼ)�ı������� */
	DECL_EXPORT_DLL unsigned short mp_get_nsidx_fldnum(void *pkg, int nsidx);

	/* ����ĳ�������ռ�(������)���ױ���λ�� */
	DECL_EXPORT_DLL int mp_get_ns_1stfld(void *pkg, const char* ns);

	/* ����ĳ�������ռ�(��λ��, �� 0 ��ʼ)���ױ���λ�� */
	DECL_EXPORT_DLL int mp_get_nsidx_1stfld(void *pkg, int nsidx);

	/* ȡ���ݰ��е� idx �� (��0��ʼ) ���������� */
	DECL_EXPORT_DLL int mp_get_fld(void *pkg, int idx, 
			char *ns,  char *key, char *val, char *type, int *len);

	/* �������ݰ��� idx ��(��0��ʼ)������ */
	DECL_EXPORT_DLL const char* mp_get_fldname(void *pkg, int idx);

	/* �������ݰ��� idx ��(��0��ʼ)����ֵ */
	DECL_EXPORT_DLL int mp_get_fldlen(void *pkg, int idx);

	/* �������ݰ��� idx ��(��0��ʼ)�������� */
	DECL_EXPORT_DLL char mp_get_fldtype(void *pkg, int idx);

	/* �������ݰ��� idx ��(��0��ʼ)����ֵ */
	DECL_EXPORT_DLL const char* mp_get_fldval(void *pkg, int idx);

/************************** Complex api with default parameters ***************/

/*+++++++++�����ռ临���ƶ�+++++++++++*/

	/* ��Դ���ݰ��и���һ�������ռ������еı�����Ŀ�����ݰ�ָ���������ռ��� */
	DECL_EXPORT_DLL int mpkg_cp_ns(const void *srcpkg, const char *srcns, 
							void *dstpkg, const char *dstns);

	/* ��Դ���ݰ����ƶ�һ�������ռ������еı�����Ŀ�����ݰ�ָ���������ռ��� */
	DECL_EXPORT_DLL int mpkg_mv_ns(const void *srcpkg, const char *srcns, 
							void *dstpkg, const char *dstns);

/*+++++++++������ɾ��+++++++++++*/

	/* ����ĳ��������λ�� */
	DECL_EXPORT_DLL int mpkg_get_fldidx(void *pkg, const char *ns, 
									const char *key);

	/* ɾ�����ݰ���ĳ������ */
	DECL_EXPORT_DLL int mpkg_del_fld(void *pkg, const char *ns, 
									const char *key);

	/* �����ݰ��в���/����һ�� 16 �������ݿ���� */
	DECL_EXPORT_DLL int mpkg_add_bin(void *pkg, const char *ns, 
							const char *key, const char *val, int len);

	/* �����ݰ���ȡ��һ�� 16 �������ݿ���������� */
	DECL_EXPORT_DLL int mpkg_get_bin(void *pkg, const char *ns, 
									const char *key, char *val, int *len);

	/* �����ݰ��в���/����һ���������� */
	DECL_EXPORT_DLL int mpkg_add_int(void *pkg, const char *ns, 
									const char *key, int val);

	/* �����ݰ���ȡ��һ������������ֵ */
	DECL_EXPORT_DLL int mpkg_get_int(void *pkg, const char *ns, 
										const char *key);

	/* �����ݰ��в���/����һ������������ */
	DECL_EXPORT_DLL int mpkg_add_short(void *pkg, const char *ns, 
										const char *key, short val);

	/* �����ݰ���ȡ��һ��������������ֵ */
	DECL_EXPORT_DLL short mpkg_get_short(void *pkg, const char *ns, 
											const char *key);

	/* �����ݰ��в���/����һ���޷����������� */
	DECL_EXPORT_DLL int mpkg_add_uint(void *pkg, const char *ns, 
										const char *key, unsigned int val);

	/* �����ݰ���ȡ��һ���޷�������������ֵ */
	DECL_EXPORT_DLL unsigned int mpkg_get_uint(void *pkg, const char* ns, 
												const char* key);

	/* �����ݰ��в���/����һ���޷��Ŷ��������� */
	DECL_EXPORT_DLL int mpkg_add_ushort(void *pkg, const char *ns, 
										const char *key, unsigned short val);

	/* �����ݰ���ȡ��һ���޷��Ŷ�����������ֵ */
	DECL_EXPORT_DLL unsigned short mpkg_get_ushort(void *pkg, 
										const char *ns, const char *key);

	/* �����ݰ��в���/����һ������������ */
	DECL_EXPORT_DLL int mpkg_add_long(void *pkg, const char *ns, 
											const char *key, long val);

	/* �����ݰ���ȡ��һ��������������ֵ */
	DECL_EXPORT_DLL long mpkg_get_long(void *pkg, const char *ns, 
										const char *key);

	/* �����ݰ��в���/����һ���޷��ų��������� */
	DECL_EXPORT_DLL int mpkg_add_ulong(void *pkg, const char *ns, 
										const char *key, unsigned long val);

	/* �����ݰ���ȡ��һ���޷��ų�����������ֵ */
	DECL_EXPORT_DLL unsigned long mpkg_get_ulong(void *pkg, const char *ns, 
										const char *key);

	/* �����ݰ��в���/����һ������������ */
	DECL_EXPORT_DLL int mpkg_add_float(void *pkg, const char *ns, 
										const char *key, float val);

	/* �����ݰ���ȡ��һ��������������ֵ */
	DECL_EXPORT_DLL float mpkg_get_float(void *pkg, const char *ns, 
										const char *key);

	/* �����ݰ��в���/����һ��˫���ȸ��������� */
	DECL_EXPORT_DLL int mpkg_add_double(void *pkg, const char *ns, 
										const char *key, double val);

	/* �����ݰ���ȡ��һ��˫���ȸ�����������ֵ */
	DECL_EXPORT_DLL double mpkg_get_double(void *pkg,const char *ns, 
										const char *key);

	/* �����ݰ��в���/����һ���ַ������� */
	DECL_EXPORT_DLL int mpkg_add_string(void *pkg, const char *ns, 
										const char *key, const char *val);

	/* �����ݰ��в���/����һ��Ҫ��������ʾ���ַ������� */
	DECL_EXPORT_DLL int mpkg_add_maskstr(void *pkg, const char *ns, 
										const char *key, const char *val);

	/* �����ݰ���ȡ��һ���ַ���������ֵ */
	DECL_EXPORT_DLL const char* mpkg_get_string(void *pkg, const char *ns, 
										const char *key);
										
	DECL_EXPORT_DLL int mpkg_get_strdata(void *pkg, const char *ns, 
										const char *key, char* val, int len);

	/* �����ݰ��в���/����һ��Ҫ����ܱ�����ַ������� */
	DECL_EXPORT_DLL int mpkg_add_encstr(void *pkg, const char *ns, 
								const char *key, const char *val, int len);

	/* �����ݰ���ȡ��һ���Ѽ��ܹ����ַ������������� */
	DECL_EXPORT_DLL int mpkg_get_encstr(void *pkg, const char *ns, 
									const char *key, char* val, int nmax);


#ifdef __cplusplus
}
#endif

/* Simple macros specified default parameter for complex api */

#define mp_add_bin(pkg,key,val,len) mpkg_add_bin(pkg,"DEFAULT",key,val,len)
#define mp_add_int(pkg,key,val) mpkg_add_int(pkg,"DEFAULT",key,val)
#define mp_add_uint(pkg,key,val) mpkg_add_uint(pkg,"DEFAULT",key,val)
#define mp_add_short(pkg,key,val) mpkg_add_short(pkg,"DEFAULT",key,val)
#define mp_add_ushort(pkg,key,val) mpkg_add_ushort(pkg,"DEFAULT",key,val)
#define mp_add_long(pkg,key,val) mpkg_add_long(pkg,"DEFAULT",key,val)
#define mp_add_ulong(pkg,key,val) mpkg_add_ulong(pkg,"DEFAULT",key,val)
#define mp_add_float(pkg,key,val) mpkg_add_float(pkg,"DEFAULT",key,val)
#define mp_add_double(pkg,key,val) mpkg_add_double(pkg,"DEFAULT",key,val)
#define mp_add_string(pkg,key,val) mpkg_add_string(pkg,"DEFAULT",key,val)
#define mp_add_maskstr(pkg,key,val) mpkg_add_maskstr(pkg,"DEFAULT",key,val)
#define mp_add_encstr(pkg,key,val) mpkg_add_encstr(pkg,"DEFAULT",key,val,0)

#define mp_get_bin(pkg,key,plen) mpkg_get_bin(pkg,"DEFAULT",key,plen)
#define mp_get_int(pkg,fld) mpkg_get_int(pkg,"DEFAULT",fld)
#define mp_get_uint(pkg,fld) mpkg_get_uint(pkg,"DEFAULT",fld)
#define mp_get_short(pkg,fld) mpkg_get_short(pkg,"DEFAULT",fld)
#define mp_get_ushort(pkg,fld) mpkg_get_ushort(pkg,"DEFAULT",fld)
#define mp_get_long(pkg,fld) mpkg_get_long(pkg,"DEFAULT",fld)
#define mp_get_ulong(pkg,fld) mpkg_get_ulong(pkg,"DEFAULT",fld)
#define mp_get_float(pkg,fld) mpkg_get_float(pkg,"DEFAULT",fld)
#define mp_get_double(pkg,fld) mpkg_get_double(pkg,"DEFAULT",fld)
#define mp_get_string(pkg,fld) mpkg_get_string(pkg,"DEFAULT",fld)
#define mp_get_encstr(pkg,fld) mpkg_get_encstr(pkg,"DEFAULT",fld)

#define mp_cp_ns(pkg,src_ns,dst_ns) mpkg_cp_ns(pkg,src_ns,dst_ns,NULL)
#define mp_mv_ns(pkg,src_ns,dst_ns) mpkg_mv_ns(pkg,src_ns,dst_ns,NULL)
#define mp_del_fld(pkg,key) mpkg_del_fld(pkg,"DEFAULT",key)
#define mp_get_fldidx(pkg,key) mpkg_get_fldidx(pkg,"DEFAULT",key)

