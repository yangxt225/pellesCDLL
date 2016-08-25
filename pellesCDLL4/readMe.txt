1. 本文档主要描述使用Pelles C创建 Win32 DLL wizard动态库，并供VS2008下创建的MFC工程调用；
2. 首先"File->New->Project"，选择Win32 DLL wizard；
3. 在项目文件夹目录下，新建test文件夹，在里面添加test.c，test.h和test.def文件，内容可以使用上面创建模板时生成的文件（dllMain.c, .def和.h文件，做适当修改，参见附录源码）；
4. 使用pelles C打开上面创建的动态库项目，在界面右边，右键项目下的dllMain文件，删除（因为我们使用了我们自己命名的test文件夹下的文件）；
5. 删除模板生成的文件之后，再次右键动态库项目，选择"Add files to Project"，将动态库目录下我们上面创建的test文件夹下的test.c和test.def文件添加进项目；
5. 编译构建，会在pelles C界面的项目工程下面产生"Include files"文件夹,test.c引用到的头文件test.h也会被添加到此路径下（注意，这里只是在pelles C的界面中产生"Include files"文件夹，但实际硬盘上并没有产生相应的文件夹）。生成dll，lib和exp三个文件；
6. 在vs2008下创建MFC工程testDLL，加载动态库，并添加相应的调用逻辑；
7. 将MFC工程debug目录下的exe文件（testDll.exe）拷贝至pelles动态库工程目录下，右键pelles动态库工程，选择"project options->General",在"Executable helper for DLL projects："中，添加"./testDll.exe",确定。
8. 在pelles C中运行动态库项目（点击红色感叹号）,就可以打开动态库关联的testDLL.exe实例了。这样就可以进行动态库的调试（也即调用动态库的导出函数）。