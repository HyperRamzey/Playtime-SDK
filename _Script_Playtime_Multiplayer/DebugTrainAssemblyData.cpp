#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "DebugTrainAssemblyData.hpp"
_Script_Engine::SkeletalMesh*& _Script_Playtime_Multiplayer::DebugTrainAssemblyData::get_TrainLocomotive() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x0);
}
_Script_Engine::SkeletalMesh*& _Script_Playtime_Multiplayer::DebugTrainAssemblyData::get_TrainTender() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x8);
}
_Script_Engine::SkeletalMesh*& _Script_Playtime_Multiplayer::DebugTrainAssemblyData::get_PassengerCart() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::DebugTrainAssemblyData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.DebugTrainAssemblyData");
    return result;
}
