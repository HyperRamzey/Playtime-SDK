#include "..\FUObjectArray.hpp"
#include "ClothingAssetCommon.hpp"
#include "ClothingAssetCustomData.hpp"
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingAssetBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicsAsset.hpp"
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_UsedBoneNames() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_LODData() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_Engine::PhysicsAsset*& _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_PhysicsAsset() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0x48);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_ClothConfigs() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_LodMap() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_ClothingSystemRuntimeCommon::ClothingAssetCustomData*& _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_CustomData() {
    return *(_Script_ClothingSystemRuntimeCommon::ClothingAssetCustomData**)((uintptr_t)this + 0xe8);
}
void* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_UsedBoneIndices() {
    return (void*)((uintptr_t)this + 0xd0);
}
int32_t& _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::get_ReferenceBoneIndex() {
    return *(int32_t*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntimeCommon::ClothingAssetCommon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon");
    return result;
}
