#include "..\FUObjectArray.hpp"
#include "..\_Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence\BP_SpawnSequence_C.hpp"
#include "BP_SpawnSequence_Specialist_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Gameplay_Sequences_SpawnSequence_BP_SpawnSequence_Specialist::BP_SpawnSequence_Specialist_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Gameplay/Sequences/SpawnSequence/BP_SpawnSequence_Specialist.BP_SpawnSequence_Specialist_C");
    return result;
}
