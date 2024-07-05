#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StructSerializerArrayTestStruct.hpp"
_Script_CoreUObject::Class* _Script_Serialization::StructSerializerArrayTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Serialization.StructSerializerArrayTestStruct");
    return result;
}
void* _Script_Serialization::StructSerializerArrayTestStruct::get_ByteArray() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Serialization::StructSerializerArrayTestStruct::get_Int32Array() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Serialization::StructSerializerArrayTestStruct::get_StaticSingleElement() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Serialization::StructSerializerArrayTestStruct::get_StaticInt32Array() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
float& _Script_Serialization::StructSerializerArrayTestStruct::get_StaticFloatArray() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_Serialization::StructSerializerArrayTestStruct::get_VectorArray() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Serialization::StructSerializerArrayTestStruct::get_StructArray() {
    return (void*)((uintptr_t)this + 0x50);
}
