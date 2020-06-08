## 遇到的问题：

1. 使用 UnLua，C++ 中使用`IUnLuaInterface`找不到对应的类，头文件添加`#include "UnLuaInterface.h"`后提示找不到对应的文件，最后发现需要在`xxx.Build.cs`中添加依赖模块，如下：

```c#
PrivateDependencyModuleNames.AddRange(
new string[]
{
    "UnLua"
});
```
