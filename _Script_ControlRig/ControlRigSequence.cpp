#include "..\FUObjectArray.hpp"
#include "ControlRigSequence.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_LevelSequence\LevelSequence.hpp"
void* _Script_ControlRig::ControlRigSequence::get_LastExportedToAnimationSequence() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Script_ControlRig::ControlRigSequence::get_LastExportedUsingSkeletalMesh() {
    return (void*)((uintptr_t)this + 0x1f0);
}
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigSequence");
    return result;
}
float& _Script_ControlRig::ControlRigSequence::get_LastExportedFrameRate() {
    return *(float*)((uintptr_t)this + 0x218);
}
