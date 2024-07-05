#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "DatasmithSceneComponentTemplate.hpp"
void* _Script_DatasmithContent::DatasmithSceneComponentTemplate::get_AttachParent() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_DatasmithContent::DatasmithSceneComponentTemplate::get_RelativeTransform() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_DatasmithContent::DatasmithSceneComponentTemplate::get_Mobility() {
    return (void*)((uintptr_t)this + 0x60);
}
bool _Script_DatasmithContent::DatasmithSceneComponentTemplate::get_bVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithSceneComponentTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithSceneComponentTemplate");
    return result;
}
void _Script_DatasmithContent::DatasmithSceneComponentTemplate::set_bVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_DatasmithContent::DatasmithSceneComponentTemplate::get_Tags() {
    return (void*)((uintptr_t)this + 0x98);
}
