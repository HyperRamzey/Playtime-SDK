#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSection.hpp"
#include "MovieSceneTrackEvaluationFieldEntry.hpp"
void* _Script_MovieScene::MovieSceneTrackEvaluationFieldEntry::get_LegacySortOrder() {
    return (void*)((uintptr_t)this + 0x1e);
}
_Script_MovieScene::MovieSceneSection*& _Script_MovieScene::MovieSceneTrackEvaluationFieldEntry::get_Section() {
    return *(_Script_MovieScene::MovieSceneSection**)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneTrackEvaluationFieldEntry::get_Range() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieScene::MovieSceneTrackEvaluationFieldEntry::get_ForcedTime() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MovieScene::MovieSceneTrackEvaluationFieldEntry::get_Flags() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackEvaluationFieldEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTrackEvaluationFieldEntry");
    return result;
}
