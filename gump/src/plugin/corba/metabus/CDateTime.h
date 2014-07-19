#ifndef INCLUDE_PUBLIC_CDATETIME_H_HEADER_INCLUDED_C15AA25E
#define INCLUDE_PUBLIC_CDATETIME_H_HEADER_INCLUDED_C15AA25E

#include <mypub.h>
#include <time.h>
#include <sys/timeb.h>

//##ModelId=4AD9804C01D4
class CDateTime
{
  public:
  	
    // �������ƣ�
    //   ȱʡ���캯��
    // ���ܣ�
    //   ȱʡ���캯��
    //##ModelId=4AD9804C0253
    DECL_EXPORT_DLL CDateTime();

    // �������ƣ�
    //   ���캯��
    // ���ܣ�
    //   �Ը�����һ������ķ�ʽ�������
    //##ModelId=4AD9804C0254
    DECL_EXPORT_DLL CDateTime(CDateTime& right);

    // �������ƣ�
    //   ���캯��
    // ���ܣ�
    //   ���ַ���ʱ�乹����󣬸�ʽ:
    //       1. YYYYMMDD:hhnnssmmm
    //       2. YYYYMMDD
    //       3. YYYY/MM/DD
    //       4. YYYY-MM-DD
    //##ModelId=4AD9804C0256
    DECL_EXPORT_DLL CDateTime(const char* str);

    // �������ƣ�
    //   ���캯��
    // ���ܣ�
    //   ������ֵ��ʱ��ֵ�����������ֵΪYYYYMMDD��ʱ��ֵΪhhnnssmmm"
    //##ModelId=4AD9804C0258
    DECL_EXPORT_DLL CDateTime(long date, long time);

	// �����ָ�����ڵ�������֮�������
    //##ModelId=4AD9804C025B
    DECL_EXPORT_DLL long calDaysFrom(CDateTime& from);

	// �����ָ��ʱ�䵽��ʱ��֮��ĺ�����
	//##ModelId=4AD9804C025D
    DECL_EXPORT_DLL long calMSecsFrom(CDateTime& from);

	// ������������
    //##ModelId=4AD9804C025F
    DECL_EXPORT_DLL int calBankDays(CDateTime& from);

	// ����ָ����ݵ�����
    //##ModelId=4AD9804C0261
    DECL_EXPORT_DLL static int getDaysOfYear(int year);

	// ����ָ�����µ�����
    //##ModelId=4AD9804C0264
    DECL_EXPORT_DLL static int getDaysOfMonth(int year, int month);

	// �ж�ָ�������Ƿ�����
    //##ModelId=4AD9804C0268
    DECL_EXPORT_DLL static bool isLeapYear(int aYear);

    // �������ƣ�
    //   ��������
    // ���ܣ�
    //   �����Ϸ������ڵ���Ϊ�Ϸ�����
    //##ModelId=4AD9804C026B
    DECL_EXPORT_DLL CDateTime& toValidDate();

    // �������ƣ�
    //     �趨����
    // ���ܣ�
    //     ���ַ����趨���ڣ���ʽ:
    //       1. YYYYMMDD
    //       2. YYYY/MM/DD
    //       3. YYYY-MM-DD
    //##ModelId=4AD9804C026C
    DECL_EXPORT_DLL CDateTime& setDateStr(const char* aStr);

    // �������ƣ�
    //     �趨����
    // ���ܣ�
    //     ���ַ����趨���ڣ���ʽ: YYYYMMDD
    //##ModelId=4AD9804C026E
    DECL_EXPORT_DLL CDateTime& setDecDate(long aDate);

    // �������ƣ�
    //     �趨ʱ��
    // ���ܣ�
    //     ���ַ����趨ʱ�䣬��ʽ:
    //       1. HHNNSS
    //       2. HH:NN:SS
    //       3. HHNNSSMMM
    //       3. HH:NN:SS:MMM
    //##ModelId=4AD9804C0270
    DECL_EXPORT_DLL CDateTime& setTimeStr(const char* aStr);

    // �������ƣ�
    //     �趨ʱ��
    // ���ܣ�
    //     ���ַ����趨ʱ�䣬��ʽ: HHNNSS
    //##ModelId=4AD9804C0272
    DECL_EXPORT_DLL CDateTime& setDecTime(long aTime);

    // �������ƣ�
    //   ��Ϊ��ǰ����
    // ���ܣ�
    //   ����������Ϊ��ǰ�������ں�ʱ��
    //##ModelId=4AD9804C0274
    DECL_EXPORT_DLL CDateTime& setToNow();

