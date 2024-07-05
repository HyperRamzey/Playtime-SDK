#include "..\FUObjectArray.hpp"
#include "ControlRig.hpp"
#include "MovieSceneControlRigParameterTrack.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
_Script_ControlRig::ControlRig*& _Script_ControlRig::MovieSceneControlRigParameterTrack::get_ControlRig() {
    return *(_Script_ControlRig::ControlRig**)((uintptr_t)this + 0xa0);
}
_Script_MovieScene::MovieSceneSection*& _Script_ControlRig::MovieSceneControlRigParameterTrack::get_SectionToKey() {
    return *(_Script_MovieScene::MovieSceneSection**)((uintptr_t)this + 0xa8);
}
void* _Script_ControlRig::MovieSceneControlRigParameterTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_ControlRig::MovieSceneControlRigParameterTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.MovieSceneControlRigParameterTrack");
    return result;
}
void* _Script_ControlRig::MovieSceneControlRigParameterTrack::get_TrackName() {
    return (void*)((uintptr_t)this + 0xc0);
}
