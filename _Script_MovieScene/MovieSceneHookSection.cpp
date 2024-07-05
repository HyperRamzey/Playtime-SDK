#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneHookSection.hpp"
#include "MovieSceneSection.hpp"
bool _Script_MovieScene::MovieSceneHookSection::get_bRequiresRangedHook() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneHookSection::set_bRequiresRangedHook(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieScene::MovieSceneHookSection::set_bRequiresTriggerHooks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_MovieScene::MovieSceneHookSection::get_bRequiresTriggerHooks() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneHookSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneHookSection");
    return result;
}
