1. ���ĵ���Ҫ����ʹ��Pelles C���� Win32 DLL wizard��̬�⣬����VS2008�´�����MFC���̵��ã�
2. ����"File->New->Project"��ѡ��Win32 DLL wizard��
3. ����Ŀ�ļ���Ŀ¼�£��½�test�ļ��У����������test.c��test.h��test.def�ļ������ݿ���ʹ�����洴��ģ��ʱ���ɵ��ļ���dllMain.c, .def��.h�ļ������ʵ��޸ģ��μ���¼Դ�룩��
4. ʹ��pelles C�����洴���Ķ�̬����Ŀ���ڽ����ұߣ��Ҽ���Ŀ�µ�dllMain�ļ���ɾ������Ϊ����ʹ���������Լ�������test�ļ����µ��ļ�����
5. ɾ��ģ�����ɵ��ļ�֮���ٴ��Ҽ���̬����Ŀ��ѡ��"Add files to Project"������̬��Ŀ¼���������洴����test�ļ����µ�test.c��test.def�ļ���ӽ���Ŀ��
5. ���빹��������pelles C�������Ŀ�����������"Include files"�ļ���,test.c���õ���ͷ�ļ�test.hҲ�ᱻ��ӵ���·���£�ע�⣬����ֻ����pelles C�Ľ����в���"Include files"�ļ��У���ʵ��Ӳ���ϲ�û�в�����Ӧ���ļ��У�������dll��lib��exp�����ļ���
6. ��vs2008�´���MFC����testDLL�����ض�̬�⣬�������Ӧ�ĵ����߼���
7. ��MFC����debugĿ¼�µ�exe�ļ���testDll.exe��������pelles��̬�⹤��Ŀ¼�£��Ҽ�pelles��̬�⹤�̣�ѡ��"project options->General",��"Executable helper for DLL projects��"�У����"./testDll.exe",ȷ����
8. ��pelles C�����ж�̬����Ŀ�������ɫ��̾�ţ�,�Ϳ��Դ򿪶�̬�������testDLL.exeʵ���ˡ������Ϳ��Խ��ж�̬��ĵ��ԣ�Ҳ�����ö�̬��ĵ�����������