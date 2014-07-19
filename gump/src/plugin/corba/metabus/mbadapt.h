#ifndef INCL_MBADAPT_H_HEADER_INCLUDED_BDC5398A
#define INCL_MBADAPT_H_HEADER_INCLUDED_BDC5398A

#include <stdio.h>
#include <stdlib.h>
#include <mypub.h>

class CMbAdapt
{
  public:

	CMbAdapt(const char* aAdaptId);

    // ���������󶨵�ȱʡ��������������
    void bindWFM(const char* aWfmId);

    // װ�����������������ļ�
    virtual int loadCfg() = 0;

    // ��ʼ����������ͨ��
    virtual int initExtConn() = 0;

    // ���������������󲢵ȴ�ͬ��Ӧ��
    int sndReqToWfm(const char* aSvcName, void* aReqPkg, void* aRspPkg, 
					int aTimeout=0, const char* aWfmId=NULL);

    // �յ��������������Զ��崦��
    virtual int rcvReqFromWfm(void* aReqPkg, void* aRspPkg) = 0;

    // �������������첽Ӧ��
    int sndRspToWfm(const char* aSerialNo, const char* aActId, void* aRspMp);

    // ����ͨ������Ӧ����Զ��崦��
    virtual int sndRspToOutter(void* aRspPkg) = 0;

	inline const char* getAdaptId() { return AdaptId; };

	inline const char* getWfmId() { return WfmId; };

  protected:

	char AdaptId[32];

	char WfmId[32];

};

#endif 
