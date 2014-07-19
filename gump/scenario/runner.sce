#
# ���԰���������
#
test-case TM_SVR

#
# ѹ�����Ե�ʱ�� (minutes)
#
time-elapse 10 

#
#  �����û����� 
#  ÿ�������û�ִ�еķ������ƣ���������Ϣ
#
virtual-user
    beps_credit_going:2     #10�������û�ִ��С����ǻ������
#    hvps_credit_going:1     #10�������û�ִ��С����ǻ������

#
# ÿ�ʽ��׵�˼��ʱ��(��λ����), ע��thinktime��ʱ��ή��ϵͳ��ÿ�뽻�״�����
#
#think-time  200


#
# ��־���� 0 - DEBUG; 1 - INFO; 2 - WARN; 3 - ERROR; 4 - ALWAYS
#
log-level 0

#
# redis �������ĵ�ַ
#      tcp://xxx.xxx.xxx.xxx:xxxx - tcp ��ʽ����redis��������Զ�̷�ʽ
#      unix:///filepath/          - unix ��ʽ�������ӣ����ط�ʽ 
#
#redis-server     tcp://127.0.0.1:6379
redis-server     unix:///tmp/redis.sock 


#
# ��������Ŀ¼�����Ǿ���Ŀ¼�����Ŀ¼(����)
#
report-dir  /home/ap/aps/log


#
# ����ģʽ(THREAD/PROCESS) 
#    THREAD - �����û��Խ��̷�ʽ����
#    PROCESS - �����û����߳�ģʽ���� 
#
run-mode PROCESS


#
# PLUGIN �����Ķ�̬�����ƣ�����ں������������${RUNNERDIR}/libĿ¼��,
#        ����LD_LIBRARY_PATH��ָ��${RUNNERDIR}/libΪ��̬��������·��
#
plugin
    libluabase.so  luaopen_baselib
    libluacorba.so luaopen_corbalib
