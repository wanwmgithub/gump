#ifndef INCL_MYPKG
#define INCL_MYPKG

#include "mypub.h"

// mypkg �ڴ�ʹ�ò�������
#define MP_SIZE_NSNAME		24			// �����ռ�����󳤶�(��������)
#define MP_SIZE_FLDNAME		24			// �ֶ�����󳤶�(��������)
#define MP_INIT_HEAD_SIZE	2048		// ��ͷ��ʼ����
#define MP_INIT_DATA_SIZE	2048		// �����ʼ����
#define MP_MAX_HEAD_SIZE	65536		// ��ͷ��󳤶�
#define MP_MAX_DATA_SIZE	65536       // ������󳤶�
#define MP_MAX_NS			256			// �����ռ�������
#define MP_MAX_FIELD		2048		// �ֶ�������
#define MP_FILE_NSNAME	    "__FILES__" // �ļ������������ռ�

// mypkg �ֶα������Ͷ���
#define MP_T_SHORT		'H'				// ������
#define MP_T_USHORT 	'T'				// �޷��Ŷ�����
#define MP_T_INT 		'I'				// ����
#define MP_T_UINT 		'N'				// �޷�������
#define MP_T_LONG 		'L'				// ������
#define MP_T_ULONG		'U'				// �޷��ų�����
#define MP_T_FLOAT		'F'				// ��������
#define MP_T_DOUBLE 	'D'				// ˫������
#define MP_T_STRING 	'S'				// �ַ���
#define MP_T_BCD 		'B'				// BCD��
#define MP_T_BIN 		'X'				// ��������
#define MP_T_ENC_STR 	'E'				// �����ַ���
#define MP_T_MASK 		'M'				// ��������ַ���

#define MEM_ERROR			1			// ϵͳ�ڴ治��
#define PKG_TOO_LARGE 	    2			// ���ݰ����ȳ������ֵ(64K)
#define TOO_MANY_NS			3			// �����ռ����������ֵ(256)
#define TOO_MANY_FIELD      4			// �ֶ����������ֵ(2048)
#define	OUTBUF_TOO_SMALL	5			// �������ݻ��峤�Ȳ���
#define INVALID_FLDNAME	    6			// �ֶ����Ƿ�
#define FLD_NOT_FOUND 	    7			// �Ҳ����ֶ�
#define INVALID_NSNAME 	  	8			// �����ռ����Ƿ�
#define NS_NOT_FOUND		9			// �Ҳ��������ռ�
#define PKG_ERROR			10			// ���ݰ����ݲ���ȷ

//##ModelId=4AD97C4C0261
struct SMyField
{
    //##ModelId=4AD97C4D00AF
    char FldName[MP_SIZE_FLDNAME];

    //##ModelId=4AD97C4D00B0
    char Type;

    //##ModelId=4AD97C4D00BB
    char NsIdx;

    //##ModelId=4AD97C4D00BC
    char DataOffset[2];

    //##ModelId=4AD97C4D00BD
    char DataLen[2];
};

//##ModelId=4AD97C4C0251
class CMyPkg
{
  public:
  	
    //##ModelId=4AD97C4C02C5
    DECL_EXPORT_DLL static void splitNsFld(const char* aStr, char* nsname, char* fldname);

    // ���췽��
    //##ModelId=4AD97C4C02CF
    DECL_EXPORT_DLL CMyPkg();

    // ���췽��
    //##ModelId=4AD97C4C02D0
    DECL_EXPORT_DLL CMyPkg(CMyPkg& aSrcPkg, const char* aNs = NULL);

    // ��������
    //##ModelId=4AD97C4C02D3
    DECL_EXPORT_DLL ~CMyPkg();

    // �����ϴβ����ĳ�����
    //##ModelId=4AD97C4C02D4
    DECL_EXPORT_DLL const char* getErrMsg();

    //##ModelId=4AD97C4C02D5
    DECL_EXPORT_DLL void clear();

