#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapTrackingMeshInfo.hpp"
void* _Script_MagicLeap::MagicLeapTrackingMeshInfo::get_BlockData() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MagicLeap::MagicLeapTrackingMeshInfo::get_Timestamp() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapTrackingMeshInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeap.MagicLeapTrackingMeshInfo");
    return result;
}
