#include "..\FUObjectArray.hpp"
#include "ARFaceUpdatePayload.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AugmentedReality::ARFaceUpdatePayload::get_SessionPayload() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AugmentedReality::ARFaceUpdatePayload::get_LeftEyePosition() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_AugmentedReality::ARFaceUpdatePayload::get_RightEyePosition() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_AugmentedReality::ARFaceUpdatePayload::get_LookAtTarget() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARFaceUpdatePayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARFaceUpdatePayload");
    return result;
}
