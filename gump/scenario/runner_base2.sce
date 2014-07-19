#
# ѹ�����Ե�Ŀ��CORBA���������� 
#
test-case TM_SVR

#
# ѹ�����Ե�ʱ�� (minutes)
#
time-elapse 20 

#
#  �����û����� 
#  ÿ�������û�ִ�еķ������ƣ���������Ϣ
#
virtual-user
    base2:10     #10�������û�ִ��С����ǻ������
    base3:10     #10�������û�ִ��С����ǻ������

#
# ÿ�ʽ��׵�˼��ʱ��(��λ����)
#
think-time  100


#
# ��־���� 0 - DEBUG; 1 - INFO; 2 - WARN; 3 - ERROR; 4 - ALWAYS
#
log-level 0

#
# redis �������ĵ�ַ
#
#redis-server     127.0.0.1:6379
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
    libluacorba.so luaopen_corbalib


#
# ��ˮ�ŷ���������
#
sequence
    seq_1  50     #��ˮ��ID:seq_1, ��ʼ����Ĭ����ˮ��50
    seq_2  100    #��ˮ��ID:seq_2, ��ʼ��Ĭ����ˮ��100
    seq_3  0      #��ˮ��ID:seq_3, ��ʼ��Ĭ����ˮ��0

