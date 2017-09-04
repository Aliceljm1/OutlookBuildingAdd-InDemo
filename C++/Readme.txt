目前此项目只在VS2010上编译通过

************************************************lesson1************************************************
https://msdn.microsoft.com/en-us/library/office/ee941475(v=office.14).aspx
1.New ATL project,
2.Add new Simple ATL object class,
3.类 视图中 Implement  Microsoft Add-In Designer <1.0>   _IDTExtensbility2  interface
4.Add code in OnConnect method,
5.Add reg in  Connect.rgs, tell office there is a add-in need to be load
6.Change the target plat to X64 OR WIN32.

Run cmd ：regsvr32  NativeAddIn.dll


************************************************lesson2************************************************

Adding a Ribbon and a Ribbon Button






