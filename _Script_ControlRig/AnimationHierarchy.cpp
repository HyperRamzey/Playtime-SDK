#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimationCore\NodeHierarchyWithUserData.hpp"
#include "AnimationHierarchy.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ControlRig::AnimationHierarchy::get_UserData() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_ControlRig::AnimationHierarchy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.AnimationHierarchy");
    return result;
}
