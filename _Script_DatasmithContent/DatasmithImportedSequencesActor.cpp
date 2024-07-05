#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithImportedSequencesActor.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_LevelSequence\LevelSequence.hpp"
void* _Script_DatasmithContent::DatasmithImportedSequencesActor::get_ImportedSequences() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Script_DatasmithContent::DatasmithImportedSequencesActor::PlayLevelSequence(_Script_LevelSequence::LevelSequence* SequenceToPlay) {
    return;
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithImportedSequencesActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithImportedSequencesActor");
    return result;
}
