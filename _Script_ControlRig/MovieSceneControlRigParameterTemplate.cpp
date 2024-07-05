#include "..\FUObjectArray.hpp"
#include "MovieSceneControlRigParameterTemplate.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieSceneTracks\MovieSceneParameterSectionTemplate.hpp"
void* _Script_ControlRig::MovieSceneControlRigParameterTemplate::get_Enums() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ControlRig::MovieSceneControlRigParameterTemplate::get_Integers() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_ControlRig::MovieSceneControlRigParameterTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ControlRig.MovieSceneControlRigParameterTemplate");
    return result;
}
