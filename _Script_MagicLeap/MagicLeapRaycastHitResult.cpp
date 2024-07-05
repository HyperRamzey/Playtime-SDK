#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapRaycastHitResult.hpp"
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapRaycastHitResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeap.MagicLeapRaycastHitResult");
    return result;
}
void* _Script_MagicLeap::MagicLeapRaycastHitResult::get_HitState() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MagicLeap::MagicLeapRaycastHitResult::get_HitPoint() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_MagicLeap::MagicLeapRaycastHitResult::get_Normal() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_MagicLeap::MagicLeapRaycastHitResult::get_Confidence() {
    return *(float*)((uintptr_t)this + 0x1c);
}
int32_t& _Script_MagicLeap::MagicLeapRaycastHitResult::get_UserData() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
