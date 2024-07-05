#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapARPinQuery.hpp"
void* _Script_MagicLeapARPin::MagicLeapARPinQuery::get_Types() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_MagicLeapARPin::MagicLeapARPinQuery::get_MaxResults() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
float& _Script_MagicLeapARPin::MagicLeapARPinQuery::get_Radius() {
    return *(float*)((uintptr_t)this + 0x60);
}
void* _Script_MagicLeapARPin::MagicLeapARPinQuery::get_TargetPoint() {
    return (void*)((uintptr_t)this + 0x54);
}
void _Script_MagicLeapARPin::MagicLeapARPinQuery::set_bSorted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x64 + 0);
    *(uint8_t*)((uintptr_t)this + 0x64 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MagicLeapARPin::MagicLeapARPinQuery::get_bSorted() {
    return (*(uint8_t*)((uintptr_t)this + 0x64 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_MagicLeapARPin::MagicLeapARPinQuery::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapARPin.MagicLeapARPinQuery");
    return result;
}
