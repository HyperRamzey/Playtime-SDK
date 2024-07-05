#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneObjectBindingID.hpp"
int32_t& _Script_MovieScene::MovieSceneObjectBindingID::get_ResolveParentIndex() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
void* _Script_MovieScene::MovieSceneObjectBindingID::get_Guid() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_MovieScene::MovieSceneObjectBindingID::get_SequenceID() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneObjectBindingID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneObjectBindingID");
    return result;
}
