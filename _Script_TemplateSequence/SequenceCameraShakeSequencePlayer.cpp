#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
#include "SequenceCameraShakeSequencePlayer.hpp"
void* _Script_TemplateSequence::SequenceCameraShakeSequencePlayer::get_RootTemplateInstance() {
    return (void*)((uintptr_t)this + 0x2e0);
}
_Script_CoreUObject::Object*& _Script_TemplateSequence::SequenceCameraShakeSequencePlayer::get_BoundObjectOverride() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x2d0);
}
_Script_MovieScene::MovieSceneSequence*& _Script_TemplateSequence::SequenceCameraShakeSequencePlayer::get_Sequence() {
    return *(_Script_MovieScene::MovieSceneSequence**)((uintptr_t)this + 0x2d8);
}
_Script_CoreUObject::Class* _Script_TemplateSequence::SequenceCameraShakeSequencePlayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer");
    return result;
}
