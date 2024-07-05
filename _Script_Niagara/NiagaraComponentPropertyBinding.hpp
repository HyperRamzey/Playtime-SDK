#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraComponentPropertyBinding {
    private: char pad_0[0xe8]; public:
    void* get_AttributeBinding();
    void* get_PropertyName();
    void* get_PropertyType();
    void* get_MetadataSetterName();
    void* get_PropertySetterParameterDefaults();
    void* get_WritableValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
