#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSubSection.hpp"
#include "MovieSceneCinematicShotSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneCinematicShotSection::get_ShotDisplayName() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_MovieSceneTracks::MovieSceneCinematicShotSection::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCinematicShotSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection");
    return result;
}
void _Script_MovieSceneTracks::MovieSceneCinematicShotSection::SetShotDisplayName(void* InShotDisplayName) {
    return;
}
void* _Script_MovieSceneTracks::MovieSceneCinematicShotSection::GetShotDisplayName() {
    return;
}
