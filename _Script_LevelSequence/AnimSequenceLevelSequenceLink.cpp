#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AssetUserData.hpp"
#include "AnimSequenceLevelSequenceLink.hpp"
void* _Script_LevelSequence::AnimSequenceLevelSequenceLink::get_PathToLevelSequence() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_LevelSequence::AnimSequenceLevelSequenceLink::get_SkelTrackGuid() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_LevelSequence::AnimSequenceLevelSequenceLink::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LevelSequence.AnimSequenceLevelSequenceLink");
    return result;
}
