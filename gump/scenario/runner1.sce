#
# ѹ�����Ե�Ŀ��CORBA���������� 
#
test-case TM_SVR

#
# ѹ�����Ե�ʱ�� (minutes)
#
time-elapse 5 

#
#  �����û����� 
#  ÿ�������û�ִ�еķ������ƣ���������Ϣ
#
virtual-user
    beps_credit_going:2     #10�������û�ִ��С����ǻ������
    base:5     #10�������û�ִ��С����ǻ������
#    tcp:1

#
# ÿ�ʽ��׵�˼��ʱ��(��λ����)
#
think-time  100


#
# ��־���� 0 - DEBUG; 1 - INFO; 2 - WARN; 3 - ERROR; 4 - ALWAYS
#
log-level 2

#
# redis �������ĵ�ַ
#
#redis-server     tcp://127.0.0.1:6379
redis-server     unix:///tmp/redis.sock


#
# ��������Ŀ¼�����Ǿ���Ŀ¼�����Ŀ¼
#
report-dir  /home/ap/aps/log


#
# ����ģʽ(THREAD/PROCESS) ���̻��߳�ģʽ
#
run-mode PROCESS


#
# PLUGIN ���ӵĿ�
#
plugin
    libluabase.so  luaopen_baselib
    libluacorba.so luaopen_corbalib
