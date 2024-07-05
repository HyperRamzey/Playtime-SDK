#include "..\FUObjectArray.hpp"
#include "ControlRig.hpp"
#include "MovieSceneControlRigParameterSection.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieSceneTracks\MovieSceneParameterSection.hpp"
void* _Script_ControlRig::MovieSceneControlRigParameterSection::get_EnumParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0x260);
}
_Script_ControlRig::ControlRig*& _Script_ControlRig::MovieSceneControlRigParameterSection::get_ControlRig() {
    return *(_Script_ControlRig::ControlRig**)((uintptr_t)this + 0x148);
}
void* _Script_ControlRig::MovieSceneControlRigParameterSection::get_ControlRigClass() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_ControlRig::MovieSceneControlRigParameterSection::get_ControlsMask() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_ControlRig::MovieSceneControlRigParameterSection::get_ControlChannelMap() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Script_ControlRig::MovieSceneControlRigParameterSection::get_TransformMask() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_ControlRig::MovieSceneControlRigParameterSection::get_IntegerParameterNamesAndCurves() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Script_ControlRig::MovieSceneControlRigParameterSection::get_Weight() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_ControlRig::MovieSceneControlRigParameterSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.MovieSceneControlRigParameterSection");
    return result;
}