    // �������ƣ�
    //   ��������
    // ���ܣ�
    //   �ڱ����ڵĻ���������ָ��������
    //##ModelId=4AD9804C0275
    DECL_EXPORT_DLL CDateTime& addDay(int days);

    // �������ƣ�
    //   ��������
    // ���ܣ�
    //   �ڱ����ڵĻ���������ָ��������
    //##ModelId=4AD9804C0277
    DECL_EXPORT_DLL CDateTime& addMonth(int months);

    // �������ƣ�
    //   ��������
    // ���ܣ�
    //   �ڱ����ڵĻ���������ָ��������
    //##ModelId=4AD9804C0279
    DECL_EXPORT_DLL CDateTime& addYear(int years);

    // �������ƣ�
    //   ����Сʱ��
    // ���ܣ�
    //   �ڱ����ڵĻ���������ָ����Сʱ��
    //##ModelId=4AD9804C027B
    DECL_EXPORT_DLL CDateTime& addHour(int hours);

    // �������ƣ�
    //   ���ӷ�����
    // ���ܣ�
    //   �ڱ����ڵĻ���������ָ���ķ�����
    //##ModelId=4AD9804C027D
    DECL_EXPORT_DLL CDateTime& addMin(int minutes);

    // �������ƣ�
    //   ��������
    // ���ܣ�
    //   �ڱ����ڵĻ���������ָ��������
    //##ModelId=4AD9804C027F
    DECL_EXPORT_DLL CDateTime& addSec(int seconds);

    // �������ƣ�
    //   ���Ӻ�����
    // ���ܣ�
    //   �ڱ����ڵĻ���������ָ���ĺ�����
    //##ModelId=4AD9804C0281
    DECL_EXPORT_DLL CDateTime& addMS(int mseconds);

    // �������ƣ�
    //   ������ݺ�
    // ���ܣ�
    //   ���ñ����ڵ����ֵ
    //##ModelId=4AD9804C0283
    DECL_EXPORT_DLL CDateTime& setYear(short left);

    // �������ƣ�
    //   �����·ݺ�
    // ���ܣ�
    //   ���ñ����ڵ��·�ֵ
    //##ModelId=4AD9804C0285
    DECL_EXPORT_DLL CDateTime& setMonth(short left);

    // �������ƣ�
    //   �����պ�
    // ���ܣ�
    //   ���ñ����ڵ��պ�ֵ
    //##ModelId=4AD9804C0287
    DECL_EXPORT_DLL CDateTime& setDay(short left);

    // �������ƣ�
    //   ����ʱ����
    // ���ܣ�
    //   ���ñ�ʱ���Сʱֵ
    //##ModelId=4AD9804C0289
    DECL_EXPORT_DLL CDateTime& setHour(short left);

    // �������ƣ�
    //   ���÷�����
    // ���ܣ�
    //   ���ñ�ʱ��ķ���ֵ
    //##ModelId=4AD9804C028B
    DECL_EXPORT_DLL CDateTime& setMin(short left);

    // �������ƣ�
    //   ��������
    // ���ܣ�
    //   ���ñ�ʱ�����ֵ
    //##ModelId=4AD9804C028D
    DECL_EXPORT_DLL CDateTime& setSec(short left);

    // �������ƣ�
    //   ���ú�����
    // ���ܣ�
    //   ���ñ�ʱ��ĺ���ֵ
    //##ModelId=4AD9804C028F
    DECL_EXPORT_DLL CDateTime& setMS(short left);

	// �жϱ������Ƿ�����
    //##ModelId=4AD9804C0291
    DECL_EXPORT_DLL bool isLeapYear();

    // �������ƣ�
    //   ��ȡ��������ֵ
    // ���ܣ�
    //   ��ȡ�����ڵ�����ֵ����ʽΪYYYYMMDD
    //##ModelId=4AD9804C0292
    DECL_EXPORT_DLL long getDecDate();

    // �������ƣ�
    //   ��ȡʱ������ֵ
    // ���ܣ�
    //   ��ȡ��ʱ�������ֵ����ʽΪhhnnssmmm
    //##ModelId=4AD9804C0293
    DECL_EXPORT_DLL long getDecTime();

    // �������ƣ�
    //   ��ȡ�����ַ���
    // ���ܣ�
    //   ��ȡ�����ڵ��ַ�������ʽΪYYYYMMDD
    //##ModelId=4AD9804C0294
    DECL_EXPORT_DLL const char* getDateStr();

    // �������ƣ�
    //   ��ȡʱ���ַ���
    // ���ܣ�
    //   ��ȡ��ʱ����ַ�������ʽΪhhnnssmmm
    //##ModelId=4AD9804C0295
    DECL_EXPORT_DLL const char* getTimeStr();

