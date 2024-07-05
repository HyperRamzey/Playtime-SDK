#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapHeadTrackingState.hpp"
void* _Script_MagicLeap::MagicLeapHeadTrackingState::get_Error() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_MagicLeap::MagicLeapHeadTrackingState::get_Mode() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_MagicLeap::MagicLeapHeadTrackingState::get_Confidence() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapHeadTrackingState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeap.MagicLeapHeadTrackingState");
    return result;
}
