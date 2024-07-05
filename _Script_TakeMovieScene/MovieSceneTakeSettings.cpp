#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneTakeSettings.hpp"
void* _Script_TakeMovieScene::MovieSceneTakeSettings::get_SlateName() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_TakeMovieScene::MovieSceneTakeSettings::get_HoursName() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_TakeMovieScene::MovieSceneTakeSettings::get_SubFramesName() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_TakeMovieScene::MovieSceneTakeSettings::get_MinutesName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_TakeMovieScene::MovieSceneTakeSettings::get_SecondsName() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_TakeMovieScene::MovieSceneTakeSettings::get_FramesName() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_TakeMovieScene::MovieSceneTakeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TakeMovieScene.MovieSceneTakeSettings");
    return result;
}
