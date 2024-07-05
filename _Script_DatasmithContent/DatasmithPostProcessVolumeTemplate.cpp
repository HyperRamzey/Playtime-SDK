#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithObjectTemplate.hpp"
#include "DatasmithPostProcessVolumeTemplate.hpp"
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithPostProcessVolumeTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithPostProcessVolumeTemplate");
    return result;
}
void* _Script_DatasmithContent::DatasmithPostProcessVolumeTemplate::get_Settings() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_DatasmithContent::DatasmithPostProcessVolumeTemplate::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_DatasmithContent::DatasmithPostProcessVolumeTemplate::set_bUnbound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_DatasmithContent::DatasmithPostProcessVolumeTemplate::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_DatasmithContent::DatasmithPostProcessVolumeTemplate::get_bUnbound() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 2 != 0;
}
