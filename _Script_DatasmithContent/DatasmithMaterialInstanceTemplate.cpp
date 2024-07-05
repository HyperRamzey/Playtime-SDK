#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithMaterialInstanceTemplate.hpp"
#include "DatasmithObjectTemplate.hpp"
void* _Script_DatasmithContent::DatasmithMaterialInstanceTemplate::get_ScalarParameterValues() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_DatasmithContent::DatasmithMaterialInstanceTemplate::get_ParentMaterial() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_DatasmithContent::DatasmithMaterialInstanceTemplate::get_VectorParameterValues() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_DatasmithContent::DatasmithMaterialInstanceTemplate::get_TextureParameterValues() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithMaterialInstanceTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithMaterialInstanceTemplate");
    return result;
}
void* _Script_DatasmithContent::DatasmithMaterialInstanceTemplate::get_StaticParameters() {
    return (void*)((uintptr_t)this + 0x148);
}
