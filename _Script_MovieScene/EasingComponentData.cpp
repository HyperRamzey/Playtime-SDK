#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EasingComponentData.hpp"
#include "MovieSceneSection.hpp"
_Script_MovieScene::MovieSceneSection*& _Script_MovieScene::EasingComponentData::get_Section() {
    return *(_Script_MovieScene::MovieSceneSection**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieScene::EasingComponentData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.EasingComponentData");
    return result;
}
