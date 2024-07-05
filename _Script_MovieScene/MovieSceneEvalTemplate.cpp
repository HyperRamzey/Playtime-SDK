#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvalTemplate.hpp"
#include "MovieSceneEvalTemplateBase.hpp"
void* _Script_MovieScene::MovieSceneEvalTemplate::get_CompletionMode() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MovieScene::MovieSceneEvalTemplate::get_SourceSectionPtr() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvalTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvalTemplate");
    return result;
}