    //##ModelId=4AD97C4C02D6
    DECL_EXPORT_DLL int addInt(const char *key, int val, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C02E0
    DECL_EXPORT_DLL int addUInt(const char *key, u_int val, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C02E4
    DECL_EXPORT_DLL int addShort(const char *key, short val, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C02F0
    DECL_EXPORT_DLL int addUShort(const char *key, u_short val, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C02FD
    DECL_EXPORT_DLL int addLong(const char *key, long val, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C0301
    DECL_EXPORT_DLL int addULong(const char *key, u_long val, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C030D
    DECL_EXPORT_DLL int addFloat(const char *key, float val, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C0311
    DECL_EXPORT_DLL int addDouble(const char *key, double val, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C031C
    DECL_EXPORT_DLL int addString(const char *key, const char *val, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C0320
    DECL_EXPORT_DLL int addString(const char *key, const char *val, int len, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C032E
    DECL_EXPORT_DLL int addBin(const char *key, const char *val, int len, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C033C
    DECL_EXPORT_DLL int addEncStr(const char *key, const char *val, int len = 0, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C0341
    DECL_EXPORT_DLL int addMaskStr(const char *key, const char *val, int len = 0, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C034D
    DECL_EXPORT_DLL int addFileName(const char *filename);

    //##ModelId=4AD97C4C034F
    DECL_EXPORT_DLL int setField(const char *key, const char *val, const char type, int len, const char *ns);

    //##ModelId=4AD97C4C035E
    DECL_EXPORT_DLL short getShort(const char *key, const char *ns = "DEFAULT");

    // ��ȡ�޷��Ŷ������ֶ�
    //##ModelId=4AD97C4C0361
    DECL_EXPORT_DLL u_short getUShort(const char *key, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C036C
    DECL_EXPORT_DLL int getInt(const char *key, const char *ns = "DEFAULT");

    // ��ȡ�޷��������ֶ�
    //##ModelId=4AD97C4C036F
    DECL_EXPORT_DLL u_int getUInt(const char *key, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C037A
    DECL_EXPORT_DLL long getLong(const char *key, const char *ns = "DEFAULT");

    // ��ȡ�޷��ų������ֶ�
    //##ModelId=4AD97C4C037D
    DECL_EXPORT_DLL u_long getULong(const char *key, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C0380
    DECL_EXPORT_DLL float getFloat(const char *key, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C038B
    DECL_EXPORT_DLL double getDouble(const char *key, const char *ns = "DEFAULT");

    // ��ȡ�ַ����ֶβ����ص�ַ
    //##ModelId=4AD97C4C038E
    DECL_EXPORT_DLL const char* getString(const char *key, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C0391
    DECL_EXPORT_DLL int getString(const char *key, char *val, int len, const char *NS = "DEFAULT");

    //##ModelId=4AD97C4C039D
    DECL_EXPORT_DLL int getBin(const char *key, char *val, int *len = NULL, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C03AB
    DECL_EXPORT_DLL int getBin(const char *key, char *val, int len, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C03B9
    DECL_EXPORT_DLL int getEncStr(const char *key, char* val, int nmax, const char *ns = "DEFAULT");

    //##ModelId=4AD97C4C03BE
    DECL_EXPORT_DLL int getEncStr(const char *key, char *val, int* len, const char *ns = "DEFAULT");

    // ��λ�ö���ĳ���ļ���
    //##ModelId=4AD97C4C03CA
    DECL_EXPORT_DLL const char* getFileName(int idx);

    //##ModelId=4AD97C4C03CC
    DECL_EXPORT_DLL int getField(const char* key, char* val, char* type, int* len, const char* ns = "DEFAULT");

    //##ModelId=4AD97C4C03DB
    DECL_EXPORT_DLL int getField(int idx, char* ns, char* key, char* val, char* type, int* len);

    //##ModelId=4AD97C4D0003
    DECL_EXPORT_DLL int getFileNames(char* files);

    // �������ֶ���Ŀ
    //##ModelId=4AD97C4D0005
    DECL_EXPORT_DLL u_short getFldNum() const;

    // ���������ռ�(��λ��, ��0��ʼ)���ֶ���Ŀ
    //##ModelId=4AD97C4D0007
    DECL_EXPORT_DLL u_short getNsFldNum(int nsidx) const;

    // ���������ռ�(������)���ֶ���Ŀ
    //##ModelId=4AD97C4D000F
    DECL_EXPORT_DLL u_short getNsFldNum(const char* ns) const;

    //##ModelId=4AD97C4D0012
    DECL_EXPORT_DLL int getFldIdx(const char *key, const char* ns = "DEFAULT");

    //##ModelId=4AD97C4D0015
    DECL_EXPORT_DLL int get1stFldIdx(const char *ns = "DEFAULT") const;

    //##ModelId=4AD97C4D0018
    DECL_EXPORT_DLL int get1stFldIdx(int nsidx) const;

    // ��λ�����ֶε������ռ䣬��λ�ò���ȷ���򷵻�NULL
    //##ModelId=4AD97C4D001F
    DECL_EXPORT_DLL const char* getFldNs(int idx) const;

    // ��λ�����ֶε��ֶ�������λ�ò���ȷ���򷵻�NULL
    //##ModelId=4AD97C4D0022
    DECL_EXPORT_DLL const char* getFldName(int idx) const;

    // ��λ�����ֶε��ֶ�����, ��λ�ò���ȷ, �򷵻ؿ��ַ�'\0'.
    //##ModelId=4AD97C4D0025
    DECL_EXPORT_DLL const char getFldType(int idx) const;

    // ��λ�����ֶε��ֶγ���, ��λ�ò���ȷ, �򷵻� 0
    //##ModelId=4AD97C4D0028
    DECL_EXPORT_DLL int getFldLen(int idx) const;

    // ��λ�����ֶε��ַ���ֵ, ��λ�ò���ȷ, �򷵻�NULL
    //##ModelId=4AD97C4D002E
    DECL_EXPORT_DLL const char* getFldVal(int idx) const;

    //##ModelId=4AD97C4D0031
    DECL_EXPORT_DLL int getNsIdx(const char *ns = "DEFAULT") const;

    //##ModelId=4AD97C4D0034
    DECL_EXPORT_DLL int pack(char *buf, int *length);

    //##ModelId=4AD97C4D0037
    DECL_EXPORT_DLL int unpack(const char *buf);

    //##ModelId=4AD97C4D003E
    DECL_EXPORT_DLL void* getNsNames() const;

    // �����������ռ���Ŀ
    //##ModelId=4AD97C4D0040
    DECL_EXPORT_DLL u_short getNsNum() const;

    //##ModelId=4AD97C4D0042
    DECL_EXPORT_DLL int delField(const char* aFldName, const char* aNsName = "DEFAULT");

    //##ModelId=4AD97C4D0045
    DECL_EXPORT_DLL int cpNs(const char* aSrcNs = "DEFAULT", const char* aDstNs = NULL, CMyPkg* aSrcPkg = NULL);

    //##ModelId=4AD97C4D004E
    DECL_EXPORT_DLL int getFileNum();

    //##ModelId=4AD97C4D004F
    DECL_EXPORT_DLL int mvNs(const char* aSrcNs = "DEFAULT", const char* aDstNs = NULL, CMyPkg* aSrcPkg = NULL);

    //##ModelId=4AD97C4D0053
    DECL_EXPORT_DLL int delNs(const char* aNsName = "DEFAULT");

    //##ModelId=4AD97C4D0055
    DECL_EXPORT_DLL int cpField(const char* aSrcNs, const char* aSrcFld, const char* aDstNs, const char* aDstFld, char aDstType = 0, CMyPkg* aSrcPkg = NULL);

    //##ModelId=4AD97C4D0062
    DECL_EXPORT_DLL int parse(const char* buf, char* val, char* type, int* len);

    //##ModelId=4AD97C4D0070
    DECL_EXPORT_DLL void print(FILE* fp = stdout);

    //##ModelId=4AD97C4D0072
    DECL_EXPORT_DLL int getFldLen(const char* key, const char* nsname = "DEFAULT");

    // ��ȡ��ͷ���ݿռ䳤��
    //##ModelId=4AD97C4D007E
    DECL_EXPORT_DLL int getHeadSize() const;

    // ��ȡ�������ݿռ䳤��
    //##ModelId=4AD97C4D0080
    DECL_EXPORT_DLL int getDataSize() const;

    // ��ȡ��ͷ���ݿռ��ַ
    //##ModelId=4AD97C4D0082
    DECL_EXPORT_DLL const char* getHeadBuf() const;

    // ��ȡ�������ݿռ��ַ
    //##ModelId=4AD97C4D0084
    DECL_EXPORT_DLL const char* getDataBuf() const;

    // ��ȡ��ǰ���������ݳ���
    //##ModelId=4AD97C4D0086
    DECL_EXPORT_DLL int getPkgSize() const;

    //##ModelId=4AD97C4D0088
    DECL_EXPORT_DLL int exist(const char* key, const char* nsname = "DEFAULT");

    // "[]" ���������ط���
    //##ModelId=4AD97C4D008D
    DECL_EXPORT_DLL const char* operator[](const char* key);

    // "=" ���������ط���
    //##ModelId=4AD97C4D009C
    DECL_EXPORT_DLL CMyPkg& operator=(const CMyPkg& right);

  private:
  	
    //##ModelId=4AD97C4D009E
    int addNs(const char* aNsName = "DEFAULT");

    //##ModelId=4AD97C4D00A0
    int addField(int idx, const char* key, char nsidx, char type, int len, const char* val);

    //##ModelId=4AD97C4C0280
    short ErrCode;

    //##ModelId=4AD97C4C0281
    int HeadSize;

    //##ModelId=4AD97C4C0290
    int DataSize;

    //##ModelId=4AD97C4C0291
    char* HeadBuf;

    //##ModelId=4AD97C4C029F
    char* DataBuf;

    //##ModelId=4AD97C4C02C4
    char (* NsNames)[MP_SIZE_NSNAME];

    //##ModelId=4AD97D380000
    u_short FreeOffset;

    //##ModelId=4AD97D380001
    u_short NsNum;

    //##ModelId=4AD97D380002
    u_short NsFldNum[MP_MAX_NS];

    //##ModelId=4AD97D380003
    u_short FldNum;

    //##ModelId=4AD97C4C02C0
    SMyField *Fields;
};

#endif
