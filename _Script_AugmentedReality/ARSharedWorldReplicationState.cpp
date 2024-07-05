#include "..\FUObjectArray.hpp"
#include "ARSharedWorldReplicationState.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AugmentedReality::ARSharedWorldReplicationState::get_PreviewImageOffset() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_AugmentedReality::ARSharedWorldReplicationState::get_ARWorldOffset() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARSharedWorldReplicationState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARSharedWorldReplicationState");
    return result;
}
