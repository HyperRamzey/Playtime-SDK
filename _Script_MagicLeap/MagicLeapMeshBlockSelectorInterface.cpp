#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "MagicLeapMeshBlockSelectorInterface.hpp"
#include "MagicLeapTrackingMeshInfo.hpp"
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapMeshBlockSelectorInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeap.MagicLeapMeshBlockSelectorInterface");
    return result;
}
void _Script_MagicLeap::MagicLeapMeshBlockSelectorInterface::SelectMeshBlocks(_Script_MagicLeap::MagicLeapTrackingMeshInfo& NewMeshInfo, void*& RequestedMesh) {
    return;
}