    // �������ƣ�
    //   ��ȡ����ʱ���ַ���
    // ���ܣ�
    //   ��ȡ������ʱ����ַ�������ʽΪYYYYMMDD:hhnnssmmm
    //##ModelId=4AD9804C0296
    DECL_EXPORT_DLL const char* getDateTimeStr();

	// �������ڵ��պ�ֵ
    //##ModelId=4AD9804C0297
    DECL_EXPORT_DLL short getDay();

	// �������ڵ��·�ֵ
    //##ModelId=4AD9804C0298
    DECL_EXPORT_DLL short getMonth();

	// �������ڵ����ֵ
    //##ModelId=4AD9804C0299
    DECL_EXPORT_DLL short getYear();

	// ����ʱ���Сʱֵ
    //##ModelId=4AD9804C029A
    DECL_EXPORT_DLL short getHour();

	// ����ʱ��ķ���ֵ
    //##ModelId=4AD9804C029B
    DECL_EXPORT_DLL short getMin();

	// ����ʱ�����ֵ
    //##ModelId=4AD9804C029C
    DECL_EXPORT_DLL short getSec();

	// ����ʱ��ĺ���ֵ
    //##ModelId=4AD9804C029D
    DECL_EXPORT_DLL short getMS();

	// ��������ֵ����1899/12/31��ʼ������
    //##ModelId=4AD9804C029E
    DECL_EXPORT_DLL long getDateVal() const;

	// ����ʱ��ֵ����00:00:00:000��ʼ�ĺ�����
    //##ModelId=4AD9804C02A0
    DECL_EXPORT_DLL long getTimeVal() const;

	// �趨����ֵ����1899/12/31��ʼ������
    //##ModelId=4AD9804C02A2
    DECL_EXPORT_DLL CDateTime& setDateVal(long aDateVal);

	// �趨ʱ��ֵ����00:00:00:000��ʼ�ĺ�����
    //##ModelId=4AD9804C02A4
    DECL_EXPORT_DLL CDateTime& setTimeVal(long aTimeVal);

	// ��ȱȽϷ�
    //##ModelId=4AD9804C02A6
    DECL_EXPORT_DLL bool operator==(CDateTime& right);

	// �����ڱȽϷ�
    //##ModelId=4AD9804C02A8
    DECL_EXPORT_DLL bool operator!=(CDateTime& right);

	// С�ڱȽϷ�
    //##ModelId=4AD9804C02AA
    DECL_EXPORT_DLL bool operator<(CDateTime& right);

	// С�ڵ��ڱȽϷ�
    //##ModelId=4AD9804C02AC
    DECL_EXPORT_DLL bool operator<=(CDateTime& right);

	// ���ڱȽϷ�
    //##ModelId=4AD9804C02AE
    DECL_EXPORT_DLL bool operator>(CDateTime& right);

	// ���ڵ��ڱȽϷ�
    //##ModelId=4AD9804C02B0
    DECL_EXPORT_DLL bool operator>=(CDateTime& right);

	// ��ֵ������
    //##ModelId=4AD9804C02B2
    DECL_EXPORT_DLL CDateTime& operator=(CDateTime& right);

	// ���ز���ϵͳʱ��ֵ����1970/1/1��ʼ������
    //##ModelId=4AD9804C02B4
    DECL_EXPORT_DLL long getOSTime();
    
	// ���ر����ڵ�����ֵ
    DECL_EXPORT_DLL int getWeekDay() const;

  private:
  	
    //##ModelId=4AD9804C02B6
    void syncDateTime();

    //##ModelId=4AD9804C02B7
    void syncVal();

    //##ModelId=4AD9804C0232
    short Year;

    //##ModelId=4AD9804C0233
    short Month;

    //##ModelId=4AD9804C0234
    short Day;

    //##ModelId=4AD9804C0235
    short Hour;

    //##ModelId=4AD9804C0242
    short Min;

    //##ModelId=4AD9804C0243
    short Sec;

    //##ModelId=4AD9804C0244
    short Ms;

    //##ModelId=4AD9804C0245
    long DateVal;

    //##ModelId=4AD9804C0246
    long TimeVal;

    //##ModelId=4AD9804C0247
    char StrDT[19];

    //##ModelId=4AD9804C0248
    char StrDate[9];

    //##ModelId=4AD9804C0249
    char StrTime[10];

    //##ModelId=4AD9804C0251
    bool ValChanged;

    //##ModelId=4AD9804C0252
    short DstFlag;

};

#endif /* INCLUDE_PUBLIC_CDATETIME_H_HEADER_INCLUDED_C15AA25E */
